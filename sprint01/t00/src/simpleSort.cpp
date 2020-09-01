#include "simpleSort.h"

void simpleSort(char **argv) {
    std::array<std::string, 5> input_args;

    for (int i = 0; i < 5; i++)
        input_args[i] = static_cast<std::string>(argv[i + 1]);
    std::sort(input_args.begin(), input_args.end());
    for (int i = 0; i < 5; i++) {
        if (i == 4)
            std::cout << input_args[i] << std::endl;
        else
            std::cout << input_args[i] << ' ';
    }
}