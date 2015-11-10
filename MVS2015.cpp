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
	bool flags = false;
	string s;

	cin >> s;

	
	for (int i(0); i < s.size(); i++)
	{
		if (s[i] == s[i + 1] && s[i] == s[i + 2] && s[i] == s[i + 3] && s[i] == s[i + 4] && s[i] == s[i + 5] && s[i] == s[i + 6])
		{
			flags = true;
		}

	}

	if (flags)
		cout << "YES";
	else
		cout << "NO";

	system("pause");
	return 0;
}


