#include "Agent.h"

#pragma once
class GeneticAlgorithm
{
public:

	GeneticAlgorithm(int popSize);
	std::vector<Agent> agent;
	int generation;

	void evolve();
	Agent* selection();
	Agent* crossover();
	Agent* mutation();
	Agent* topAgent();

private:

protected:

};
