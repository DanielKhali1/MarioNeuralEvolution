#pragma once
class MatrixLib
{
public:
	MatrixLib(unsigned int width, unsigned int height);
	MatrixLib();
	float DotProduct(MatrixLib* mult);
	void mult(float coef);
	void addition(MatrixLib* add);
	void SetLayer(float* set, int nzsize, int row);
	void Set(float set, int row, int col);
	void Shift();
private:
	float** matrix;
	unsigned int width;
	unsigned int height;
protected:
};

