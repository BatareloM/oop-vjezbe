#include <iostream>
#include "Virtualpet.hpp"
#include "Owner.hpp"
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

VirtualPet::VirtualPet()
{
}

VirtualPet::VirtualPet(string ime, string vrsta, int bodovi_za_glad, int bodovi_za_srecu, bool status_budnosti) : ime(ime), vrsta(vrsta), bodovi_za_glad(bodovi_za_glad), bodovi_za_srecu(bodovi_za_srecu), status_budnosti(status_budnosti) {}

void VirtualPet::jelo(int kolicinaHrane)
{
	int hrana = kolicinaHrane;
	bodovi_za_glad -= kolicinaHrane;
	if (bodovi_za_glad < 0)
	{
		bodovi_za_glad = 0;
	}
	bodovi_za_srecu += kolicinaHrane;
	cout << ime << " jeo je. Glad: " << bodovi_za_glad << ",sreća: " << bodovi_za_srecu;
}

void VirtualPet::igra()
{
	bodovi_za_glad += 15;
	bodovi_za_srecu += 30;
}

void VirtualPet::spavanje()
{
	if (bodovi_za_glad >= 20)
	{
		status_budnosti = false;
		bodovi_za_glad += 10;
		bodovi_za_srecu += 20;
	}
	else
	{
		cout << ime << " nije gladan i ne želi spavati!";
	}
}

int VirtualPet::getGlad()
{
	return bodovi_za_glad;
}

int VirtualPet::getSreca() {
	return bodovi_za_srecu;
}

bool VirtualPet::isBudnost()
{
	return status_budnosti;
}

