#include <iostream>
#include "Virtualpet.hpp"
using namespace std;
int main() {
    
    VirtualPet ljubimac;
    VirtualPet ljubimac2;

    if (ljubimac == ljubimac2) {
        cout << "Ljubimci su jednaki";
    }
    else {
        cout << "Ljubimci nisu jednaki";
    }

    

    return 0;
}
