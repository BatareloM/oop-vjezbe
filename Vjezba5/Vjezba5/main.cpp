#include <iostream>
#include <iostream>
#include <vector>
#include <string>
#include "Tresetaklase.hpp"

int main(void) {

	vector<Igrac>igraci;
	int broj_igraca;
	cout << "Koliko je igraca?" << endl;
	cin >> broj_igraca;
	for (int i = 0; i < broj_igraca; i++)
	{
		string ime;
		cout << "Unesite ime igraca (poredak ulijevo)" << endl;
		cin >> ime;

		Igrac noviIgrac(ime, vector <Karta>(),0); //kreiranje novog objekta
		igraci.push_back(noviIgrac);
	}
	
	int brojevi[] = { 1,2,3,4,5,6,7,11,12,13 };
	const char* zog[] = { "baštoni", "špade", "dinari", "kupe" };
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			Karta karta(brojevi[i], zog[j]);
			spilKarata[i * 4 + j] = karta;											//r*BR_STUP + stup
		}
	}


	Deck spil(40, spilKarata);
	spil.mijesanje();
	spil.podijeli(igraci);
	for (int i = 0; i < igraci.size(); i++)
	{
		cout << "Ruka igraca " << igraci[i].ime << ":" << endl;
		for (int j = 0; j < igraci[i].kombinacija_karata.size(); j++) {
			cout << igraci[i].kombinacija_karata[j].getBroj() << " " << igraci[i].kombinacija_karata[j].getZog() << endl;
		}
	}
	return 0;
}
