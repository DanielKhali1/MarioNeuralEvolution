#pragma once

#include <SFML/Graphics.hpp>
#include "Platform.h"
#include <iostream>

#include "NeuralNetwork.h"
class Agent
{

public:
	Agent(float width, float height, unsigned int* sizein, unsigned int inputs, unsigned int arrsize);
	void MoveForward();
	void MoveBackward();
	void Jump();
	void Update();
	void Draw(sf::RenderWindow* window);
	void setPosition(sf::Vector2f position);
	sf::Vector2f* getPosition();
	sf::Vector2f* getAcceleration();
	sf::Vector2f* getVelocity();
	sf::Vector2f* getSize();
	bool grounded;
	bool alreadyCollided = false;
	NeuralNetwork* getNetwork();
	void decideAction(float* senses);
	NeuralNetwork network;
	unsigned int* sizein;
	unsigned int inputs;
	unsigned int arrsize;
private:
	sf::Vector2f size;
	sf::Vector2f position;
	sf::Vector2f velocity;
	sf::Vector2f acceleration;
protected:

};

