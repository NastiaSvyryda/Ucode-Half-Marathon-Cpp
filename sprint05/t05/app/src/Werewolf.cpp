#include "Werewolf.h"
#include "Creature.h"
#include "Human.h"
#include "Wolf.h"


Werewolf::Werewolf() : Creature() {
    std::cout << "Werewolf was created" << std::endl;
}
Werewolf::~Werewolf() {
    std::cout << "Werewolf was deleted" << std::endl;
}