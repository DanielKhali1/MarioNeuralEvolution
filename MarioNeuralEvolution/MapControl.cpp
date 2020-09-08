#include "MapControl.h"
#include <SFML/Graphics.hpp>
#include "Agent.h"
#include "Platform.h"
MapControl::MapControl(){
    sf::RenderWindow window(sf::VideoMode(720, 500), "SFML works!");
    Agent agent(20, 20);
    agent.setPosition(sf::Vector2f(20, 20));
    Platform platform(sf::Vector2f(200, 40), sf::Vector2f(0, 400));//TODO: Vector of Platforms
    Platform platform2(sf::Vector2f(300, 20), sf::Vector2f(100, 300));
    Platform platform3(sf::Vector2f(300, 20), sf::Vector2f(420, 350));
    Platform PlayerEnd(sf::Vector2f(20, 500), sf::Vector2f(700, 0));
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

        if (platform.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, platform.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }
        if (platform2.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, platform2.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }
        if (platform3.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, platform3.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }
        if (PlayerEnd.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(20, 20));
        }

        window.clear();
        agent.Draw(&window);
        platform.Draw(&window);
        platform2.Draw(&window);
        platform3.Draw(&window);
        PlayerEnd.Draw(&window);
        window.display();
    }
}
