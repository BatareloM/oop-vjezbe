#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <fstream>

using namespace std;

void cita(const string& stringkoji, const string& odredena_rijec, const string& podstring)
{
	ifstream datoteka(stringkoji);
	vector<string> rijec
	{
		istream_iterator<string>(datoteka), istream_iterator<string>()
	};

	vector<size_t> pozicija;
	auto it = find(rijec.begin(), rijec.end(), odredena_rijec);
	while (it != rijec.end())
	{
		pozicija.push_back(distance(rijec.begin(), it));
		it = find(it++, rijec.end(), odredena_rijec);
	}

	rijec.erase(remove_if(rijec.begin(), rijec.end(), [podstring](const string& novistring)
	{
		return novistring.find(podstring) != string::npos; }),
		rijec.end());

	transform(rijec.begin(), rijec.end(), rijec.begin(), [](string& novistring)
		{
			transform(novistring.begin(), novistring.end(), novistring.begin(), ::toupper);
			return novistring;
		});

	ostream_iterator<string> ispis(cout, " ");
	copy(rijec.begin(), rijec.end(), ispis);

	datoteka.close();
}

int main()
{
	cita("words.txt", "odredena_rijec", "podstring");
	return 0;
}