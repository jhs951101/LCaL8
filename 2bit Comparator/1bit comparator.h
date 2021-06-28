#pragma once

class COMPARATOR_1BIT
{
public:
	void setInput(int x, int y);
	void calculating();
	unsigned short getF(int k);

private:
	unsigned short X, Y;
	unsigned short F[3];
};