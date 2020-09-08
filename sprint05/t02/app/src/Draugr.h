#pragma once
#include <initializer_list>
#include <string>
#include <map>
#include <iostream>
#include <regex>

void copyDraugr(char** argv, int shout, std::string name1, std::string name2);
void moveDraugr(char** argv, int shout, std::string name1, std::string name2);
void splitName(std::string &name1, std::string &name2, std::string argv);
class Draugr {
public:
    Draugr(std::string name) :m_health(100), m_frostResist(50) {
        Draugr(m_health, m_frostResist, name);
    }
    Draugr(int health,  std::string name) :m_health(health), m_frostResist(50) {
        setName(std::string(name));
        Draugr(m_health, m_frostResist, name);
    }
    Draugr(double health, int resist, std::string name) :m_health(health), m_frostResist(resist){
        setName(std::string(name));
        std::cout << "Draugr with " << m_health << " health and " << m_frostResist << "% frost resist was born" << std::endl;
//        std::cout << "Draugr "<< m_name << " (" << m_health << " " << "health, " << m_frostResist << "% frost resist) shouts:" << std::endl;
    }
    Draugr(Draugr& other);
    Draugr(Draugr&& other);
    void shoutPhrase(int shoutNumber) const;
    void setName(const std::string&& name);
private:
    double m_health;
    std::string m_name;
    const int m_frostResist;
};
