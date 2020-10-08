#include "NeuralNetwork.h"
#include "MatrixLib.h"
#include <cstdlib>

NeuralNetwork::NeuralNetwork(unsigned int* sizein, unsigned int numinputs) {//todo : cleanup unused code
	this->sizes = sizein;
	weights.push_back(MatrixLib(sizes[0], numinputs));
	for (unsigned int i = 1; i < sizeof(sizes) - 1; i++) { //setting the bounds to -1 "fixes" this but idk why
		weights.push_back(MatrixLib(sizes[i], sizes[i-1]));
	}
	/*weights = new MatrixLib**[sizeof(sizes)];
	for (unsigned int i = 0; i < sizeof(sizes); i++) {
		weights[i] = new MatrixLib*[sizes[i]];
		for (unsigned int ii = 0; ii < sizes[i]; ii++) {
			weights[i][ii] = new MatrixLib(sizes[i], 1);
		}
	}*/
	//weights = (MatrixLib**)malloc(sizeof(MatrixLib*) * sizeof(sizes));
	//for (unsigned int i = 0; i < sizes[i]; i++) {
	//	*(weights + i) = (MatrixLib*)malloc(sizeof(MatrixLib) * sizes[i]);
	//}
	/*biases = (float**)malloc(sizeof(float*) * sizeof(sizes));
	for (unsigned int i = 0; i < sizes[i]; i++) {
		*(biases + i) = (float*)malloc(sizeof(float) * sizes[i]);
	}*/
	biases = new float* [sizeof(sizes)+1];
	for (unsigned int i = 0; i < sizeof(sizes); i++) {
		biases[i] = new float[sizes[i]];
	}
	/*for (unsigned int i = 0; i < sizeof(sizes); i++) {
		for (unsigned int ii = 0; ii < sizes[i]; ii++) { 
			weights[i][ii] = MatrixLib(sizes[i], 1); // assigning neuron ii in row (i+1) 's weights from size of neuron layer before it.
		}
	}*/
	/*
	for (unsigned int i = 0; i < 3; i++) {
		weights[sizeof(sizes)-1][i] = MatrixLib(sizes[sizeof(sizes) - 2], 1); // assigning neuron i in last row's weights from the size of the 2nd to last layer.
	}*/
	for (unsigned int i = 0; i < sizeof(sizes); i++) {
		for (unsigned int ii = 0; ii < sizes[i]; ii++) {
			//biases[i][ii] = rand() % 2 + 1;
			biases[i][ii] = 1;
		}
	}
}
float* NeuralNetwork::feedforward(float* inputs, unsigned int numinputs) {
	unsigned int bigsize = 0;
	for (unsigned int i = 0; i < 3; i++) {
		if (sizes[i] > bigsize) {
			bigsize = sizes[i];
		}
	}
	float* intermediate = new float[bigsize];
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
float NeuralNetwork::sigmoid(float d) {
	float value = (float) (1 / (1 + exp(-d)));
	return value;
}