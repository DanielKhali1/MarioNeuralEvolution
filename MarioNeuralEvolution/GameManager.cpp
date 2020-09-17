#include "GameManager.h"
#include "MapControl.h"
#include <iostream>

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
    for (unsigned int i = 0; i < 1; i++)
        agents.push_back(Agent(20, 20));

    platVectors = map.getPlatforms();
    PlayerEnd = map.getEnd();
    PlayerSpawn = map.getSpawn();

    for(unsigned int i = 0; i < agents.size(); i++)
        agents[i].setPosition(PlayerSpawn);
}

void GameManager::step()
{
    for (unsigned int it = 0; it < agents.size(); it++)\
    {
        agents[it].Update();
        if (agents[it].getVelocity()->y > 0) // ONLY CHECK COLLISIONS IF THE PLAYER IS FALLING DOWN
        {
            for (unsigned int i = 0; i < platVectors.size(); i++) {
                if (platVectors.at(i).checkCollision(agents[it].getPosition(), agents[it].getSize()))
                {
                    agents[it].setPosition(sf::Vector2f(agents[it].getPosition()->x, platVectors.at(i).getPosition()->y - agents[it].getSize()->y));
                    agents[it].getAcceleration()->y = 0;
                }
            }
            if (PlayerEnd.checkCollision(agents[it].getPosition(), agents[it].getSize()))
            {
                agents[it].setPosition(sf::Vector2f(20, 20));
            }
        }
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


    


