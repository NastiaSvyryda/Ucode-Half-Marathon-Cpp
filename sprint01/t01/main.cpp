#include "src/moveAlong.h"

int main(int argc, char **argv) {
    if (argc == 1) {
        std::cerr << "usage: ./moveAlong [args]" << std::endl;
        exit(1);
    }
    moveAlong(argv);
    return 0;
}

