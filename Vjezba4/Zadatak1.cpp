#include <iostream>
#include <string>


int ponavljanje(std::string& string, std::string& podstring)  //string(const string& str, size_t pos, size_t len) - skripta
{
	int brojac = 0;
	size_t indeks = string.find(podsting, 0);

	//string substr (size_t pos = 0, size_t len = npos)const; static const size_t npos = -1; konst statička vrij s najv mogućom vrij za elem size_t	
	while (indeks != std::string::npos) //provjerava je li pozicioniran na -1
	{
		brojac++;
		indeks = string.find(podstring, indeks + 1);
	}
	return brojac;

}

int main()
{
	std::string string = "Danas je lijep dan";
	std::string podstring = "lijep";
	int rez = ponavljanje(string, podstring);
	std::cout << "Broj ponavljanja:" << rez << std::end1;
	return 0;
}