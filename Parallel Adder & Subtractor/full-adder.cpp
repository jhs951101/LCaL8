#include "full-adder.h"
#include "half-adder.h"
#include "or.h"
#include "defaultgate.h"

void FULL_ADDER::setInput(int x, int y, int z){
	this->X = x;
	this->Y = y;
	this->Z = z;

	this->calculating();
}

void FULL_ADDER::calculating(){

	gate_OR or;
	HALF_ADDER half_adder;

	half_adder.setInput(this->Y, this->Z);
	unsigned short value1 = half_adder.getC();

	half_adder.setInput( this->X , half_adder.getS() );
	unsigned short value2 = half_adder.getC();

	this->S = half_adder.getS();

	or.setInput(value1, value2);
	this->C = or.getOutput();

}

unsigned short FULL_ADDER::getS(){
	return this->S;
}

unsigned short FULL_ADDER::getC(){
	return this->C;
}