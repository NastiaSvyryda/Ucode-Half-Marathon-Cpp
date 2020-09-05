#include "src/dragonborn.h"

int main(int argc, char **argv){
    if (argc != 2) {
        std::cerr << "usage: ./dragonborn [action]" << std::endl;
        exit(1);
    }
    Dragonborn dragon;
    std::map<std::string, Dragonborn::Actions> function = {
            {"shout", Dragonborn::Actions::Shout},
            {"magic", Dragonborn::Actions::Magic},
            {"weapon", Dragonborn::Actions::Weapon}
    };
    try {
        dragon.executeAction(function.at(argv[1]));
    } catch (...) {
        std::cerr << "Invalid action\n";
        exit(1);
    }
}

