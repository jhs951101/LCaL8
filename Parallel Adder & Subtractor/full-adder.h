#pragma once

class FULL_ADDER
{
public:
	void setInput(int x, int y, int z);
	void calculating();
	unsigned short getS();
	unsigned short getC();

private:
	unsigned short X, Y, Z;
	unsigned short C;
	unsigned short S;
};