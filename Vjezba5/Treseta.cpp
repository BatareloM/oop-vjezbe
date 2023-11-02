#include <iostream>

class Karta
{
public:
	 broj; // as, duja, trica, 4,5,6, kralj, konj, fanat 
	 zog;
};

class Igrac
{
	 ime;
	 kombinacija karata;
	 broj bodova;
	 akuza;
};

class Deck
{
	broj karata;
	4 boje;
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