//
// Created by Oleksandr Arnopolin on 9/8/20.
//

#ifndef WEREWOLF_HUMAN_H
#define WEREWOLF_HUMAN_H
#include "Creature.h"

class Human : virtual public Creature {
    public:
        Human() = default;
        ~Human() = default;
};


#endif //WEREWOLF_HUMAN_H
