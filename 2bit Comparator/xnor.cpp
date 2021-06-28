#include "xnor.h"

gate_XNOR::gate_XNOR(void)
{
	setInput(0, 0);
}

gate_XNOR::~gate_XNOR(void)
{
	
}

void gate_XNOR::gateOperation(void)
{
	if(inputX == inputY)
		result = 1;
	else
		result = 0;
}

void gate_XNOR::setInput(unsigned short x, unsigned short y)
{
	inputX = x;
	inputY = y;

	gateOperation();
}