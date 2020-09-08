#include "Draugr.h"

//Draugr::Draugr() :m_health(100), m_frostResist(50){
//    std::cout << "Draugr (" << m_health << " " << "health, " << m_frostResist << "% frost resist) shouts:" << std::endl;
//}

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

void copyDraugr(char** argv, int shout, std::string name1, std::string name2) {
    double health = 0;
    int resist = 0;
    auto index = 0ul;

    health = std::stod(argv[3], &index);
    if (argv[3][index] != '\0')
        throw std::exception();
    Draugr draugr1(health, name1);
    draugr1.shoutPhrase(shout);
    Draugr draugr2 = draugr1;
    draugr2.setName(std::string(name2));
    draugr2.shoutPhrase(shout);
}

void moveDraugr(char** argv, int shout, std::string name1, std::string name2) {
    double health = 0;
    int resist = 0;
    auto index = 0ul;

    health = std::stod(argv[3], &index);
    if (argv[3][index] != '\0')
        throw std::exception();
    resist = std::stoi(argv[4], &index);
    if (argv[4][index] != '\0')
        throw std::exception();
    Draugr draugr1 = Draugr(health, resist, name1);
    draugr1.shoutPhrase(shout);
    Draugr draugr2 = std::move(draugr1);
    draugr2.setName(std::string(name2));
    draugr2.shoutPhrase(shout);
}

void splitName(std::string &name1, std::string &name2, std::string argv) {
    std::regex namesRegex("^(\\w+),(\\w+)$");
    std::smatch match;

    if (std::regex_match(argv, match, namesRegex)) {
        name1 = match[1];
        name2 = match[2];
    } else {
        std::cerr << "Invalid names\n";
        exit(1);
    }
}

Draugr::Draugr(Draugr& other) :Draugr(other.m_health, other.m_frostResist, other.m_name) {
    std::cout << "Copy constructor was called" << std::endl;
}
Draugr::Draugr(Draugr&& other) :Draugr(other.m_health, other.m_frostResist, other.m_name) {

    std::cout << "Move constructor was called" << std::endl;
}
