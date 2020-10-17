#pragma once
#include <SFML/Graphics.hpp>
#include "Agent.h"
#include "Platform.h"
#include "MapControl.h"
#include <vector>
#include <map>

class GameManager
{
public:
	GameManager();
	void createMap(int level);
	void startBreeding();
	void startGame();
	void step(sf::RenderWindow* window);
	void DrawAll(sf::RenderWindow * window);
	Agent* getAgent(int iterator);
	void drawStats(sf::RenderWindow* window);
	void takeInputs();
private:
	MapControl map;
	//will be replaced with Genetic Algorithm
	std::vector<Agent> agents;
	// ----------------------------------------
	std::vector<Platform> platVectors;
	Platform PlayerEnd;
	sf::Vector2f PlayerSpawn;
	sf::Font comicSans;
	bool isFontLoaded;

	std::vector<sf::Text> text;

protected:
};

