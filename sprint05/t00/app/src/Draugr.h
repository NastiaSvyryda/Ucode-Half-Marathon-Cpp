#pragma once
#include <iostream>
#include <string>
#include <map>
#include <initializer_list>

class Draugr {
    public:
        Draugr() : m_health(100), m_frostResist(50) {}

        void shoutPhrase(int shoutNumber) const;

    private:
        double m_health;
        const int m_frostResist;
};

