#include "Draugr.h"

static void checkPhrase(std::string str, int& phrase) {
    size_t idx;
    try {
        phrase = std::stoi(str, &idx);
        if (phrase < 0 || phrase > 8 || str[idx] != '\0')
            throw 1;
    }
    catch (...) {
        throw 1;
    }
}

void executeDraugr(int args, char **argv) {
    int phrase = 0;
    size_t idx;
    double health = HEALTH;
    int resist = RESIST;

    checkPhrase(std::string(argv[1]), phrase);
    if (args == 1) {
        Draugr dr = Draugr();
        dr.shoutPhrase(phrase);
    }
    else if (args > 1) {
        health = std::stod(std::string(argv[2]), &idx);
        if (std::string(argv[2])[idx] != '\0')
            throw std::exception();
        if (args == 3) {
            resist = std::stoi(std::string(argv[3]), &idx);
            if (std::string(argv[3])[idx] != '\0')
                throw std::exception();
        }
        Draugr dr = Draugr(health, resist);
        dr.shoutPhrase(phrase);
        if (args == 2) {
            Draugr dr_2 = Draugr(health);
            dr_2.shoutPhrase(phrase);
        }
    }
}

void Draugr::shoutPhrase(int shoutNumber) const{
    std::map<int, std::string> phrase = {
            {0, "Qiilaan Us Dilon!"},
            {1, "Bolog Aaz, Mal Lir!"},
            {2, "Kren Sosaal!"},
            {3, "Dir Volaan!"},
            {4, "Aar Vin Ok!"},
            {5, "Unslaad Krosis!"},
            {6, "Faaz! Paak! Dinok!"},
            {7, "Aav Dilon!"},
            {8, "Sovngarde Saraan!"}
    };
    std::cout << phrase.at(shoutNumber) << std::endl;
}

Draugr::Draugr() : m_health(HEALTH), m_frostResist(RESIST) {
    Draugr(m_health, m_frostResist);
}

Draugr::Draugr(int frostResist) : m_health(HEALTH), m_frostResist(frostResist) {
    Draugr(m_health, m_frostResist);
}

Draugr::Draugr(double health, int frostResist) : m_health(health), m_frostResist(frostResist) {
    std::cout << "Draugr with " << health << " health and " << frostResist << "% frost resist was born!" << std::endl;
    std::cout << "Draugr ("<< health <<" health, "<< frostResist <<"% frost resist) shouts:" << std::endl;
}