// Multiplication-table.cpp : Prints multiplication table up to 10.
//

#include "stdafx.h"
#include <iostream>
#include<vector>


int main()
{
	int Multipliee;
	int M;
	std::vector<int> Table;

	std::cout << "Hey bud, Give me a number between 1 % 12: ";
	std::cin >> Multipliee;
	for (int i = 1; i <= 10; i++)
	{
		M = Multipliee*i;
		Table.push_back(M);
	}
	for (int N:Table)
		std::cout << N<< "\n";
	
	return 0;
}

