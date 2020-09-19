#include <SFML/Graphics.hpp>
#include "Agent.h"
#include "Platform.h"
#include "GameManager.h"
#include "MatrixLib.h"

int main()
{
    GameManager Manager;
    Manager.createMap(0);
    sf::RenderWindow window(sf::VideoMode(720, 500), "SFML works!");
    Manager.startGame();
    window.setFramerateLimit(60);
    srand(time(NULL));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
            Manager.getAgent(0)->Jump();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            Manager.getAgent(0)->MoveForward();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            Manager.getAgent(0)->MoveBackward();

        Manager.step(&window);

        Manager.DrawAll(&window);
    }


    return 0;
}