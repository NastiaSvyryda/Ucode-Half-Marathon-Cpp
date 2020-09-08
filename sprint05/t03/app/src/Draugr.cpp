#include "Draugr.h"

void Draugr::shoutPhrase(int shoutNumber) const {
    std::map<int, std::string>il{
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
    std::cout << "Draugr "<< m_name << " (" << m_health << " " << "health, " << m_frostResist << "% frost resist) shouts:" << std::endl;
    std::cout << il.at(shoutNumber) << std::endl;
}

void Draugr::setName(const std::string&& name){
    m_name = name;
}