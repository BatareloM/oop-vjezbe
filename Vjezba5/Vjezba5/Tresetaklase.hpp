#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Karta
{
private:
	int broj; // as, duja, trica, 4,5,6,7, kralj, konj, fanat  1-9 
	char* zog; // "boje"   kupe, šade, dinari i baštoni     1,2,3,4

public:
	Karta(int broj, const char* zog);
	int getBroj();
	char* getZog();
	void ispis();
};


class Igrac
{
private:
	string ime;
	vector<Karta>kombinacija_karata;
	int broj_bodova;
	int akuza;

public:
	Igrac(string ime, vector<Karta>kombinacija_karata, int akuza);
	void primljenaKarta(Karta novaKarta);
	void akuzanje();
	void bodovi();
};

class Deck
{
	int broj_karata = 40;
	Karta niz[40];
	int novaKarta = 0;
public:

	Deck(int broj_karata, Karta niz[]);
	void mijesanje();
	void podijeli(vector<Igrac> igraci);
	Karta povlacenje();
};



/*
AS, DUJA, TRICA U ISTOJ BOJI - 3 PUNTA
3ASA, 3DUJE, 3TRICE - 3 PUNTA
4ASA, 4DUJE, 4TRICE - 4 PUNTA
TRICA - DUJA - AS - KRALJ - DAMA - DECKO
OD 7 DO 4 NEMAJU VRIJEDNOST
POBJEDNIK ONAJ KOJI PRVI SKUPI 41 ILI 61 BOD
AS cijeli punat; ostale daju belu (3 bele 1 punat)
*/