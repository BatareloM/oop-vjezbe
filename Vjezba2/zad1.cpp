#include <iostream>
void najveciNajmanji(int niz[], int n, int &najveci, int &najmanji)
{
	if (n <= 0)
	{
		std::cout << "Prazan niz" << n << std::endl;
		return;
	}

	najveci = niz[0];
	najmanji = niz[0];

	for (int i = 0; i < n; i++)
	{
		if (niz[i] < najmanji)
		{
			najmanji = niz[i];
		}
		if (niz[i] > najveci)
		{
			najveci = niz[i];
		}
	}
}

int main()
{
	int niz[] = { 0, 1, 2, 3, 4, 5};
	int n = sizeof(niz) / sizeof(niz[0]);
	int najveci, najmanji;
	najveciNajmanji(niz, n, najveci, najmanji);
	std::cout << "Najveci broj je:" << najveci << std::endl;
	std::cout << "Najmanji broj je:" << najmanji << std::endl;
	return 0;

