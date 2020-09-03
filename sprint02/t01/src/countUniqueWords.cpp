#include "countUniqueWords.h"

bool isAlphaNum(std::string word) {
    return find_if(word.begin(), word.end(),
                   [](char c) { return !(isalnum(c) || (c == '\'') || (c == '-')); }) == word.end();
}

void output(std::multiset<std::string>&multiset, std::string& file, std::ifstream& file_stream) {
    std::vector<std::string>res;
    int count = 0;
    auto dot = std::find(file.begin(),file.end(),'.');
    file.replace(dot,dot, "_mod");
    std::ofstream myfile(file);

    for (auto i : multiset) {
        count = 0;
        for (auto j : multiset) {
            if (j == i)
                count++;
        }
        if (std::find(res.begin(), res.end(), i) == res.end()) {
            myfile << i << ": " << count << std::endl;
            res.push_back(i);
        }
    }
    if (multiset.empty() && !myfile.is_open() && myfile.fail()) {
        std::cerr << "error" << std::endl;
        file_stream.close();
        exit(1);
    }
    myfile.close();
}

void read_file(std::ifstream& file_stream, std::multiset<std::string>& multiset, std::string& file) {
    std::string str;
    std::string word;
    std::stringstream str_stream;
    while (std::getline(file_stream, str)) {
        if (!str.empty()) {
            str_stream.str(str);
            while (std::getline(str_stream, word, ' ')) {
                std::size_t found = word.find_first_of(".,?!");
                if (found != std::string::npos)
                    word.erase(found, found);
                if (isAlphaNum(word))
                    multiset.insert(word);
            }
            str_stream.clear();
        }
    }
    output(multiset, file, file_stream);


}

void countUniqueWords(std::string file) {
    std::ifstream file_stream(file);
    std::multiset<std::string>multiset;

    if (!file_stream.fail()) {
        read_file(file_stream, multiset, file);
        file_stream.close();
    }
    else {
        std::cerr << "error" << std::endl;
        exit(1);
    }
}