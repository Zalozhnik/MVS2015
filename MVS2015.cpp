// MVS2015.cpp: ���������� ����� ����� ��� ����������� ����������.
//
#include "stdafx.h"
#include <iostream>

int main()	
{
	int iWeight;
	std::cin >> iWeight;

	if (iWeight != 2)
	{
		if (iWeight % 2 == 0)
		{
			std::cout << "YES";
		}
		else {
			std::cout << "NO";
		}
	}
	else
	{
		std::cout << "NO";
	}

	system("pause");
	return 0;
}


