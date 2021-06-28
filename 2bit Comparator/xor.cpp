#include "xor.h"

gate_XOR::gate_XOR(void)
{
	setInput(0, 0);
}

gate_XOR::~gate_XOR(void)
{
	
}

void gate_XOR::gateOperation(void)
{
	if(inputX != inputY)
		result = 1;
	else
		result = 0;
}

void gate_XOR::setInput(unsigned short x, unsigned short y)
{
	inputX = x;
	inputY = y;

	gateOperation();
}