#include "Agent.h"

#pragma once
class GeneticAlgorithm
{
public:

	GeneticAlgorithm(int popSize);
	std::vector<Agent> agent;
	int generation;

	void evolve();
	Agent selection();
	Agent crossover();
	void mutation(Agent radboy);
	Agent topAgent(Agent agent0, Agent agent1);

private:
	int popSize;

protected:

};
