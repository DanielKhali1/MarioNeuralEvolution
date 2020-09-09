#include "GameManager.h"
#include "MapControl.h"


GameManager::GameManager():
    map(0)
{
    
}

void GameManager::createMap(int level) {
    map = MapControl(level);
}

void GameManager::startBreeding() {

}

void GameManager::startGame() {
    sf::RenderWindow window(sf::VideoMode(720, 500), "SFML works!");
    Agent agent(20, 20);
    agent.setPosition(sf::Vector2f(20, 20));
    //Platform platform(sf::Vector2f(200, 40), sf::Vector2f(0, 400));//TODO: Vector of Platforms
    //Platform platform2(sf::Vector2f(300, 20), sf::Vector2f(100, 300));
    //Platform platform3(sf::Vector2f(300, 20), sf::Vector2f(420, 350));
    //Platform PlayerEnd(sf::Vector2f(20, 500), sf::Vector2f(700, 0));
    platVectors = map.getPlatforms();
    PlayerEnd = map.getEnd();
    
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
            agent.Jump();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            agent.MoveForward();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            agent.MoveBackward();
         

        agent.Update();

        for (int i = 0; i < platVectors.size(); i++) {
            if (platVectors.at(i).checkCollision(agent.getPosition(), agent.getSize()))
            {
                agent.setPosition(sf::Vector2f(agent.getPosition()->x, platVectors.at(i).getPosition()->y - agent.getSize()->y));
                agent.getAcceleration()->y = 0;
            }
        }
        if (PlayerEnd.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(20, 20));
        }

        window.clear();
        agent.Draw(&window);
        for (int i = 0; i < platVectors.size(); i++) {
            platVectors.at(i).Draw(&window);
        }
        window.display();
    }
}