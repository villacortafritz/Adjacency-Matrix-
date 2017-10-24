#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

using namespace std;

Matrix::Matrix(){
	this->size = SIZE;				//assigns the default value of size to the size that will be used
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			matrix[i][j]=0;
		}
	}
}

Matrix::Matrix(int size){
	this->size = size;					//assigns the inputed size to the size that will be used
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			matrix[i][j]=0;
		}
	}
}

int Matrix::getIndegree(int vertex){
	int in=0;
	for(int i=0; i<size; i++){
		if(matrix[i][vertex]){			//checks the column
			in++;
		}
	}
	return in;
}

int Matrix::getOutdegree(int vertex){
	int out=0;
	for(int j=0; j<size; j++){
		if(matrix[vertex][j]){			//checks the row
			out++;
		}
	}
	return out;
}

void Matrix::display()const{
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			cout << matrix[i][j] << " ";
		}
		cout << endl;		//end of line
	}
}

Matrix::~Matrix(){
	
}
