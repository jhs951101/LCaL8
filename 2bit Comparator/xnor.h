#include "defaultgate.h"

#pragma once

class gate_XNOR : public defaultGate
{
public:
	gate_XNOR(void);
	~gate_XNOR(void);

	void setInput(unsigned short x, unsigned short y);
	virtual void gateOperation();
};