#pragma once

#include <SFML/Graphics.hpp>
#include "Platform.h"
#include <iostream>

class Agent
{

public:
	Agent(float width, float height);
	void MoveForward(std::vector<Platform>* platforms);
	void MoveBackward(std::vector<Platform>* platforms);
	void Jump();
	void Update();
	void Draw(sf::RenderWindow* window);
	void setPosition(sf::Vector2f position);
	sf::Vector2f* getPosition();
	sf::Vector2f* getAcceleration();
	sf::Vector2f* getVelocity();
	sf::Vector2f* getSize();
	void randomAction(std::vector<Platform> * platforms);
	bool grounded;
	bool alreadyCollided = false;
private:
	float health;
	sf::Vector2f size;
	sf::Vector2f position;
	sf::Vector2f velocity;
	sf::Vector2f acceleration;
protected:

};

