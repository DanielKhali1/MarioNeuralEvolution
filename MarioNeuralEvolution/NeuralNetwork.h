#pragma once
#include <vector>
#include "MatrixLib.h"
class NeuralNetwork
{
public:
	NeuralNetwork(unsigned int* sizes, unsigned int numinputs, unsigned int arrsize); //todo: variation
	float* feedforward(float * inputs, unsigned int numinputs);
	float sigmoid(float d);
	std::vector<MatrixLib> weights;
	float** biases;
	MatrixLib* getLib(int numreq);
	float** getBiases();
	unsigned int bigsize;
private:
	unsigned int* sizes;
protected:
};

