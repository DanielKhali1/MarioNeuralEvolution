#pragma once
class NeuralNetwork
{
public:
	NeuralNetwork(unsigned int[3]); //todo: variation
	float sigmoid(float d);
	float* feedforward(float * inputs, unsigned int numinputs);
private:
	MatrixLib** weights; 
	float** biases; 
	unsigned int* sizes;
protected:
};

