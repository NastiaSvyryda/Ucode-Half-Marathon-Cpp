#include "moveAlong.h"

void moveAlong(char **argv) {
    std::vector<std::string> words;
    std::string str;

    for (int i =0; argv[i] != nullptr; i++) {
        str = argv[i];
        std::transform(str.begin(), str.end(), str.begin(),
                       [](unsigned char c){ return std::tolower(c); });
        if (str.find("mercer") != std::string::npos || str.find( "emer") != std::string::npos
            || str.find( "jim") != std::string::npos) {
            words.push_back(str);
            std::cout << argv[i] << ", move along!" << std::endl;
        }
        str.clear();
    }
    words.clear();
}