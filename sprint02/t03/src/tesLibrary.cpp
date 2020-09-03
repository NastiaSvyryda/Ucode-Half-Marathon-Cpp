#include "tesLibrary.h"
void output(std::multimap<std::string, std::string>& multimap) {
    int count;
    std::vector<std::string> names;

    for (auto i : multimap) {
        count = 1;
        if (std::find(names.begin(), names.end(), i.first) == names.end()) {
            std::cout << i.first << ":" << std::endl;
            names.push_back(i.first);
            for (auto j : multimap) {
                if (j.first == i.first) {
                    std::cout << " " << count++ << ": " << j.second << std::endl;
                }
            }
        }
    }
}

void read_file(std::ifstream& file_stream, std::multimap<std::string, std::string>&multimap) {
    std::string str;
    std::smatch match;
    std::regex reg("^\\s*\"([^\"\n]+)\"\\s*:\\s*\"([^\\\"\\n]+)\"\\s*$");
    int count = 1;

    while (std::getline(file_stream, str)) {
        if (!str.empty() && std::regex_match(str, match, reg) != false) {
            multimap.insert(std::pair<std::string, std::string>(match[1], match[2]));
        } else {
            std::cerr << "Line " << count <<  " is invalid" << std::endl;
            file_stream.close();
            exit(1);
        }
            count++;
    }
    output(multimap);
}

void tesLibrary(std::string file) {
    std::ifstream file_stream(file);
    std::multimap<std::string, std::string> multimap;

    if (!file_stream.fail()) {
        read_file(file_stream, multimap);
        file_stream.close();
    }
    else {
        std::cerr << "error" << std::endl;
        exit(1);
    }
}