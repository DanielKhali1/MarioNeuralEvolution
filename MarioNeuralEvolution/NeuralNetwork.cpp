#include "NeuralNetwork.h"
#include "MatrixLib.h"
#include <cstdlib>
NeuralNetwork::NeuralNetwork(unsigned int sizes[3]) {
	//correct this
	this->sizes = sizes;
	weights = (MatrixLib**)malloc(sizeof(MatrixLib*) * sizeof(sizes));
	for (int i = 0; i < sizes[i]; i++) {
		*(weights + i) = (MatrixLib*)malloc(sizeof(MatrixLib) * sizes[i]);
	}
	biases = (float**)malloc(sizeof(float*) * sizeof(sizes));
	for (int i = 0; i < sizes[i]; i++) {
		*(biases + i) = (float*)malloc(sizeof(float) * sizes[i]);
	}
	//memory pls

	for (int i = 0; i < sizeof(sizes); i++) {
		for (int ii = 0; ii < sizes[i]; ii++) { 
			weights[i][ii] = MatrixLib(sizes[i], 1); // assigning neuron ii in row (i+1) 's weights from size of neuron layer before it.
		}
	}
	for (int i = 0; i < 3; i++) {
		weights[sizeof(sizes)][i] = MatrixLib(sizes[sizeof(sizes) - 1], 1); // assigning neuron i in last row's wights from the size of the 2nd to last layer.
	}
	for (int i = 0; i < sizeof(sizes); i++) {
		for (int ii = 0; ii < sizes[i]; ii++) {
			biases[i][ii] = rand() % 2 + 1;
		}
	}
}
float* NeuralNetwork::feedforward(float* inputs, unsigned int numinputs) {
	int bigsize = 0;
	for (int i = 0; i < 3; i++) {
		if (sizes[i] > bigsize) {
			bigsize = sizes[i];
		}
	}
	MatrixLib intermediate = MatrixLib(bigsize, 2);
	MatrixLib* mult = &intermediate; //is this how you do that
	intermediate.SetLayer(inputs, sizes[0], 1);
	for (int i = 0; i < (sizeof(sizes) - 1); i++) { //setup done, feeding forward now
		for (int ii = 0; ii < sizes[i]; ii++) {
			float d = weights[i][ii].DotProduct(mult) + biases[i][ii];
			float sig = sigmoid(d);
			intermediate.Set(sig, 2, ii); // results of sigmoid are stored on 2nd row
		}
		intermediate.Shift(); //move sigmoids to new input spot
	}
	float finals[3];
	for (int i = 0; i < 3; i++) {
		float fd = weights[sizeof(sizes) - 1][i].DotProduct(mult) + biases[sizeof(sizes) - 1][i];
		finals[i]= sigmoid(fd);
	}
}
float sigmoid(float d) {
	float value = 1 / (1 + exp(-d));
	return value;
}