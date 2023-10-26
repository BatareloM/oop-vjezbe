#include <iostream>
#include <vector>
#include <algorithm>

void sortiranje(std::vector<int>& vektor)
{
	std::sort(vektor.begin(), vektor.end());

	int najmanji = vektor[0];
	int najveci = vektor.back();

	vektor.insert(std::find(vektor.begin(), vektor.end(), najmanji), 0);

	int suma = 0;
	for (auto it = std::find(vektor.begin(), vektor.end(), najveci) + 1; it != vektor.end(); it++)
	{
		suma += *it;
	}

	
	for (int& el : vektor) //foreach petlja  
	{
		std::cout << el << " ";
	}

	std::cout << "Suma iza najveceg elementa je" << suma << ";";
	
}
int main()
{
	std::vector<int>vektor = { 1,2,3, -4 ,13, 5,6,7 };
	sortiranje(vektor);
	return 0;


