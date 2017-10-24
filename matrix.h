#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#define SIZE 4

using namespace std;

class Matrix{
	private:
		int vertex; 				//used to determine the position of chosen column or row
		int size;					//defines the size of the matrix
		bool matrix[SIZE][SIZE];	
	public:
		Matrix();					//constructor in case the size is not given
		Matrix(int size);			//constructor in case the size is given
		~Matrix();					
		void addEdge(int row, int column){matrix[row][column] = 1;}		//puts the value 1 on the specified row and column
		int getOutdegree(int vertex);		//outputs the outdegree of given vertex
		int getIndegree(int vertex);		//outputs the indegree of given vertex
		void display()const;
};                            

#endif                                                                                                                                                                                                 
