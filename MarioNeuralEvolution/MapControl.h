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
private:
	std::vector<Platform> Platforms;
	std::vector<Enemy> Enemies;
	Platform PlayerEnd;
	sf::Vector2f PlayerSpawn;
protected:
};

