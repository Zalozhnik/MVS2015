// MVS2015.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>


int main()	
{
	

	int iRedToe = 0;
	int iBlueToe = 0;
	int iResultDayDifferentToe = 0;
	int iResultDaySameToe = 0;
	
	std::cin >> iRedToe >> iBlueToe;
	
	if (iBlueToe == 0)
	{
		iResultDayDifferentToe = 0;
		iResultDaySameToe = (iRedToe  / 2);
		std::cout << iResultDayDifferentToe << " " << iResultDaySameToe;
	}
	else
	{
		if (iRedToe / iBlueToe > 0)
		{
			iResultDayDifferentToe = iBlueToe;
			iResultDaySameToe = ((iRedToe - iResultDayDifferentToe) / 2);
			std::cout << iResultDayDifferentToe << " " << iResultDaySameToe;
		}
		else {
			iResultDayDifferentToe = iRedToe;
			iResultDaySameToe = ((iBlueToe - iResultDayDifferentToe) / 2);
			std::cout << iResultDayDifferentToe << " " << iResultDaySameToe;
		}
	}
	

	system("pause");
	return 0;
}

