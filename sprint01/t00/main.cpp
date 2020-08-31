#include "src/simpleSort.h"

int main(int argc, char **argv) {
    std::array<std::string, 5> input_args;
    if (argc != 6) {
        std::cerr << "usage: ./simpleSort arg1 arg2 arg3 arg4 arg5" << std::endl;
        exit(1);
    }
    for (int i = 0; i < 5; i++)
        input_args[i] = static_cast<std::string>(argv[i + 1]);
    std::sort(input_args.begin(), input_args.end());
    for (int i = 0; i < 5; i++) {
        std::cout << input_args[i];
        if (i != 4)
            std::cout << ' ';
    }
    std::cout << std::endl;
    return 0;
}
