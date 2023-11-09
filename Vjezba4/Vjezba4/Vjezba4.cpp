#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int preokretanje(std::string& string)
{
	std::string preokrenuti = string;
	std::reverse(preokrenuti.begin(), preokrenuti.end());
	return preokrenuti;
}

int main()
{
	std::vector<std::string> stringovi;
	int n;

	std::cout << "Unesite broj stringova:";
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::string unos;
		std::cout << "Unesite string:" << i + 1;
		std::getline(std::cin, unos);
		stringovi.push_back(unos);
	}

	for (std::string& string : stringovi) //foreach petlja
	{
		string = preokretanje(string);
	}
	std::sort(stringovi.begin(), stringovi.end());

	std::cout << "Sortirano je:";
	for (std::string& string : stringovi)
	{
		std::cout << preokretanje(string);
	}
	return 0;

}