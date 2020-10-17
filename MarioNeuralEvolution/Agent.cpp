#include "Agent.h"
#include "Agent.h"
#include "Constants.h"
#include "Platform.h"
#include <SFML/Graphics.hpp>

Agent::Agent(float width, float height)
	: grounded(false),
	health(100),
	size(width, height),
	position(0.0f, 0.0f),
	velocity(0.0f, 0.0f),
	acceleration(0.0f, 0.0f)
{

}

void Agent::MoveForward(std::vector<Platform>* platforms)
{
	position.x += marioConstants::playerMoveSpeed;
	if(!grounded && !this->alreadyCollided)
		for (unsigned int i = 0; i < (*platforms).size(); i++)
			if (!(*platforms).at(i).isground && (*platforms).at(i).checkCollision(this->getPosition(), this->getSize()))
			{
				std::cout << "forward collision" << std::endl;
				this->setPosition(sf::Vector2f((*platforms).at(i).getPosition()->x - getSize()->x, this->getPosition()->y));
				this->alreadyCollided = true;
			}
}

void Agent::MoveBackward(std::vector<Platform>* platforms)
{
	position.x -= marioConstants::playerMoveSpeed;
	if(!grounded && !this->alreadyCollided)
		for (unsigned int i = 0; i < (*platforms).size(); i++)
			if (!(*platforms).at(i).isground && (*platforms).at(i).checkCollision(this->getPosition(), this->getSize()))
			{
				std::cout << "forward collision" << std::endl;
				this->setPosition(sf::Vector2f((*platforms).at(i).getPosition()->x + (*platforms).at(i).getSize()->x, this->getPosition()->y));
				this->alreadyCollided = true;
			}
}

void Agent::Jump()
{
	if (grounded)
	{
		grounded = false;
		velocity.y = marioConstants::jumpVel;
	}
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

void Agent::randomAction(std::vector<Platform>* platforms)
{
	int random = rand() % 2;
	
	switch (random)
	{
		case 0: Jump();					 break;
		case 1: MoveForward(platforms);  break;
		case 2: MoveBackward(platforms); break;

	}
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
	if (!grounded)
	{
		acceleration.y = marioConstants::gravity;
		velocity += acceleration;
		position += velocity;
	}
}