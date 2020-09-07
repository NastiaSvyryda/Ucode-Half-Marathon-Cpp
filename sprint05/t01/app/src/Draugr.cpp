#include "Draugr.h"

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

Draugr::Draugr() : m_health(100), m_frostResist(50) {
    std::cout << "Draugr (100 health, 50% frost resist) shouts:" << std::endl;
}

Draugr::Draugr(int frostResist) : m_frostResist(frostResist) {
    //std::cout << "Draugr (100 health, 50% frost resist) shouts:" << std::endl;
}

Draugr::Draugr(double health, int frostResist) : m_health(health), m_frostResist(frostResist) {
    std::cout << "Draugr with " << health << " health and " << frostResist << "% frost resist was born!" << std::endl;
}