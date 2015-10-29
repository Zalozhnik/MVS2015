// MVS2015.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int Num1;
	int Num2;
	int result;
	int* pNum1;
	int* pNum2;
	Num1 = 2;
	Num2 = 3;
	pNum1 = &Num1;
	pNum2 = &Num2;
	result = *pNum1 + *pNum2;
	cout << "The Result is = ";
	cout << result << endl;

	system("pause");
	return 0;
}

