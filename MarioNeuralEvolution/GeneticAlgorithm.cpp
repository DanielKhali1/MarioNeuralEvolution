#include "GeneticAlgorithm.h"
#include <iostream>

GeneticAlgorithm::GeneticAlgorithm(int popSize)
{
	
}

void GeneticAlgorithm::evolve()
{
	//Lots of memory stuff
	//AKA death
}
  
Agent GeneticAlgorithm::selection(int popSize)
{
	//ME
	Agent temp(0,0), temp1(0,0), temp2(0,0), temp3(0,0);
	temp = agent[rand() % popSize];
	temp1 = agent[rand() % popSize];
	temp2 = agent[rand() % popSize];
	temp3 = agent[rand() % popSize];

	temp = topAgent(temp, temp1);
	temp1 = topAgent(temp2, temp3);

	return topAgent(temp, temp1);

	//Double competition
	//GetRandom(Agent) * 4
	//Competition twice
	//Set as parent
}

Agent GeneticAlgorithm::crossover()
{
	//Get two parents
	//Each connection has a 50% chance to be chosen from parent
}

Agent GeneticAlgorithm::mutation()
{
	//Has a 1% chance to change the weight to a random value from crossover
}

Agent GeneticAlgorithm::topAgent(Agent agent0, Agent agent1)
{
	//Me
	if (agent0.getPosition()->x > agent1.getPosition()->x)
	{
		return agent0;
	}
	else
	{
		return agent1;
	}
	
}
