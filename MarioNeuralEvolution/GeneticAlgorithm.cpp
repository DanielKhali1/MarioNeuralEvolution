#include "GeneticAlgorithm.h"

GeneticAlgorithm::GeneticAlgorithm(int popSize): popSize(popSize)
{
	unsigned int sizein[3] = { 5, 5, 3 };
	unsigned int arrsize = sizeof(sizein);
	unsigned int* sin = sizein;
	unsigned int inputs = 3; //all this is hardcoded rn, don't see the need to be dynamic yet
	for (unsigned int i = 0; i < popSize; i++)
	{
		agent.push_back(Agent(20, 20, sin, inputs, arrsize));
	}
}

void GeneticAlgorithm::evolve()
{
	std::vector<Agent> newagents;
	for (int i = 0; i < popSize; i++) {
		newagents.push_back(this->crossover());
	}
	agent = newagents;
}

Agent GeneticAlgorithm::selection(int popSize)
{
	//ME
	Agent temp(0, 0), temp1(0, 0), temp2(0, 0), temp3(0, 0);
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
	Agent* parentA = this->selection();
	Agent* parentB = this->selection();
	sf::Vector2f *size = parentA->getSize();
	unsigned int* networksizes = parentA->sizein;
	Agent result = Agent(size->x, size->y, networksizes, parentB->inputs, parentA->arrsize);
	int totalconnections = 0;
	for (int i = 1; i < parentA->arrsize - 1; i++) {//check this
		totalconnections += networksizes[i] * networksizes[i - 1];
	}
	for (int i = 0; i < parentA->arrsize; i++) { //per layer
		for (int ii = 0; ii < networksizes[i]; ii++) { //per node
			for (int iii = 0; iii < networksizes[i + 1]; iii++) {//per connection
				float dweight = 0;
				float dbias = 0;
				if (rand() % 2) {//50% chance
					dweight = parentA->getNetwork()->getLib(i)->getMatrix()[ii][iii];
					dbias = parentA->getNetwork()->getBiases()[ii][iii];
				}
				else {
					dweight = parentB->getNetwork()->getLib(i)->getMatrix()[ii][iii];
					dbias = parentB->getNetwork()->getBiases()[ii][iii];
				}
				result.getNetwork()->getLib(i)->Set(dweight, ii, iii);
				result.getNetwork()->getBiases()[ii][iii] = dbias;
			}
		}
	}
	this->mutation(result);
	return result;
}

void GeneticAlgorithm::mutation(Agent radboy)
{
	for (int i = 0; i < radboy.arrsize; i++) { //per layer
		for (int ii = 0; ii < radboy.sizein[i]; ii++) { //per node
			for (int iii = 0; iii < radboy.sizein[i + 1]; iii++) {//per connection
				float dweight = 0; 
				float dbias = 0; 
				int boom = rand() % 100;
				if (boom == 1) {
					dweight = rand() % 3 - 1;
					dbias = rand() % 3 - 1;
					radboy.getNetwork()->getLib(i)->Set(dweight, ii, iii);
					radboy.getNetwork()->getBiases()[ii][iii] = dbias;
				}
				
			}
		}
	}
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

