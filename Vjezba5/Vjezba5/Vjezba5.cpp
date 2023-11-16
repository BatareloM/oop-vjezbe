#include <iostream>
#include "Tresetaklase.hpp"
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

Karta::Karta(int broj, const char* zog) 
{
	this->broj = broj;
	this->zog = new char[10];
	strcpy(this->zog, zog);
}

//get dohvaca - salje vrijednost nekog atributa
int Karta::getBroj() {
	return broj;
}

char* Karta::getZog()
{
	return zog;
}

////set postavlja
//void setBroj(int noviBroj) {
//	broj = noviBroj;
//}

void Karta::ispis()
{
	std::cout << broj << " " << zog << std::endl;

}
Igrac::Igrac(string ime, vector<Karta>kombinacija_karata, int akuza)
	{
		this->ime = ime;
		this->kombinacija_karata = kombinacija_karata;
		broj_bodova = 0;
		this->akuza = akuza;
	}
void Igrac::primljenaKarta(Karta novaKarta)
	{
		kombinacija_karata.push_back(novaKarta);
	}
void Igrac::akuzanje()
	{
		//jesu li 3 asa u ruci igraca
		int BrojAseva = 0;
		int BrojDvica = 0;
		int BrojTrica = 0;
		for (int i = 0; i < kombinacija_karata.size(); i++)
		{
			int broj_trenutne_karte = kombinacija_karata[i].getBroj();
			char* trenutni_zog = kombinacija_karata[i].getZog();
			if (broj_trenutne_karte == 1) {
				BrojAseva++;
			}
			else if (broj_trenutne_karte == 2) {
				BrojDvica++;
			}
			else if (broj_trenutne_karte == 3)
			{
				BrojTrica++;
			}
			if (BrojAseva == 1)
			{
				broj_bodova += 1;
			}
			else if (BrojDvica == 1)
			{
				broj_bodova += 1;
			}
			else if (BrojTrica == 1)
			{
				broj_bodova += 1;
			}
			for (int i = 0; i < kombinacija_karata.size(); i++)
			{
				int broj_trenutne_karte = kombinacija_karata[i].getBroj();
				char* trenutni_zog = kombinacija_karata[i].getZog();
				if (broj_trenutne_karte == 1) {
					BrojAseva++;
				}
				else if (broj_trenutne_karte == 2) {
					BrojDvica++;
				}
				else if (broj_trenutne_karte == 3)
				{
					BrojTrica++;
				}

			}
			if (BrojAseva == 3)
			{
				broj_bodova += 3;
			}
			else if (BrojDvica == 3)
			{
				broj_bodova += 3;
			}
			else if (BrojTrica == 3)
			{
				broj_bodova += 3;
			}
		}
		for (int i = 0; i < kombinacija_karata.size(); i++)
		{
			int broj_trenutne_karte = kombinacija_karata[i].getBroj();
			char* trenutni_zog = kombinacija_karata[i].getZog();
			if (broj_trenutne_karte == 1) {
				BrojAseva++;
			}
			else if (broj_trenutne_karte == 2) {
				BrojDvica++;
			}
			else if (broj_trenutne_karte == 3)
			{
				BrojTrica++;
			}

		}
		if (BrojAseva == 4)
		{
			broj_bodova += 4;
		}
		else if (BrojDvica == 4)
		{
			broj_bodova += 4;
		}
		else if (BrojTrica == 4)
		{
			broj_bodova += 4;
		}
	}
void Igrac::bodovi()
{
	cout << "Igrac" << ime << "ima" << broj_bodova << "bodova" << endl;
}

Deck::Deck(int broj_karata, Karta niz[])
{
		this->broj_karata = broj_karata;
		memcpy(this->niz, niz, broj_karata * sizeof(Karta));
}

void Deck::mijesanje()
	{
		std::random_shuffle(niz, niz + broj_karata);
	}
void Deck::podijeli(vector<Igrac> igraci)
	{
		for (int i = 0; i < 10; i++)	//po kartama
		{
			for (int j = 0; j < igraci.size(); j++) //po igracima
			{
				igraci[j].primljenaKarta(niz[novaKarta]); //1 po 1 igrac dobiva kartu
				novaKarta++;			//povecavamo brojac da se pomaknemo na sljedecu kartu u spilu
			}

		}

	}
Karta Deck::povlacenje()
	{
		if (novaKarta < broj_karata)
		{
			novaKarta++;
			return niz[novaKarta - 1];
		}
		else
		{
			return Karta(-1, " ");
		}
}

