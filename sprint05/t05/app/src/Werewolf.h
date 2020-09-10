//
// Created by Oleksandr Arnopolin on 9/8/20.
//

#ifndef WEREWOLF_WAREWOLF_H
#define WEREWOLF_WAREWOLF_H
#include "Human.h"
#include "Wolf.h"
#include <iostream>

class Werewolf : public Human, public Wolf {
public:
    Werewolf();
    ~Werewolf();
};


#endif //WEREWOLF_WAREWOLF_H
