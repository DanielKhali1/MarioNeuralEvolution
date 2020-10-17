#include "Agent.h"

#pragma once
class GeneticAlgorithm
{
public:

	GeneticAlgorithm(unsigned int popSize);
	unsigned int popSize;
	int generation;
	void evolve();
	Agent selection();
	Agent crossover();
	void mutation(Agent radboy);
	Agent topAgent(Agent agent0, Agent agent1);
	std::vector<Agent> agent;

private:
	

protected:

};
