#include "uniqueWords.h"

bool isAlphaNum(std::string word) {
    return find_if(word.begin(), word.end(),
                       [](char c) { return !(isalnum(c)
                       || (c == '\'') || (c == '-')); }) == word.end();
}

void fillSet(std::set<std::string>& wordsSet, char **argv) {
    std::ifstream newfile(argv[1]);
    std::stringstream stringStream;
    std::string str;
    std::string word;

    if (newfile.fail())
        throw 1;
    while(std::getline(newfile, str)) {
        if (!str.empty()) {
            stringStream.str(str);
            while(std::getline(stringStream, word, ' ')) {
                auto find = word.find_first_of(",.?!");
                if (find != std::string::npos)
                    word.erase(find, find);
                if (isAlphaNum(word))
                    wordsSet.insert(word);
            }
            stringStream.clear();
        }
    }
    newfile.close();
}

void valid(int& argc) {
    if (argc != 2) {
        std::cerr << "usage: ./uniqueWords [file_name]" << std::endl;
        exit(1);
    }
}

std::string newName(char* name_) {
    std::string name = static_cast<std::string>(name_);
    auto index = std::find(name.begin(),name.end(),'.');

    name.replace(index, index, "_mod");
    return name;
}