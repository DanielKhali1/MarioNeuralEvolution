#pragma once
#include <SFML/Graphics.hpp>

class Platform
{
public:
	Platform(sf::Vector2f size, sf::Vector2f position);
	bool checkCollision(sf::Vector2f* position, sf::Vector2f* size);
	void Draw(sf::RenderWindow* window);
	void setPosition(sf::Vector2f position);
	void setSize(sf::Vector2f size);
	sf::Vector2f* getPosition();
	sf::Vector2f* getSize();
private:
	sf::Vector2f pos;
	sf::Vector2f size;
};
