#include <iostream>
int& uv(int niz[], int i)
{

	return niz[i];
}
int main()
{
	int niz[] = { 0, 1, 2, 3, 4, 5 };
	int indeks = 2;
	uv(niz, indeks) += 1;
	int n = sizeof(niz) / sizeof(niz[0]);

	for (int j = 0; j < n; j++)
	{
		std::cout << niz[j] << " ";
	}
	return 0;
}