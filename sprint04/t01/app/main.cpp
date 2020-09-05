#include "src/Axe.h"
#include "src/StormcloakSoldier.h"
#include "src/Sword.h"
#include "src/ImperialSoldier.h"
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
    StormcloakSoldier *sc = new StormcloakSoldier();
    ImperialSoldier *is = new ImperialSoldier();
    Sword *sword = new Sword(isWeapon(std::string(argv[1])));
    Axe *axe = new Axe(isWeapon(std::string(argv[2])));

    sc->setWeapon(axe);
    is->setWeapon(sword);
    while (sc->getHealth() > 0 && is->getHealth() > 0) {
        is->attack(*sc);
        if(sc->getHealth() > 0)
            sc->attack(*is);
        std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
    }
    if (sc->getHealth() <= 0)
        std::cout << "Imperial has won!" << std::endl;
    else
        std::cout << "Stormcloak has won!" << std::endl;
    delete is;
    delete sc;
}

