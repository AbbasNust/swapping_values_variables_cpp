// swapping_values_variables_cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
//programm for swpping values of two variables
{
   
	int a = 20;
	int b = 10;
	// with out using third variable
	a = a + b;// 30
	b = a - b;// 20
	a = a - b;// 10


	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause>0");
}


