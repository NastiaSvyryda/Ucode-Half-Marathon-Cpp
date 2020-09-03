#include "stdAlgoV1.h"

void fillFlist(std::fstream& newfile, std::forward_list<std::string>& flist, Answers& answer) {
    std::string tp;

    while(getline(newfile, tp)) { //read data
        if (!tp.empty()) {
            flist.push_front(tp);
            answer.size++;
        }
    }
}

void valid(int& argc) {
    if (argc != 2) {
        std::cerr << "usage: ./stdAlgoV1 [file_name]" << std::endl;
        exit(1);
    }
}

void printAnswer(Answers& answer) {
    std::cout << "size: " << answer.size << std::endl;
    std::cout << "contains 'rich': " << boolStr(answer.containsRich) << std::endl;
    std::cout << "none of lengths is 15: " << boolStr(answer.noneLengths15) << std::endl;
    std::cout << "all end with 'vel': " << boolStr(answer.allEndVel) << std::endl;
    std::cout << "without 'mel': " << answer.withoutMel << std::endl;
}

std::string boolStr(bool var) {
    if (var)
        return "true";
    else
        return "false";
}

void fileProcessing(std::forward_list<std::string>& flist, Answers& answer) {
    for(auto i : flist) {
        if (i.find("rich") != std::string::npos)
            answer.containsRich = true;
        if (i.size() == 15)
            answer.noneLengths15 = false;
        if ((i.find("vel") + 3) == i.size())
            answer.allEndVel = false;
        if (i.find("mel") == std::string::npos)
            answer.withoutMel++;
    }
}
