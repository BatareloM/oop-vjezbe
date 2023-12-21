#include "neprijatelji.hpp"
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector <Enemy*> neprijatelj;
	
	try
	{
		neprijatelj.push_back(new Boss("Marko", 100, 20, "Mac"));
		neprijatelj.push_back(new Monster("Zmaj", 90, 30, "Riga vatru"));
		neprijatelj.push_back(new Boss("Luka", 100, 20, " "));
		neprijatelj.push_back(new Monster("Troglavi zmaj", 90, 30, " "));

		for (const auto& Enemy : neprijatelj)
		{
			Enemy->attack();
			Enemy->displayInfo();

		}
	}

	catch (invalid_argument& e) // dio koda koji se izvrsava kad se uhvati iznimka iz standardne biblioteke
	{
		cout << "Iznimka uhvacena" << e.what(); // C++ standardne iznimke izvode se iz bazne klase std::exception
	}
	return 0;

}