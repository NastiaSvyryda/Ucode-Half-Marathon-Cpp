#include "src/Draugr.h"



int main(int argc, char **argv) {
    int shout = 0;
    auto index = 0ul;
    std::regex reg("^(\\w+),(\\w+)$");
    std::smatch match;
    std::string name1;
    std::string name2;

    if (argc < 4 || argc > 5) {
        std::cerr << "usage: ./draugr [shoutNumber] [name1,name2] [health] [frostResist]" << std::endl;
        exit(1);
    }
    splitName(name1, name2, argv[2]);
    try {
        try {
            shout = std::stoi(argv[1], &index);
        }
        catch (...) {
            throw 2;
        }
        if (shout < 0 || shout > 8 ||argv[1][index] != '\0')
            throw 1;
        if (argc == 4)
            copyDraugr(argv, shout, name1, name2);
        if (argc == 5)
            moveDraugr(argv, shout, name1, name2);
    }
    catch (int a) {
        std::cerr << "Invalid shoutNumber" << std::endl;
    }
    catch (...) {
        std::cerr << "Error" << std::endl;
    }
    return 0;
}