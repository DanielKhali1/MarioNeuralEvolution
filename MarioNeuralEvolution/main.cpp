#include <SFML/Graphics.hpp>
#include "Agent.h"
#include "Platform.h"
#include "GameManager.h"
#include "MatrixLib.h"
#include "NeuralNetwork.h"
#include <iostream> 

int main()
{
    GameManager Manager; 
    Manager.createMap(0);
    std::cout << Manager.getAgent(1)->sizein[0] << 'j';
    sf::RenderWindow window(sf::VideoMode(720, 500), "SFML works!"); //sizein goes from {5, 5, 3} to {720, 500, 32} here somehow
    std::cout << Manager.getAgent(1)->sizein[0] << 'h';
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


        Manager.step(&window);
        
        Manager.DrawAll(&window);

    }


    return 0;
}