#include "GameManager.h"
#include "MapControl.h"
#include <iostream>
#include <SFML/Graphics.hpp>

GameManager::GameManager()
{
    //loading fonts from font directory 
    //TEXT CANT BE DRAWN IF FONT IS NOT LOADED
    isFontLoaded = true;
    if (!comicSans.loadFromFile("fonts\\comic_sans.ttf"))
    {
        isFontLoaded = false;
        std::cout << "ERROR LOADING FONT \n";
    }
    //loading what types of text to be displayed
    for (int i = 0; i < 3; i++)
    {
        text.push_back(sf::Text());
        text[i].setFont(comicSans);
        text[i].setCharacterSize(15);
        text[i].setFillColor(sf::Color::White);
        text[i].setPosition(sf::Vector2f(20, 20+(20*i)));
    }

    text[0].setString("Generation: 0");
    text[1].setString("Best Fitness: 0");
    text[2].setString("Time: 0");
}

void GameManager::createMap(int level) {
    map = MapControl(level);
}

void GameManager::startBreeding() {

}

void GameManager::startGame() {

    //TODO: CHANGE TO IMPLEMENT GENETIC ALGORITHM
    for (unsigned int i = 0; i < 10; i++)
        agents.push_back(Agent(20, 20));

    platVectors = map.getPlatforms();
    PlayerEnd = map.getEnd();
    PlayerSpawn = map.getSpawn();

    for(unsigned int i = 0; i < agents.size(); i++)
        agents[i].setPosition(PlayerSpawn);
}

void GameManager::step(sf::RenderWindow* window)
{

    takeInputs();

    for (unsigned int it = 0; it < agents.size(); it++)
    {
        agents[it].randomAction(&platVectors);
        agents[it].Update();

        if (agents[it].getVelocity()->y > 0) // ONLY CHECK COLLISIONS IF THE PLAYER IS FALLING DOWN
        {
            for (unsigned int i = 0; i < platVectors.size(); i++) {
                if (platVectors.at(i).checkCollision(agents[it].getPosition(), agents[it].getSize()) && !agents[it].alreadyCollided)
                {
                    agents[it].setPosition(sf::Vector2f(agents[it].getPosition()->x, platVectors.at(i).getPosition()->y - agents[it].getSize()->y));
                    agents[it].getAcceleration()->y = 0;
                    agents[it].grounded = true;
                    agents[it].alreadyCollided = true;

                }
            }
            if (PlayerEnd.checkCollision(agents[it].getPosition(), agents[it].getSize()))
            {
                agents[it].setPosition(sf::Vector2f(20, 20));
            }
        }
        if (agents[it].getVelocity()->y < 0) // ONLY CHECK COLLISIONS IF THE PLAYER IS FALLING DOWN
        {
            for (unsigned int i = 0; i < platVectors.size(); i++) {
                if (platVectors.at(i).checkCollision(agents[it].getPosition(), agents[it].getSize()) && !agents[it].alreadyCollided)
                {
                    agents[it].setPosition(sf::Vector2f(agents[it].getPosition()->x, platVectors.at(i).getPosition()->y + platVectors.at(i).getSize()->y));
                    agents[it].getAcceleration()->y = 0;
                    agents[it].getVelocity()->y = 0;
                    agents[it].alreadyCollided = true;
                }
            }
        }
        if (agents[it].getPosition()->x < 0)
            agents[it].setPosition(sf::Vector2f(0, agents[it].getPosition()->y));

        agents[it].alreadyCollided = false;
    }
    sf::View view;
    view.setCenter(sf::Vector2f(360.f, 250.f));
    view.setSize(sf::Vector2f(720.f, 500.f));

    Agent* furthestAgent = &(agents[0]);
    float furthestXPosition = agents[0].getPosition()->x;

    for (unsigned int i = 0; i < agents.size(); i++)
        if (agents[i].getPosition()->x > furthestXPosition)
        {
            furthestAgent = &(agents[i]);
            furthestXPosition = agents[i].getPosition()->x;
        }
    // Screen scrolling
    if (((*window).mapCoordsToPixel(sf::Vector2f(((*furthestAgent).getPosition()->x), ((*furthestAgent).getPosition()->y))).x) > 300)
    {
        for (unsigned int i = 0; i < platVectors.size(); i++)
        {
            platVectors[i].setPosition(
                          sf::Vector2f(platVectors[i].getPosition()->x - 3.f,
                          platVectors[i].getPosition()->y));
        }
        (*furthestAgent).setPosition(sf::Vector2f((*furthestAgent).getPosition()->x - 3.f, (*furthestAgent).getPosition()->y));
    }
}

void GameManager::drawStats(sf::RenderWindow* window)
{

    if (isFontLoaded)
        for (int i = 0; i < 3; i++)
            window->draw(text[i]);
}

void GameManager::takeInputs()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
        getAgent(0)->Jump();
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        getAgent(0)->MoveForward(&this->platVectors);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        getAgent(0)->MoveBackward(&this->platVectors);
}

void GameManager::DrawAll(sf::RenderWindow * window)
{
    window->display();
    window->clear();


    for (unsigned int i = 0; i < agents.size(); i++)
        agents[i].Draw(window);
    for (unsigned int i = 0; i < platVectors.size(); i++)
        platVectors.at(i).Draw(window);
    
    drawStats(window);
}

Agent* GameManager::getAgent(int iterator)
{
    return &agents[iterator];
}


    


