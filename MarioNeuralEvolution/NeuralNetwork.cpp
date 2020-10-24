#include "NeuralNetwork.h"
#include "MatrixLib.h"
#include <cstdlib>
#include <iostream>

NeuralNetwork::NeuralNetwork(unsigned int* sizein, unsigned int numinputs, unsigned int arrsize) : sizes(sizein) {//todo : cleanup unused code
	//this->sizes = sizein;
	unsigned int tempsize = 0;
	for (unsigned int i = 0; i < arrsize; i++) {
		if (sizes[i] > tempsize) {
			tempsize = sizes[i];
		}
	}
	this->bigsize = tempsize;
	for (unsigned int i = 0; i < arrsize; i++) { // debug
	}
	weights.push_back(MatrixLib(sizes[0], numinputs));
	for (unsigned int i = 1; i < arrsize; i++) { //changed sizeof() to arrsize, an inherited value. This has NOT been tested. 
		weights.push_back(MatrixLib(sizes[i], sizes[i-1])); 
	}
	biases = (float**) malloc(sizeof(float*) * (arrsize + 1));
	for (unsigned int i = 0; i < arrsize; i++) {
		biases[i] = (float*) malloc(sizeof(float) * (bigsize +1)); //ignore
		for (unsigned int ii = 0; ii < sizes[i]; ii++) {
			biases[i][ii] = rand() % 2 + 1;
			//biases[i][ii] = 1;
			
		}
	}
}
float* NeuralNetwork::feedforward(float* inputs, unsigned int numinputs) {
	float* intermediate = new float[5];
	for (unsigned int i = 0; i < numinputs; i++) {
		intermediate[i] = inputs[i];
	}
	for (unsigned int i = 0; i < weights.size(); i++) { //setup done, feeding forward now
		intermediate = weights[i].DotProduct(intermediate);//all products dotted for the next layer
		for (unsigned int ii = 0; ii < sizes[i]; ii++) {//adding bias to all the nodes
			intermediate[ii] += biases[i][ii]; // i being the layer it's going to, ii being the respective node in that layer
			intermediate[ii] = sigmoid(intermediate[ii]);
		}
	}
	/*for (int i = 0; i < 3; i++) {
		float fd = weights[sizeof(sizes) - 1][i]->DotProduct(mult) + biases[sizeof(sizes) - 1][i];
		finals[i]= this->sigmoid(fd);
	}*/
	return intermediate;
}
MatrixLib* NeuralNetwork::getLib(int numreq) {
	return &weights[numreq];
}
float** NeuralNetwork::getBiases() {
	return biases;
}
float NeuralNetwork::sigmoid(float d) {
	float value = (float) (1 / (1 + exp(-d)));
	return value;
}