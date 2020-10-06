#include <SFML/Graphics.hpp>
#include "Agent.h"
#include "Platform.h"
#include "GameManager.h"
#include "MatrixLib.h"
#include "NeuralNetwork.h"
#include <iostream> 

int main()
{
    unsigned int sample[3] = { 3, 1, 2 };
    NeuralNetwork network(&sample[0], 3); //this randomly worked, like twice out of 10 times. There is some sort of memory issue that is inconsistant between trials.
    float inputs[] = {1, 2, 1};
    float* goin = inputs;
    float* results = network.feedforward(goin, 3);
    std::cout << results[0];
    std::cout << '\n';
    std::cout << results[1];
    
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