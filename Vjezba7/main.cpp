#include <iostream>
#include "Virtualpet.hpp"

int main() {
    
    VirtualPet ljubimac;
    VirtualPet ljubimac2;

    if (ljubimac == ljubimac2) {
        std::cout << "Ljubimci su jednaki" << std::endl;
    }
    else {
        std::cout << "Ljubimci nisu jednaki." << std::endl;
    }

    

    return 0;
}