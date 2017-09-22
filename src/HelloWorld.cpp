//============================================================================
// Name        : HelloWorld.cpp
// Author      : Richard Nader
// Version     :
// Copyright   : OpenSrc :)
// Description : Basic C++ Training Playground.
//============================================================================

#include <iostream>
using namespace std;

int aNumber = 5;

void myFunction(int *myNumber) {
	cout << "This is my number: " << *myNumber << endl;
}


int main() {

	int* aAddress = &aNumber;
	int newNumber = 6;

	cout << *aAddress << " " << aNumber << endl;
	*aAddress = 55;
	cout << *aAddress << " " << aNumber << endl;

	myFunction(&newNumber);

	return 0;
}
