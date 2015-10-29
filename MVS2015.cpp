// MVS2015.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
#include <string> 

using namespace std;

struct MYSTUCTURE
{
	string sName;
	int iAdge;
};

int main()	
{
	MYSTUCTURE MyStructure;
	
	cout << "Please enter first name\n";
	cin >> MyStructure.sName;
	cout << "Please enter the number of years\n";
	cin >> MyStructure.iAdge;
	cout << "My Name is ";
	cout << MyStructure.sName;
	cout << " and I am ";
	cout << MyStructure.iAdge;
	cout << " years old.\n";

	system("pause");
	return 0;
}

