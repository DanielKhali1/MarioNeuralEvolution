#include "NeuralNetwork.h"
#include "MatrixLib.h"
#include <cstdlib>
MatrixLib*** weights;
NeuralNetwork::NeuralNetwork(unsigned int sizes[3]) {
	this->sizes = sizes;
	weights = new MatrixLib**[sizeof(sizes)];
	for (unsigned int i = 0; i < sizeof(sizes); i++) {
		weights[i] = new MatrixLib*[sizes[i]];
		for (unsigned int ii = 0; ii < sizes[i]; ii++) {
			weights[i][ii] = new MatrixLib(sizes[i], 1);
		}
	}


	//weights = (MatrixLib**)malloc(sizeof(MatrixLib*) * sizeof(sizes));
	//for (unsigned int i = 0; i < sizes[i]; i++) {
	//	*(weights + i) = (MatrixLib*)malloc(sizeof(MatrixLib) * sizes[i]);
	//}
	/*biases = (float**)malloc(sizeof(float*) * sizeof(sizes));
	for (unsigned int i = 0; i < sizes[i]; i++) {
		*(biases + i) = (float*)malloc(sizeof(float) * sizes[i]);
	}*/
	biases = new float* [sizeof(sizes)];
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
	MatrixLib intermediate = MatrixLib(bigsize, 2);
	MatrixLib* mult = &intermediate; //is this how you do that
	intermediate.SetLayer(inputs, sizes[0], 1);
	for (unsigned int i = 0; i < (sizeof(sizes) - 1); i++) { //setup done, feeding forward now
		for (unsigned int ii = 0; ii < sizes[i]; ii++) {
			float d = weights[i][ii]->DotProduct(mult) + biases[i][ii];
			float sig = this->sigmoid(d);
			intermediate.Set(sig, 2, ii); // results of sigmoid are stored on 2nd row
		}
		intermediate.Shift(); //move sigmoids to new input spot
	}
	float finals[3];
	for (int i = 0; i < 3; i++) {
		float fd = weights[sizeof(sizes) - 1][i]->DotProduct(mult) + biases[sizeof(sizes) - 1][i];
		finals[i]= this->sigmoid(fd);
	}
	return finals;
}
float NeuralNetwork::sigmoid(float d) {
	float value = (float) (1 / (1 + exp(-d)));
	return value;
}