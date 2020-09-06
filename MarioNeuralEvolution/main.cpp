#include <SFML/Graphics.hpp>
#include "Agent.h"
#include "Platform.h"
int main()
{
    sf::RenderWindow window(sf::VideoMode(720, 500), "SFML works!");

    Agent agent(20, 20);
    agent.setPosition(sf::Vector2f(20, 20));
    Platform platform(sf::Vector2f(200, 40), sf::Vector2f(0, 400));


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


        window.clear();
        agent.Draw(&window);
        platform.Draw(&window);
        window.display();
    }
    return 0;
}