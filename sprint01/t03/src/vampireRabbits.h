#pragma once
#include <iostream>
#include <list>
#include <unistd.h>
#include <algorithm>

enum class Gender {
    Male,
    Female
};

struct Rabbit {
    Gender gender;
    bool isVampire;
    int age;
};

struct Amount{
    int male;
    int female;
    int vampires;
    int vampires_k;
    int male_n;
    int female_n;
};
void randome_rabbit(std::list<Rabbit>& rabbits, Amount& amount);
void print_rabbits(Amount& amount);
void main_step(std::list<Rabbit>& rabbits, Amount& amount);
int count_childrens(Amount& amount);
void vamp_create(Amount& amount, std::list<Rabbit>& rabbits);

