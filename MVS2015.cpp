// MVS2015.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <iomanip>


int main()	
{
	double n, m, a;
	long double result;

	std::cin >> n >> m >> a;

	result = ceil(n / a) * ceil(m / a);
	
	std::cout.setf(std::ios_base::fixed);

	std::cout << std::setprecision(0) << result;
	
	system("pause");
	return 0;
}


