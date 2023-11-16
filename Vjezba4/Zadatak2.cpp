#include  <iostream>
#include <string>

int interpunkcijskiZn(char znak)
{
	return (znak == '.' || znak == ',' || znak == '?' || znak == '!');
}

int funk(int std::string& recenica)
{
	std::string tocnaRec;
	bool razmak = false; // na pocetku false jer nisu na pravom mjestu 
	for (znak : recenica)
	{
		if (interpunkcijskiZn(znak))
		{
			if (!razmak)
			{
				tocnaRec.pop_back(); //uklanjanje poslijednjeg
				tocnaRec += znak; // dodavanje znaka interpunkcije u string
				tocnaRec += ' '; // dodavanje razmaka
				razmak = true; // dodano
			}
			else
			{
				tocnaRec += znak;
				tocnaRec = ' ';
			}
		else
		{
			tocnaRec += znak;
			razmak = false;
		}

		}
	}
	return tocnaRec;
}

int main()
{
	std::string nasaRec = " ja bih ,ako ikako mogu , ovu recenicu napisala ispravno.";
	std::getline(std::cin, nasaRec);
	std::string tocnaRec = funk(nasaRec);
	std::cout << "Ispravna recenica:" << tocnaRec;
	return 0;
}
