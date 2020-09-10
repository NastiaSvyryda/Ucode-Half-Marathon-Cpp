#include "Soldier.h"
#include "Weapon.h"
#include <iostream>
#include <string>

static int isWeapon(std::string arg) {
    size_t idx;
    int weaponDmg = 0;

    try {
        weaponDmg = std::stoi(arg, &idx);
        if (!(weaponDmg >= 10 && weaponDmg <= 20) ||
            arg[idx] != '\0') {
            throw 1;
        }
    }
    catch (...) {
        std::cerr << "Damage has to be in a range of 10-20 points."
                  << std::endl;
        exit(1);
    }
    return weaponDmg;
}

int main(int argc, char **argv){
    if (argc != 3) {
        std::cerr << "usage: ./imperialVsStormcloak [dmgOfSword] [dmgOfAxe]" << std::endl;
        exit(1);
    }
    Weapon *sword = new Weapon(isWeapon(std::string(argv[1])));
    Weapon *axe = new Weapon(isWeapon(std::string(argv[2])));
    Imperial *is = new Imperial("Martin", 100);
    Stormcloak *sc = new Stormcloak("Flynn", 100);

    sc->setWeapon(axe);
    is->setWeapon(sword);
    std::cout << "\n***The battle has begun!***\n" << std::endl;
    while (sc->getHealth() > 0 && is->getHealth() > 0) {
        sc->attack(*is);
        if(is->getHealth() > 0)
            is->attack(*sc);
        std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
    }
    if (sc->getHealth() <= 0)
        std::cout << "Imperial has won!\n" << std::endl;
    else
        std::cout << "Stormcloak has won!\n" << std::endl;
    delete sc;
    delete is;
}

