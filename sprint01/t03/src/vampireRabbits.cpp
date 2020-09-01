#include "vampireRabbits.h"

int count_childrens(Amount& amount) {
    if(amount.female_n > amount.male_n)
        return amount.male_n;
    else
        return amount.female_n;
}

void main_step(std::list<Rabbit>& rabbits, Amount& amount) {
//    int vamps = amount.vampires;
//    std::cout << "Vampire: "<< amount.vampires << std::endl;
    for (auto i = rabbits.begin(); i != rabbits.end(); i++) {
        if (i->gender == Gender::Female && i->age <= 3) {
            amount.female++;
            if (!i->isVampire)
                amount.female_n++;
        }
        else if (i->age <= 3) {
            amount.male++;
            if (!i->isVampire)
                amount.male_n++;
        }
        else
            rabbits.erase(i);
        if (i->isVampire && i->age <= 8)
            amount.vampires++;
        else if (i->isVampire)
            rabbits.erase(i);
//        else if(vamps-- != 0){
//            i->isVampire = true;
//        }
        i->age++;
    }
}

void print_rabbits(Amount& amount) {
    std::cout << "Males: "<< amount.male << std::endl;
    std::cout << "Females: "<< amount.female << std::endl;
    std::cout << "Vampire: "<< amount.vampires << std::endl;
}

void randome_rabbit(std::list<Rabbit>& rabbits) {
    Rabbit rabbit;
    double val = (double) rand() / RAND_MAX;

    if (val < 0.01)       //  1% vampire
        rabbit.isVampire = true;
    else
        rabbit.isVampire = false;
    if (val < 0.5)  //  50% female
        rabbit.gender = Gender::Female;
    else  //  50% male
        rabbit.gender = Gender::Male;
    rabbit.age = 0;
    rabbits.push_back(rabbit);
}