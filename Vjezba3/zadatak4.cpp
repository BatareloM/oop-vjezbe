#include <iostream>
#include <vector>

void ukloniti(std::vector<int>& vektor, int element)
{
	std::vector<int>::iterator it = find(vektor.begin(), vektor.end(), element);

	*it = vektor.back();
	vektor.pop_back();


}



int main()
{
	std::vector<int> vektor = { 1,4,3,5,6 };
	ukloniti(vektor, 4);
	cout << "Vektor nakon uklonjenog elementa: ";
	for (int& element : vektor)
	{
		cout << element << " ";
	}
	return 0;
}