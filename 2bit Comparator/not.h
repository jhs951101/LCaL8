#include "xnor.h"

#pragma once

class gate_NOT : public gate_XNOR
{
public:
	gate_NOT(void);
	~gate_NOT(void);

	void setInput(unsigned short x);
	virtual void gateOperation();

};