#include <iostream>
#include "matrix.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Matrix m(5);
	
	m.addEdge(0,4);
	m.addEdge(1,4);
	m.addEdge(2,4);
	m.addEdge(3,3);
	m.addEdge(0,2);
	m.addEdge(1,2);
	m.addEdge(1,0);
	m.addEdge(3,4);
	m.display();
	
	cout<< "\n1= Indegree: " << m.getIndegree(0) << "\tOutdegree: " << m.getOutdegree(0);
	cout<< "\n2= Indegree: " << m.getIndegree(1) << "\tOutdegree: " << m.getOutdegree(1);
	cout<< "\n3= Indegree: " << m.getIndegree(2) << "\tOutdegree: " << m.getOutdegree(2);
	cout<< "\n4= Indegree: " << m.getIndegree(3) << "\tOutdegree: " << m.getOutdegree(3);
	cout<< "\n5= Indegree: " << m.getIndegree(4) << "\tOutdegree: " << m.getOutdegree(4);
	
	return 0;
}
