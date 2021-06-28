#pragma once

#include<iostream>

using namespace std;

class PARALLEL
{
public:
	void setInput(string x, string y, int z);
	void calculating();
	void print();

private:
	unsigned short X[4], Y[4];
	unsigned short Z;
	unsigned short result[4];
};