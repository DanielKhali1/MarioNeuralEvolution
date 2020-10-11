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
	Agent crossover();
	void mutation(Agent radboy);
	Agent* topAgent();

private:
	int popSize;

protected:

};
