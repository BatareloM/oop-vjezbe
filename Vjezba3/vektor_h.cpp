#include "vektor_h.hpp"
#include <iostream>

void unos(std::vector<int>& brojevi, int n)
{
	for (int i = 0; i < n; i++)
	{
		int broj;
		std::cout << "Upisi broj elemenata" << i << ": ";
		std::cin >> broj;
		brojevi.push_back(broj);
	}
}

void unos(std::vector<int>& brojevi, int a, int b)
{

	int broj;
	do {
		std::cout << "Unesite broj za vektor:";
		std::cin >> broj;
		if (broj > a && broj < b)
		{
			brojevi.push_back(broj);
		}
	} while (broj > a && broj < b);
}

void ispis(std::vector<int>& brojevi)
{
	std::cout << "Vektor je:";
	for (int i = 0; i < brojevi.size(); i++)
	{
		std::cout << " " << brojevi[i];
	}
}
