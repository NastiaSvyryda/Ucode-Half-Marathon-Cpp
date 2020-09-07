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
    std::string shout = phrase.at(shoutNumber);
    std::cout << "Draugr (100 health, 50% frost resist) shouts:" << std::endl;
    std::cout << shout << std::endl;
}