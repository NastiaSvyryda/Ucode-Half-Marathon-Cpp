#include "Draugr.h"

int main(int argc, char **argv){
    if (argc < 2 || argc > 4) {
        std::cerr << "usage: ./draugr [shoutNumber] [health] [frostResist]" << std::endl;
        return 1;
    }
    try {
        executeDraugr(argc - 1, argv);
    }
    catch (int a) {
        std::cerr << "Invalid shoutNumber" << std::endl;
        return 1;
    }
    catch(...) {
        std::cerr << "Error" << std::endl;
        return 1;
    }
    return 0;
}

