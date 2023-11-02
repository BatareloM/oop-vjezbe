#include <iostream>
#include <string>
#include <vector>
#include <ctime>



bool samoglasnik(char znak)
{
	znak = std::tolower(znak);
	znak = 'a', 'e', 'i', 'o', 'u';
	return znak;
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
			samoglasnik(word[i])
			{
				pocS = i;
			}
		}

	}
}

