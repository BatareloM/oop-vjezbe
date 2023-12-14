#include "Virtualpet.hpp"
#include <string>
#include <algorithm>



using namespace std;

bool operator==(VirtualPet& other) const
{
	return (ime = other.ime && vrsta = other.vrsta && bodovi_za_glad = other.bodovi_za_glad && bodovi_za_srecu = other.bodovi_za_srecu && status_budnosti = other.status_budnosti);

}

bool operator!=(VirtualPet& other) const
{
	return !(*this == other);
}

VirtualPet& operator=(VirtualPet& other) const
{
	if (this != &other)
	{
		ime = other.ime;
		vrsta = other.vrsta;
		bodovi_za_glad = other.bodovi_za_glad;
		bodovi_za_srecu = other.bodovi_za_srecu;
		status_budnosti = other.status_budnosti;
	}
	return *this;
}
VirtualPet& operator++() const
{
	return *this;
}

bool operator<(const VirtualPet& other) const 
{
	return false;
}
bool operator>(const VirtualPet& other) const 
{

	return false;
}
bool operator<=(const VirtualPet& other) const 
{

	return false;
}
bool operator>=(const VirtualPet& other) const 
{
	return false;
}

bool operator<<(const VirtualPet& other) const
{
	cout << VirtualPet;
}
