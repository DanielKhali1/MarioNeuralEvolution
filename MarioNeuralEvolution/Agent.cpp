#include "Agent.h"
#include "Agent.h"
#include "Constants.h"
#include <SFML/Graphics.hpp>

Agent::Agent(float width, float height)
	: health(100),
	size(width, height),
	position(0.0f, 0.0f),
	velocity(0.0f, 0.0f),
	acceleration(0.0f, 0.0f)
{

}

void Agent::MoveForward()
{
	position.x += marioConstants::playerMoveSpeed;
}

void Agent::MoveBackward()
{
	position.x -= marioConstants::playerMoveSpeed;
}

void Agent::Jump()
{
	velocity.y = marioConstants::jumpVel;
}

void Agent::Draw(sf::RenderWindow * window)
{
	sf::RectangleShape tempguy(sf::Vector2f(size.x, size.y));
	tempguy.move(position);
	(*window).draw(tempguy);
}

void Agent::setPosition(sf::Vector2f position)
{
	this->position = sf::Vector2f(position.x, position.y);
}

sf::Vector2f* Agent::getPosition()
{
	return &position;
}

sf::Vector2f* Agent::getSize()
{
	return &size;
}

sf::Vector2f* Agent::getAcceleration()
{
	return &acceleration;
}

sf::Vector2f* Agent::getVelocity()
{
	return &velocity;
}
 
void Agent::Update()
{

	acceleration.y = marioConstants::gravity;
	velocity += acceleration;
	position += velocity;
}