// Multiplication-table.cpp : Prints multiplication table up to 10.
//

#include "stdafx.h"
#include <iostream>
#include<vector>


int main()
{
	int Multipliee;
	int Multiplied;
	std::vector<int> Table;

	std::cout << "Hey bud, Give me a number between 1 & 10: ";
	std::cin >> Multipliee;
	if (Multipliee <= 10 && Multipliee>0) {

		for (int i = 1; i <= 10; i++)
		{
			Multiplied = Multipliee*i;
			Table.push_back(Multiplied);
		}
		for (int i = 1; i <= 10; i++)
			std::cout << Multipliee << "*" << i << "=" << Table[i - 1] << "\n";
	}
	else
		std::cout << "What did I say? Between 1 & 10\n";

	return 0;
}

