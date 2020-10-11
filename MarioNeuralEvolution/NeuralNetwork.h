#pragma once
#include <vector>
#include "MatrixLib.h"
class NeuralNetwork
{
public:
	NeuralNetwork(unsigned int* sizes, unsigned int numinputs); //todo: variation
	float* feedforward(float * inputs, unsigned int numinputs);
	float sigmoid(float d);
private:
	std::vector<MatrixLib> weights;
	float** biases; 
	unsigned int* sizes;
protected:
};

