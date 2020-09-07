#include "src/Draugr.h"

int main(int argc, char **argv){
    int phrase = 0;
    size_t idx;
    Draugr dr = Draugr();

    if (argc != 2) {
        std::cerr << "usage: ./draugr [shoutNumber]" << std::endl;
        return 1;
    }
    try {
        phrase = std::stoi(std::string(argv[1]), &idx);
        if (std::string(argv[1])[idx] != '\0')
            throw 1;
        dr.shoutPhrase(phrase);
    }
    catch (...) {
        std::cerr << "Invalid shoutNumber" << std::endl;
        return 1;
    }
    return 0;
}

