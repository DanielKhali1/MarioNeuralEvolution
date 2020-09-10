#pragma once
#include <SFML/Graphics.hpp>
#include "Agent.h"
#include "Platform.h"
#include "MapControl.h"
#include <vector>
class GameManager
{
public:
	GameManager();
	void createMap(int level);
	void startBreeding();
	void startGame();
private:
	MapControl map;
	std::vector<Platform> platVectors;
	Platform PlayerEnd;
	sf::Vector2f PlayerSpawn;
protected:
};

