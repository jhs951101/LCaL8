#include "defaultgate.h"

#pragma once

class gate_XOR : public defaultGate
{
public:
	gate_XOR(void);
	~gate_XOR(void);

	void setInput(unsigned short x, unsigned short y);
	virtual void gateOperation();
};