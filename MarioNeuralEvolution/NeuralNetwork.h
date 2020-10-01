#pragma once
class NeuralNetwork
{
public:
	NeuralNetwork(unsigned int[3]); //todo: variation
	float* feedforward(float * inputs, unsigned int numinputs);
	float sigmoid(float d);
private:
	float** biases; 
	unsigned int* sizes;
protected:
};

