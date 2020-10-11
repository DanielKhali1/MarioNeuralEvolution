#include "Agent.h"

#pragma once
class GeneticAlgorithm
{
public:

	GeneticAlgorithm(int popSize);
	std::vector<Agent> agent;
	int generation;

	void evolve();
	Agent selection(int popSize);
	Agent crossover();
	Agent mutation();
	Agent topAgent(Agent agent0, Agent agent1);

private:

protected:

};
