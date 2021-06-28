#include "1bit comparator.h"
#include "and.h"
#include "xnor.h"
#include "not.h"

void COMPARATOR_1BIT::setInput(int x, int y){
	this->X = x;
	this->Y = y;

	this->calculating();
}

void COMPARATOR_1BIT::calculating(){

	gate_AND and;
	gate_NOT not;
	gate_XNOR xnor;

	xnor.setInput(this->X, this->Y);
	this->F[0] = xnor.getOutput();

	not.setInput(this->Y);
	and.setInput( this->X , not.getOutput() );
	this->F[1] = and.getOutput();

	not.setInput(this->X);
	and.setInput( this->Y , not.getOutput() );
	this->F[2] = and.getOutput();
	
}

unsigned short COMPARATOR_1BIT::getF(int k){
	return this->F[k];
}