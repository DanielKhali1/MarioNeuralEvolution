#include "MatrixLib.h"
#include <iostream>

MatrixLib::MatrixLib() {

}
MatrixLib::MatrixLib(unsigned int width, unsigned int height)
{
	this->width = width; //componentsof
	this->height = height; //numVectors
	matrix = (float**)malloc(sizeof(float*) * height);
	for (unsigned int i = 0; i < height; i++) {
		*(matrix + i) = (float*)malloc(sizeof(float) * width) ; //*(*(matrix + i) +j ) == matrix[i][j]
		for (unsigned int j = 0; j < width; j++) {
			//assign
			//*(*(matrix + i) +j ) == matrix[i][j]
			*(*(matrix + i) + j) = 0.0;
		}
	}
}
float MatrixLib::DotProduct(MatrixLib* mult) { //Frobenius inner product... I think
	float totals = 0;
	unsigned int minRows = 0;
	unsigned int minComp = 0;
	float** multMat = mult->matrix;
	if (this->height < mult->height ) {
		minRows = this->height;
	} else {
		minRows = mult->height;
	}
	if (this->width < mult->width) {
		minComp = this->width;
	} else {
		minComp = mult->width;
	}
	for (unsigned int i = 0; i < minRows; i++) {
		for (unsigned int j = 0; j < minComp; j++) {
			float a = 0;
			float b = 0;
			totals += *(*(multMat + i) + j) * *(*(matrix + i) + j);
		}
	}
	return totals;
}
void MatrixLib::SetLayer(float* set, int nzsize, int row) {
	for (int i = 0; i < nzsize; i++) {
		matrix[row][i] = set[i];
	}
	for (int i = nzsize; i < width; i++) {
		matrix[row][i] = 0.0;
	}
}
void MatrixLib::Shift(){
	for (int i = 0; i < width; i++) {
		matrix[0][i] = matrix[1][i];
	}
	for (int i = 0; i < width; i++) {
		matrix[1][i] = 0.0;
	}
}
void MatrixLib::Set(float set, int row, int col) {
	*(*(matrix + i) + j) = set;
}
void MatrixLib::mult(float coef){
	for (unsigned int i = 0; i < this->height; i++) {
		for (unsigned int j = 0; j < this->width; j++) {
			*(*(matrix + i) + j) = *(*(matrix + i) + j) * coef;
		}
	}
}
void MatrixLib::addition(MatrixLib* add) {
	float totals = 0;
	unsigned int minRows = 0;
	unsigned int minComp = 0;
	float** addMat = add->matrix;
	if (this->height < add->height) {
		minRows = this->height;
	}
	else {
		minRows = add->height;
	}
	if (this->width < add->width) {
		minComp = this->width;
	}
	else {
		minComp = add->width;
	}
	for (unsigned int i = 0; i < minRows; i++) {
		for (unsigned int j = 0; j < minComp; j++) {
			*(*(matrix + i) + j) = *(*(addMat + i) + j) + *(*(matrix + i) + j);
		}
	}
}
