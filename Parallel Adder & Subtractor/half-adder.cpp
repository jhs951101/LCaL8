#include "half-adder.h"
#include "xor.h"
#include "and.h"
#include "defaultgate.h"

void HALF_ADDER::setInput(int x, int y){
	this->X = x;
	this->Y = y;

	this->calculating();
}

void HALF_ADDER::calculating(){

	gate_AND and;
	gate_XOR xor;

	and.setInput(this->X, this->Y);
	xor.setInput(this->X, this->Y);

	this->S = xor.getOutput();
	this->C = and.getOutput();

}

unsigned short HALF_ADDER::getS(){
	return this->S;
}

unsigned short HALF_ADDER::getC(){
	return this->C;
}