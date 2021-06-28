#include "2bit comparator.h"
#include<iostream>
#include<string>

using namespace std;

int main(){

	string x, y;
	COMPARATOR_2BIT comparator_2bit;

	cout << "Input the first number (x1, x0): ";
	cin >> x;

	cout << "Input the second number (y1, y0): ";
	cin >> y;

	comparator_2bit.setInput(x, y);
	comparator_2bit.print();

	return 0;
}