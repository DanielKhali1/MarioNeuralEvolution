#include "GeneticAlgorithm.h"

GeneticAlgorithm::GeneticAlgorithm(int popSize)
{
	for (unsigned int i = 0; i < popSize; i++)
	{
		agent.push_back(Agent(20, 20));
	}
}

void GeneticAlgorithm::evolve()
{
	//Lots of memory stuff
	//AKA death
}

Agent* GeneticAlgorithm::selection()
{
	//Double competition
	//GetRandom(Agent) * 4
	//Competition twice
	//Set as parent
}

Agent* GeneticAlgorithm::crossover()
{
	//Get two parents
	//Each connection has a 50% chance to be chosen from parent
}

Agent* GeneticAlgorithm::mutation()
{
	//Has a 1% chance to change the weight to a random value from crossover
}

Agent* GeneticAlgorithm::topAgent()
{

}

