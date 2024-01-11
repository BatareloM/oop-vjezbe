#include <iostream>
#include <vector>

using namespace std;
template <typename T>
class Skup
{
private:
	vector <T> elementi;
public:
	void dodavanje(const T& element)
	{
		elementi.push_back(element);
	}
	void izbacivanje(const T& element)
	{
		auto it = find(elementi.begin(), elementi.end(), element);
		if (it != elementi.end())
		{
				elementi.erase(it);
		}
	}
	void provjeravanje(const T& element)
	{
		return find(elementi.begin(), elementi.end(), element) != elementi.end();
	}
};


int main()
{
	Skup<int> skupovi;	
	skupovi.dodavanje(2);
	skupovi.izbacivanje(3);
	skupovi.provjeravanje(4);

	cout << "Dodavanje broja 2" << 
}