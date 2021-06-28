#pragma once

class HALF_ADDER
{
public:
	void setInput(int x, int y);
	void calculating();
	unsigned short getS();
	unsigned short getC();

private:
	unsigned short X, Y;
	unsigned short C;
	unsigned short S;
};