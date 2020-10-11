#pragma once
class MatrixLib
{
public:
	MatrixLib(unsigned int width, unsigned int height);
	float DotProduct(MatrixLib* mult);
	float* DotProduct(float* mult);
	void mult(float coef);
	void addition(MatrixLib* add);
	void SetLayer(float* set, int nzsize, int row); //likely unneeded
	void Set(float set, int row, int col);
	void Shift(); //likely unneeded
private:
	float** matrix;
	unsigned int width;
	unsigned int height;
protected:
};

