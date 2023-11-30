#ifndef Owner_h
#define Owner_h
#include "Virtualpet.hpp"
#include <vector>
#include <algorithm>

using namespace std;

class Owner
{
private:
	vector<VirtualPet> ljubimci;
	vector<int> nivoSrece;
	int brojLjubimaca;
public:
	int brojAkcija;
	Owner();
	Owner(const Owner& otherOwner);
	Owner(Owner&& otherOwner);
	void dodavanjeLjub(VirtualPet ljubimac);
	void hranjenje();
	void igranje();
	Owner(int BrojLjubimaca, int BrojAkcija);
	int getbrojLjubimaca();
	int getbrojAkcija();
	void nivoiSrece(int sreca);
	int dodavanjeNajsretnijeg(vector <Owner> vlasnici);

};



#endif // !Owner_h
