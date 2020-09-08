#pragma once
#include <iostream>
#include <string>
#include <map>
#include <initializer_list>
#include <stdexcept>

#define HEALTH 100
#define RESIST 50
class Draugr {
    public:
        Draugr();
        Draugr(int frostResist);
        Draugr(double health, int frostResist);

        void shoutPhrase(int shoutNumber) const;

    private:
        double m_health;
        const int m_frostResist;
};

void executeDraugr(int args, char **argv);

