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
        Platforms.push_back(Platform(sf::Vector2f(2220, 40), sf::Vector2f(0, 400)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(500, 300)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(620, 300)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(650, 300)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(680, 300)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(710, 300)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(740, 300)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(680, 150)));
        Platforms.push_back(Platform(sf::Vector2f(60, 50), sf::Vector2f(860, 350)));
        Platforms.push_back(Platform(sf::Vector2f(60, 75), sf::Vector2f(1200, 325)));
        Platforms.push_back(Platform(sf::Vector2f(60, 100), sf::Vector2f(1540, 300)));
        Platforms.push_back(Platform(sf::Vector2f(60, 100), sf::Vector2f(1880, 300)));
        Platforms.push_back(Platform(sf::Vector2f(450, 40), sf::Vector2f(2280, 400)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(2490, 300)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(2520, 300)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(2550, 300)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(2580, 150)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(2610, 150)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(2640, 150)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(2670, 150)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(2700, 150)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(2730, 150)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(2760, 150)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(2790, 150)));
        Platforms.push_back(Platform(sf::Vector2f(1890, 40), sf::Vector2f(2820, 400)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(2880, 150)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(2910, 150)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(2940, 150)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(2970, 150)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(2970, 300)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(3150, 300)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(3180, 300)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(3330, 300)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(3420, 300)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(3510, 300)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(3420, 150)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(3690, 300)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(3780, 150)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(3810, 150)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(3840, 150)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(3990, 150)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(4020, 150)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(4050, 150)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(4080, 150)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(4020, 300)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(4050, 300)));
        Platforms.push_back(Platform(sf::Vector2f(120, 30), sf::Vector2f(4170, 370)));
        Platforms.push_back(Platform(sf::Vector2f(90, 30), sf::Vector2f(4200, 340)));
        Platforms.push_back(Platform(sf::Vector2f(60, 30), sf::Vector2f(4230, 310)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(4260, 280)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(4320, 280)));
        Platforms.push_back(Platform(sf::Vector2f(60, 30), sf::Vector2f(4320, 310)));
        Platforms.push_back(Platform(sf::Vector2f(90, 30), sf::Vector2f(4320, 340)));
        Platforms.push_back(Platform(sf::Vector2f(120, 30), sf::Vector2f(4320, 370)));
        Platforms.push_back(Platform(sf::Vector2f(150, 30), sf::Vector2f(4560, 370)));
        Platforms.push_back(Platform(sf::Vector2f(120, 30), sf::Vector2f(4590, 340)));
        Platforms.push_back(Platform(sf::Vector2f(90, 30), sf::Vector2f(4620, 310)));
        Platforms.push_back(Platform(sf::Vector2f(60, 30), sf::Vector2f(4650, 280)));
        Platforms.push_back(Platform(sf::Vector2f(2000, 40), sf::Vector2f(4770, 400)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(4770, 280)));
        Platforms.push_back(Platform(sf::Vector2f(60, 30), sf::Vector2f(4770, 310)));
        Platforms.push_back(Platform(sf::Vector2f(90, 30), sf::Vector2f(4770, 340)));
        Platforms.push_back(Platform(sf::Vector2f(120, 30), sf::Vector2f(4770, 370)));
        Platforms.push_back(Platform(sf::Vector2f(60, 50), sf::Vector2f(5010, 350)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(5160, 300)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(5190, 300)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(5220, 300)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(5250, 300)));
        Platforms.push_back(Platform(sf::Vector2f(60, 50), sf::Vector2f(5490, 350)));
        Platforms.push_back(Platform(sf::Vector2f(270, 30), sf::Vector2f(5550, 370)));
        Platforms.push_back(Platform(sf::Vector2f(240, 30), sf::Vector2f(5580, 340)));
        Platforms.push_back(Platform(sf::Vector2f(210, 30), sf::Vector2f(5610, 310)));
        Platforms.push_back(Platform(sf::Vector2f(180, 30), sf::Vector2f(5640, 280)));
        Platforms.push_back(Platform(sf::Vector2f(150, 30), sf::Vector2f(5670, 250)));
        Platforms.push_back(Platform(sf::Vector2f(120, 30), sf::Vector2f(5700, 220)));
        Platforms.push_back(Platform(sf::Vector2f(90, 30), sf::Vector2f(5730, 190)));
        Platforms.push_back(Platform(sf::Vector2f(60, 30), sf::Vector2f(5760, 160)));
        Platforms.push_back(Platform(sf::Vector2f(30, 30), sf::Vector2f(6030, 370)));
        Platforms.push_back(Platform(sf::Vector2f(6, 250), sf::Vector2f(6042, 120))); // Flagpole
        Platforms.push_back(Platform(sf::Vector2f(50, 50), sf::Vector2f(5992, 120)));
        PlayerEnd = Platform(sf::Vector2f(6, 250), sf::Vector2f(6042, 120));
        PlayerSpawn = sf::Vector2f(20, 20);
	default:
		break;
	}
    Platforms[0].isground = true;

}

std::vector<Platform> MapControl::getPlatforms() {
	return Platforms;
}

Platform MapControl::getEnd() {
	return PlayerEnd;
}

std::vector<Enemy> MapControl::getEnemies() {
	return Enemies;
}

sf::Vector2f MapControl::getSpawn() {
	return PlayerSpawn;
}