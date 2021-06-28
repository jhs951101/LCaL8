#include "parallel_adder-subtractor.h"
#include "full-adder.h"
#include "xor.h"
#include<iostream>

using namespace std;

void PARALLEL::setInput(string x, string y, int z){
	
	this->Z = z;

	int k = 0;
	for(int i=3; i>=0; i--){
		this->X[i] = x.at(k) - 48;
		this->Y[i] = y.at(k) - 48;
		k++;
	}

	this->calculating();

}

void PARALLEL::calculating(){

	FULL_ADDER full_adder;
	gate_XOR xor;
	unsigned short z_value = this->Z;

	for(int i=0; i<4; i++){
		xor.setInput(this->Y[i], this->Z);
		unsigned short value1 = xor.getOutput();

		full_adder.setInput(value1, this->X[i], z_value);

		this->result[i] = full_adder.getS();
		z_value = full_adder.getC();
	}

}

void PARALLEL::print(){
	cout << "Result: ";

	for(int i=3; i>=0; i--)
		cout << this->result[i];

	cout << endl;
}