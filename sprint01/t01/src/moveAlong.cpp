#include "moveAlong.h"

bool findStringIC(const std::string & strHaystack, const std::string & strNeedle)
{
    auto it = std::search(
            strHaystack.begin(), strHaystack.end(),
            strNeedle.begin(),   strNeedle.end(),
            [](char ch1, char ch2) { return std::toupper(ch1) == std::toupper(ch2); }
    );
    return (it != strHaystack.end() );
}

void moveAlong(char **argv) {
    std::vector<std::string> words;

    for (int i =0; argv[i] != nullptr; i++) {
        std::string str = argv[i];
        if (findStringIC(str, "mercer") || findStringIC(str, "emer") || findStringIC(str, "jim")) {
            words.push_back(str);
            //std::cout << str << ", move along!" << std::endl;
        }
        str.clear();
    }
    for (int i = 0; i < words.size(); i++)
        std::cout << words[i] << ", move along!" << std::endl;
}