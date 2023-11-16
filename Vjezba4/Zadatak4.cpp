#include <iostream>
#include <string>
#include <vector>
#include <ctime>



bool samoglasnik(char znak)
{
	znak = std::tolower(znak);
	if (znak == 'a' || znak == 'e' || znak == 'i' || znak == 'o' || znak == 'u') {
		return true; 
	}
	return false; 
}

std::string pretvorba(std::string& rijec)
{
	if (samoglasnik(rijec[0])) 
	{
		return rijec + "hay";
	}
	else
	{
		int pocS = 0;
		int n = rijec.size();
		for (int i = 0; i < n; i++)
		{
			if (samoglasnik(rijec[i]))
			{
				pocS = i;
			}
		}
		return rijec.substr(pocS) + rijec.substr(0, pocS) + "ay";
	}
}

int main()
{
	std::vector<std::string> recenica = { "What time is it?" };
	int slucoda = std::rand() % recenica.size();
	std::string renRec = recenica[slucoda];
	std::string prevodenje;
	std::string rijec;
	std::string novaRe(slucoda);
	while (novaRe >> rijec)
	{
		if (!renRec.empty())
		{
			renRec += ' ';
		}
		renRec += pretvorba(rijec);
	}
	std::cout << "Prevedena recenica je:" << renRec;
	

}

