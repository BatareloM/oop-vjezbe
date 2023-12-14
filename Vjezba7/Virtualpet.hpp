#ifndef Virtualpet_h
#define Virtualpet_h
#include <string>

using namespace std; 

class VirtualPet
{
private:
	string ime;
	string vrsta;
	int bodovi_za_glad;
	int bodovi_za_srecu;
	bool status_budnosti;
	int porcije;
public:
	VirtualPet();
	VirtualPet(string ime, string vrsta, int bodovi_za_glad = 50, int bodovi_za_srecu = 50, bool status_budnosti = true);
	void jelo(int kolicinaHrane);
	void igra();
	void spavanje();
	int getGlad();
	int getSreca();
	bool isBudnost();

};



#endif // !Virtualpet_hpp
