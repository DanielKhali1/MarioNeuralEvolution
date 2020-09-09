#include "MapControl.h"
#include <SFML/Graphics.hpp>
#include "Agent.h"
#include "Platform.h"
#include <vector>

MapControl::MapControl()
{
}

MapControl::MapControl(int level)
{
	switch (level)
	{
	case 0:
		Platforms.push_back(Platform(sf::Vector2f(200, 40), sf::Vector2f(0, 400)));
		Platforms.push_back(Platform(sf::Vector2f(300, 20), sf::Vector2f(100, 300)));
		Platforms.push_back(Platform(sf::Vector2f(300, 20), sf::Vector2f(420, 350)));
		PlayerEnd = Platform(sf::Vector2f(20, 500), sf::Vector2f(700, 0));
	default:
		break;
	}
}

std::vector<Platform> MapControl::getPlatforms() {
	return Platforms;
}

Platform MapControl::getEnd() {
	return PlayerEnd;
}
