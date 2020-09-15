#pragma once

#include <SFML/Graphics.hpp>

class Agent
{

public:
	Agent(float width, float height);
	void MoveForward();
	void MoveBackward();
	void Jump();
	void Update();
	void Draw(sf::RenderWindow* window);
	void setPosition(sf::Vector2f position);
	void setVelocity(sf::Vector2f velocity);
	sf::Vector2f* getPosition();
	sf::Vector2f* getVelocity();
	sf::Vector2f* getSize();
	sf::Vector2f* getAcceleration();
private:
	float health;
	sf::Vector2f size;
	sf::Vector2f position;
	sf::Vector2f velocity;
	sf::Vector2f acceleration;
protected:

};

