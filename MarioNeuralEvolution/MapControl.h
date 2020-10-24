#pragma once
#include "Platform.h"
#include <vector>
#include "Enemy.h"
class MapControl
{
public:
	MapControl();
	MapControl(int level);
	std::vector<Platform> getPlatforms();
	std::vector<Enemy> getEnemies();
	sf::Vector2f getSpawn();
	Platform getEnd();
	std::vector<Platform> Platforms;
private:
	std::vector<Enemy> Enemies;
	Platform PlayerEnd;
	sf::Vector2f PlayerSpawn;
protected:
};

