#pragma once
#include <initializer_list>
#include <string>
#include <map>
#include <iostream>
#include <regex>

class Draugr {
public:
    Draugr() :m_health(100), m_frostResist(50) {
        Draugr(m_health, m_frostResist);
    }
    Draugr(int health) :m_health(health), m_frostResist(50) {
        Draugr(m_health, m_frostResist);
    }
    Draugr(double health, int resist) :m_health(health), m_frostResist(resist){
        std::cout << "Draugr with " << m_health << " health and " << m_frostResist << "% frost resist was born" << std::endl;
    }
    Draugr(Draugr const &) = delete;
    Draugr(Draugr const &&) = delete;
    void shoutPhrase(int shoutNumber) const;
    void setName(const std::string&& name);
private:
    double m_health;
    std::string m_name;
    const int m_frostResist;
};
