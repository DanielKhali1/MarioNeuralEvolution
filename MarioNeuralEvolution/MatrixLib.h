#pragma once
class MatrixLib
{
public:
	MatrixLib(unsigned int width, unsigned int height);
	float DotProduct(MatrixLib* mult);
	void mult(float coef);
	void addition(MatrixLib* add);
private:
	float** matrix;
	unsigned int width;
	unsigned int height;
protected:
};

