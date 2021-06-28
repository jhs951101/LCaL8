#pragma once

#include<string>

using namespace std;

class COMPARATOR_2BIT
{
public:
	void setInput(string x, string y);
	void calculating();
	void print();

private:
	unsigned short X[2], Y[2];
	unsigned short F[3];
};