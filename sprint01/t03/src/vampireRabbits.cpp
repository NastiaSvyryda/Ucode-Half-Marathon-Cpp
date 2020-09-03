#include "vampireRabbits.h"

int count_childrens(Amount& amount) {
    if(amount.female_n > amount.male_n)
        return amount.male_n;
    else
        return amount.female_n;
}

void vamp_create(Amount& amount, std::list<Rabbit>& rabbits) {
    int vamps = amount.vampires;

    for (auto i = rabbits.begin(); i != rabbits.end(); i++) {
        if(vamps != 0 && !i->isVampire){
            amount.vampires_k++;
            vamps--;
            i->isVampire = true;
            i->age *= -1;
            if (i->gender == Gender::Female)
                amount.female_n--;
            else
                amount.male_n--;
        }
        if (vamps == 0)
            break;
    }
}

void main_step(std::list<Rabbit>& rabbits, Amount& amount) {
    for (auto i = rabbits.begin(); i != rabbits.end(); i++) {
        if (i->gender == Gender::Female && i->age > 3) {
            amount.female--;
            if (!i->isVampire)
                amount.female_n--;
            rabbits.erase(i);
        }
        else if (i->age > 3) {
            amount.male--;
            if (!i->isVampire)
                amount.male_n--;
            rabbits.erase(i);
        }
        if (i->isVampire && (i->age > 8 || i->age < -8)) {
            if (i->age > 0)
                amount.vampires--;
            else
                amount.vampires_k--;
            rabbits.erase(i);
        }
        if (i->age < 0)
            i->age--;
        else
            i->age++;
    }
}

void print_rabbits(Amount& amount) {
    std::cout << "Males: "<< amount.male << std::endl;
    std::cout << "Females: "<< amount.female << std::endl;
    std::cout << "Vampire: "<< amount.vampires + amount.vampires_k << std::endl;
}

void randome_rabbit(std::list<Rabbit>& rabbits, Amount& amount) {
    Rabbit rabbit;
    double val = (double) rand() / RAND_MAX;

    if (val < 0.01) {    //  1% vampire
        rabbit.isVampire = true;
        amount.vampires++;
    }
    else
        rabbit.isVampire = false;
    if (val < 0.5) {  //  50% female
        rabbit.gender = Gender::Female;
        amount.female++;
        if (!rabbit.isVampire)
            amount.female_n++;
    }
    else {  //  50% male
        rabbit.gender = Gender::Male;
        amount.male++;
        if (!rabbit.isVampire)
            amount.male_n++;
    }
    rabbit.age = 0;
    rabbits.push_back(rabbit);
}