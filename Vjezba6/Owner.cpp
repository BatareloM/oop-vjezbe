#include <iostream>
#include "Virtualpet.hpp"
#include "Owner.hpp"
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

Owner::Owner(){}

Owner::Owner(const Owner& otherOwner) : ljubimci(otherOwner.ljubimci){}

Owner::Owner(Owner&& otherOwner) : ljubimci(move(otherOwner.ljubimci)){}


void Owner::dodavanjeLjub(VirtualPet ljubimac)
{
	ljubimci.push_back(ljubimac);
}

void Owner::hranjenje()
{
	srand(time(0));
	for (auto& ljubimac : ljubimci)
	{
		int novaHrana = rand() % 20 + 1;
		ljubimac.jelo(novaHrana);
	}
}

void Owner::igranje()
{
	srand(time(0));
	for (auto& ljubimac : ljubimci)
	{
		ljubimac.igra();
	}
}
Owner::Owner(int BrojLjubimaca, int BrojAkcija) : brojLjubimaca(BrojLjubimaca), brojAkcija(BrojAkcija)
{

}

int Owner::getbrojLjubimaca()
{
	return brojLjubimaca;
}

int Owner::getbrojAkcija()
{
	return brojAkcija;
}

void Owner::nivoiSrece(int sreca)
{
	nivoSrece.push_back(sreca);
}

int Owner::dodavanjeNajsretnijeg(vector <Owner> vlasnici)
{
	Owner najSretniji;
	int indeks = -1;
	double najSretnijiodS = -1; // Pretpostavimo da ocjena ne može biti negativna

	for (int i = 0; i < vlasnici.size(); ++i) {
		int sreca = vlasnici[i].brojAkcija / vlasnici[i].brojLjubimaca;

		if (sreca > najSretnijiodS) {
			najSretnijiodS = sreca;
			indeks = i;
		}
	}
	return indeks;
}









