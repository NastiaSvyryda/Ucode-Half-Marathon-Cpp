#include <iostream>
#include <string>

static void check(char *value, size_t idx) {
    if (value[idx] != '\0')
        throw 1;
}

static void parse_argv(char **argv) {
    auto index = 2;
    auto idx = 0ul;

    try {
        std::stoi(argv[index], &idx);
        check(argv[index], idx);
        std::stof(argv[++index], &idx);
        check(argv[index], idx);
        std::stod(argv[++index], &idx);
        check(argv[index], idx);
    }
    catch(...) {
        std::cerr << "Invalid argument: " << argv[index] << std::endl;
        exit(1);
    }
}

int main(int argc, char **argv) {
    if (argc != 5) {
        std::cerr << "usage:./automaton [name] [level] [health] [stamina]" << std::endl;
        return 1;
    }
    parse_argv(argv);
    std::cout << "Name = " << argv[1] << std::endl;
    std::cout << "Level = " << argv[2] << std::endl;
    std::cout << "Health = " << argv[3] << std::endl;
    std::cout << "Stamina = " << argv[4] << std::endl;
    return 0;
}
