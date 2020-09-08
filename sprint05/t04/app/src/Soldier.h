#pragma once
#include <iostream>
#include "Weapon.h"

class Soldier {
public:
        Soldier(std::string && name, int health) : m_name(name), m_health(health) {};
        virtual ~Soldier() {
            delete m_weapon;
        };

        void attack(Soldier& other) {
            std::string soldier;

            std::cout << m_name << " attacks " << other.m_name << " and deals " << m_weapon->getDamage() << " damage" <<  std::endl;
            other.m_health -= m_weapon->getDamage();
        }
        void setWeapon(Weapon* weapon) {
            m_weapon = weapon;
        };
        int getHealth() const {
            return m_health;
        };

    private:
        Weapon *m_weapon{nullptr};
        std::string m_name;
        int m_health;
};

class Imperial : public Soldier {
public:
    Imperial(std::string && name, int health) : Soldier(std::string(name), health){
        std::cout << "Soldier " << name << " was created" << std::endl;
        std::cout << "Imperial soldier was created" << std::endl;
    }
    virtual ~Imperial() {
        std::cout << "Imperial soldier was deleted" << std::endl;
        std::cout << "Soldier Martin was deleted" << std::endl;
    };
};
class Stormcloak : public Soldier {
public:
    Stormcloak(std::string && name, int health) : Soldier(std::string(name), health){
        std::cout << "Soldier " << name << " was created" << std::endl;
        std::cout << "Stormcloak soldier was created" << std::endl;
    }
    virtual ~Stormcloak() {
        std::cout << "Stormcloak soldier was deleted" << std::endl;
        std::cout << "Soldier Flynn was deleted" << std::endl;
    };
};
