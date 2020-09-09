#pragma once
#include "Platform.h"
#include <vector>
class MapControl
{
public:
	MapControl(int level);
	std::vector<Platform> getPlatforms();
	Platform getEnd();
private:
	std::vector<Platform> Platforms;
	Platform PlayerEnd;
protected:
};

