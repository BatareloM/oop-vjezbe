#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
void sortiraj(T niz[], T n)
{
	sort(niz, niz + n);
}

template<> //specijalizacija za konkretni tip se zapisuje u obliku
bool sortiraj(char a, char b)
{
		return tolower(a) < tolower(b); // bool operator() (const student& s1, const student& s2){return s1.ocjena < s2.ocjena;

	}


int main()
{
	int niz1[] = { 3, 1, 4, 2, 5 };
	char niz2[] = { 'b', 'A', 'c', 'B', 'a' };

	sortiraj(niz1, 5);
	sortiraj(niz2, 5);

	for (int i = 0; i < 5; i++)
	{
		cout << niz1[i] << " ";
	}
	for (int i = 0; i < 5; i++)
	{
		cout << niz2[i] << " ";
	}
	return 0;
}

