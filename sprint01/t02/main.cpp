#include "src/visitAll.h"

int main(int argc, char **argv) {
    if (argc == 1) {
        std::cerr << "usage: ./visitAll [[name,stamina,distance] ...]" << std::endl;
        exit(1);
    }
    std::vector<std::string> args;
    for (int i = 1; i < argc; i++)
        args.push_back(argv[i]);
    visitAll(args);
}

