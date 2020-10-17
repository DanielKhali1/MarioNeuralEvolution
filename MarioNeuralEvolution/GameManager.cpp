#include "GameManager.h"
#include "MapControl.h"
#include "GeneticAlgorithm.h"
#include <iostream>
#include <SFML/Graphics.hpp>


GameManager::GameManager():
    population(50)
{
}

void GameManager::createMap(int level) {
    map = MapControl(level);   
}

void GameManager::startBreeding() {

}

void GameManager::startGame() {

    //TODO: CHANGE TO IMPLEMENT GENETIC ALGORITHM
    //for (unsigned int i = 0; i < 10; i++)
        //agents.push_back(Agent(20, 20));

    platVectors = map.getPlatforms();
    PlayerEnd = map.getEnd();
    PlayerSpawn = map.getSpawn();

    for(unsigned int i = 0; i < population.popSize; i++)
        population.agent[i].setPosition(PlayerSpawn);
}

void GameManager::step(sf::RenderWindow* window)
{


    for (unsigned int it = 0; it < population.agent.size(); it++)
    {
        population.agent[it].Update();

        float sample[3] = { 1, 1, 1 };
        float* senses = &sample[0];
        population.agent[it].decideAction(senses);
        if (population.agent[it].getVelocity()->y > 0) // ONLY CHECK COLLISIONS IF THE PLAYER IS FALLING DOWN
        {
            for (unsigned int i = 0; i < platVectors.size(); i++) {
                if (platVectors.at(i).checkCollision(population.agent[it].getPosition(), population.agent[it].getSize()))
                {
                    population.agent[it].setPosition(sf::Vector2f(population.agent[it].getPosition()->x, platVectors.at(i).getPosition()->y - population.agent[it].getSize()->y));
                    population.agent[it].getAcceleration()->y = 0;
                    population.agent[it].grounded = true;
                }
            }
            if (PlayerEnd.checkCollision(population.agent[it].getPosition(), population.agent[it].getSize()))
            {
                population.agent[it].setPosition(sf::Vector2f(20, 20));
            }
        }
        if (population.agent[it].getVelocity()->y < 0) // ONLY CHECK COLLISIONS IF THE PLAYER IS FALLING DOWN
        {
            for (unsigned int i = 0; i < platVectors.size(); i++) {
                if (platVectors.at(i).checkCollision(population.agent[it].getPosition(), population.agent[it].getSize()))
                {
                    population.agent[it].setPosition(sf::Vector2f(population.agent[it].getPosition()->x, platVectors.at(i).getPosition()->y + platVectors.at(i).getSize()->y));
                    population.agent[it].getAcceleration()->y = 0;
                    population.agent[it].getVelocity()->y = 0;
                }
            }
        }
        if (population.agent[it].getPosition()->x < 0)
            population.agent[it].setPosition(sf::Vector2f(0, population.agent[it].getPosition()->y));
    }
    sf::View view;
    view.setCenter(sf::Vector2f(360.f, 250.f));
    view.setSize(sf::Vector2f(720.f, 500.f));

    Agent* furthestAgent = &(population.agent[0]);
    float furthestXPosition = population.agent[0].getPosition()->x;

    for (unsigned int i = 0; i < population.agent.size(); i++)
        if (population.agent[i].getPosition()->x > furthestXPosition)
        {
            furthestAgent = &(population.agent[i]);
            furthestXPosition = population.agent[i].getPosition()->x;
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

    for (unsigned int i = 0; i < population.agent.size(); i++)
        population.agent[i].Draw(window);
    for (unsigned int i = 0; i < platVectors.size(); i++)
        platVectors.at(i).Draw(window);
}

Agent* GameManager::getAgent(int iterator)
{
    return &population.agent[iterator];
}


    


