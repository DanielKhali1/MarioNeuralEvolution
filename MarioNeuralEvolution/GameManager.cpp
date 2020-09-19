#include "GameManager.h"
#include "MapControl.h"
#include <iostream>
#include <SFML/Graphics.hpp>

GameManager::GameManager()
{
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


    for (unsigned int it = 0; it < agents.size(); it++)
    {
        agents[it].Update();

        agents[it].randomAction();
        if (agents[it].getVelocity()->y > 0) // ONLY CHECK COLLISIONS IF THE PLAYER IS FALLING DOWN
        {
            for (unsigned int i = 0; i < platVectors.size(); i++) {
                if (platVectors.at(i).checkCollision(agents[it].getPosition(), agents[it].getSize()))
                {
                    agents[it].setPosition(sf::Vector2f(agents[it].getPosition()->x, platVectors.at(i).getPosition()->y - agents[it].getSize()->y));
                    agents[it].getAcceleration()->y = 0;
                    agents[it].grounded = true;
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
                if (platVectors.at(i).checkCollision(agents[it].getPosition(), agents[it].getSize()))
                {
                    agents[it].setPosition(sf::Vector2f(agents[it].getPosition()->x, platVectors.at(i).getPosition()->y + platVectors.at(i).getSize()->y));
                    agents[it].getAcceleration()->y = 0;
                    agents[it].getVelocity()->y = 0;
                }
            }
        }
        if (agents[it].getPosition()->x < 0)
            agents[it].setPosition(sf::Vector2f(0, agents[it].getPosition()->y));
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

void GameManager::DrawAll(sf::RenderWindow * window)
{
    window->display();
    window->clear();

    for (unsigned int i = 0; i < agents.size(); i++)
        agents[i].Draw(window);
    for (unsigned int i = 0; i < platVectors.size(); i++)
        platVectors.at(i).Draw(window);
}

Agent* GameManager::getAgent(int iterator)
{
    return &agents[iterator];
}


    


