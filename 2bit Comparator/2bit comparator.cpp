#include "1bit comparator.h"
#include "2bit comparator.h"
#include "and.h"
#include "or.h"
#include<string>
#include<iostream>

using namespace std;

void COMPARATOR_2BIT::setInput(string x, string y){	
	int k = 0;
	for(int i=1; i>=0; i--){
		this->X[i] = x.at(k) - 48;
		this->Y[i] = y.at(k) - 48;
		k++;
	}

	this->calculating();
}

void COMPARATOR_2BIT::calculating(){

	gate_AND and;
	gate_OR or;
	COMPARATOR_1BIT comparator_1bit;

	unsigned short f[2][3];

	for(int x=0; x<2; x++){
		comparator_1bit.setInput(this->X[x], this->Y[x]);

		for(int y=0; y<3; y++)
			f[x][y] = comparator_1bit.getF(y);
	}

	and.setInput(f[0][0], f[1][0]);
	this->F[0] = and.getOutput();

	and.setInput(f[0][0], f[1][1]);
	or.setInput( f[0][1] , and.getOutput() );
	this->F[1] = or.getOutput();

	and.setInput(f[0][0], f[1][2]);
	or.setInput( f[0][2] , and.getOutput() );
	this->F[2] = or.getOutput();
	
}

void COMPARATOR_2BIT::print(){
	cout << "F0: " << this->F[0] << endl;
	cout << "F1: " << this->F[1] << endl;
	cout << "F2: " << this->F[2] << endl;
}