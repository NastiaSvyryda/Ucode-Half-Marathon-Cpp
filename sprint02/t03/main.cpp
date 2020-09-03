#include "src/tesLibrary.h"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "usage: ./tesLibrary [file_name]" << std::endl;
        exit(1);
    }
    tesLibrary(static_cast<std::string>(argv[1]));
    return 0;
}
