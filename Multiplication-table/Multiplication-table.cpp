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

	std::cout << "Hey bud, Give me a number between 1 % 12: ";
	std::cin >> Multipliee;
	for (int i = 1; i <= 10; i++)
	{
		Multiplied = Multipliee*i;
		Table.push_back(Multiplied);
	}
			for (int i = 1;i<=10; i++)
			std::cout << Multipliee<< "*" <<i << "=" << Table[i-1] << "\n";
	
	return 0;
}

