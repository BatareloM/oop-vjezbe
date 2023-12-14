#include <iostream>
#include <string>
#include <vector>
#include "Owner.hpp"
#include "Virtualpet.hpp"


using namespace std;

int main() {
    int brojVlasnika, brojLjubimaca, brojAkcija;
    cout << "Unesite broj vlasnika:";
    cin >> brojVlasnika;
    cout << "Unesite broj ljubimaca:";
    cin >> brojLjubimaca;
    cout << "Unesite broj akcija:";
    cin >> brojAkcija;

    vector<Owner> vlasnici;
    for (int i = 0; i < brojVlasnika; ++i) {
        Owner vlasnik;
        for (int j = 0; j < brojLjubimaca; ++j) { // Dodaj ljubimce svakom vlasniku, ovisi o implementaciji
            VirtualPet ljubimac;
            vlasnik.dodavanjeLjub(ljubimac);
        }
        vlasnici.push_back(vlasnik);
    }

    // Pronalazak naj sretnijeg vlasnika
    int indeksNajSretnijeg = vlasnici[0].dodavanjeNajsretnijeg(vlasnici);
    cout << "Naj sretniji vlasnik je na indeksu: " << indeksNajSretnijeg << endl;

    return 0;
}
