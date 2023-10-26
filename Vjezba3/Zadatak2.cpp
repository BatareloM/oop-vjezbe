#include <iostream>
#include <vector>


void unos2(std::vector<int>& vektor, int n)
{

	std::cout << "Unesite broj elemenata" << ":";
	std::cin >> n;

	std::cout << "Unesite el vektora:";
	for (int i = 0; i < n; i++)
	{
		int el;
		std::cin >> el;
		vektor.push_back(el);

	}
}

std::vector<int> prviDrugi(std::vector<int>&prvi, std::vector<int>&drugi) //1 2 3      3 4 5
{
	std::vector<int>  rezultat;
	
	for (int i = 0; i < prvi.size(); i++)
	{
		if (std::find(drugi.begin(), drugi.end(), prvi[i]) == drugi.end())
				rezultat.push_back(prvi[i]);
		
	}
	return rezultat;

}




int main()
{
	std::vector <int> prvi = { 1,2,3 };
	std::vector<int> drugi = { 3,4,5 };
	std::vector<int> rez;
	rez = prviDrugi(prvi, drugi);
	std::cout << "Novonastali vektor je ";
	for (auto it = rez.begin(); it != rez.end(); it++)
	{
		std::cout << " " << *it;
	}
}

