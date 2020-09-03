#include "src/countUniqueWords.h"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "usage: ./countUniqueWords [file_name]" << std::endl;
        exit(1);
    }
    countUniqueWords(static_cast<std::string>(argv[1]));
    return 0;
}
