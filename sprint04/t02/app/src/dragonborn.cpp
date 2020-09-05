#include "dragonborn.h"
#include <iostream>

void Dragonborn::shoutThuum() const {
    std::cout << "Yol Toor Shul" << std::endl;
}

void Dragonborn::attackWithMagic() const {
    std::cout << "*attacks with magic spell*" << std::endl;
}

void Dragonborn::attackWithWeapon() const {
    std::cout << "*attacks with weapon*" << std::endl;
}

void Dragonborn::executeAction(const Actions action) {
    std::map <Dragonborn::Actions, void (Dragonborn::*)() const> function = {
            {Dragonborn::Actions::Shout, &Dragonborn::shoutThuum},
            {Dragonborn::Actions::Magic, &Dragonborn::attackWithMagic},
            {Dragonborn::Actions::Weapon, &Dragonborn::attackWithWeapon}
    };
    (this->*function.at(action))();
}