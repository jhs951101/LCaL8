#include "parallel_adder-subtractor.h"
#include<iostream>
#include<string>

using namespace std;

int main(){

	PARALLEL parallel;
	string x, y;
	int z;

	cout << "Input two numbers (x, y): ";
	cin >> x >> y;

	cout << "Input the selection (0: Add, 1: Subtract): ";
	cin >> z;

	parallel.setInput(x, y, z);
	parallel.print();

	return 0;
}