// MVS2015.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()	
{
	int n;
	int count = 0;
	string s;

	cin >> n;
	cin >> s;

	
	for (int i(0); i < n; i++)
	{
		if(s[i+1] == s[i])
		{
				count++;
		}
	}
	
	cout << count;

	system("pause");
	return 0;
}


