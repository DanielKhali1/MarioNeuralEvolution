#include <SFML/Graphics.hpp>
#include "Agent.h"
#include "Platform.h"
int main()
{
    sf::RenderWindow window(sf::VideoMode(720, 500), "Super AI Bros.");
    sf::View view;
    view.setCenter(sf::Vector2f(360.f, 250.f));
    view.setSize(sf::Vector2f(720.f, 500.f));
    Agent agent(20, 20);
    agent.setPosition(sf::Vector2f(20, 20));
    Platform ground1(sf::Vector2f(2220, 40), sf::Vector2f(0, 400));
    Platform question1(sf::Vector2f(30, 30), sf::Vector2f(500, 300));
    Platform brick1(sf::Vector2f(30, 30), sf::Vector2f(620, 300));
    Platform question2(sf::Vector2f(30, 30), sf::Vector2f(650, 300));
    Platform brick2(sf::Vector2f(30, 30), sf::Vector2f(680, 300));
    Platform question3(sf::Vector2f(30, 30), sf::Vector2f(710, 300));
    Platform brick3(sf::Vector2f(30, 30), sf::Vector2f(740, 300));
    Platform question4(sf::Vector2f(30, 30), sf::Vector2f(680, 150));
    Platform pipe1(sf::Vector2f(60, 50), sf::Vector2f(860, 350));
    Platform pipe2(sf::Vector2f(60, 75), sf::Vector2f(1200, 325));
    Platform pipe3(sf::Vector2f(60, 100), sf::Vector2f(1540, 300));
    Platform pipe4(sf::Vector2f(60, 100), sf::Vector2f(1880, 300));
    Platform ground2(sf::Vector2f(2000, 40), sf::Vector2f(2280, 400));

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
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
            agent.setPosition(sf::Vector2f(20, 400));
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::J))
            view.move(-1.f, 0.f);
            window.setView(view);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::K))
            view.setCenter(sf::Vector2f(360.f, 250.f));
            window.setView(view);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::L))
            view.move(1.f, 0.f);
            window.setView(view);

        // Screen scrolling
        if ((window.mapCoordsToPixel(sf::Vector2f((agent.getPosition()->x), (agent.getPosition()->y))).x) > 300)
            view.move(1.f, 0.f);
            window.setView(view);
        
        // Screen could not scroll backward in original SMB1
        if ((window.mapCoordsToPixel(sf::Vector2f((agent.getPosition()->x), (agent.getPosition()->y))).x) < 1)
            agent.MoveForward();


        agent.Update();

        if (ground1.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, ground1.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }

        if (question1.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, question1.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You found a coin in question1!\n");
        }

        if (brick1.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick1.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick1.\n");
        }

        if (question2.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, question2.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You found a mushroom in question2!\n");
        }

        if (brick2.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick2.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick2.\n");
        }

        if (question3.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, question3.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You found a coin in question3!\n");
        }

        if (brick3.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, brick3.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You hit brick3.\n");
        }

        if (question4.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, question4.getPosition()->y + agent.getSize()->y + 10));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
            printf("You found a coin in question4!\n");
        }

        if (pipe1.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, pipe1.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
        }

        if (pipe2.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, pipe2.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
        }

        if (pipe3.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, pipe3.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
        }

        if (pipe4.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, pipe4.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
            agent.setVelocity(sf::Vector2f(agent.getVelocity()->x, 0));
        }

        if (ground2.checkCollision(agent.getPosition(), agent.getSize()))
        {
            agent.setPosition(sf::Vector2f(agent.getPosition()->x, ground2.getPosition()->y - agent.getSize()->y));
            agent.getAcceleration()->y = 0;
        }
        window.clear();
        agent.Draw(&window);
        ground1.Draw(&window);
        question1.Draw(&window);
        brick1.Draw(&window);
        question2.Draw(&window);
        brick2.Draw(&window);
        question3.Draw(&window);
        brick3.Draw(&window);
        question4.Draw(&window);
        pipe1.Draw(&window);
        pipe2.Draw(&window);
        pipe3.Draw(&window);
        pipe4.Draw(&window);
        ground2.Draw(&window);
        window.display();
    }
    return 0;
}