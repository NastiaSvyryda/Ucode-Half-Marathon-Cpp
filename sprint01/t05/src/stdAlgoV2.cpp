#include "stdAlgoV2.h"

std::string newName(char* name_) {
    std::string name = static_cast<std::string>(name_);
    auto index = std::find(name.begin(),name.end(),'.');

    name.replace(index, index, "_mod");
    return name;
}

bool hasCbl(std::string& str) {
    return str.find_first_of("cbl") != std::string::npos;
}

void modifyList(std::forward_list<std::string>& flist) {
    flist.remove_if (hasCbl);
    for(auto& i : flist) {
        if (i.size() > 10)
            i = "Long one";
        else if (i.size() < 4)
            i = "Short one";
    }
    flist.unique();
    flist.sort();
    flist.reverse();
}

void valid(int& argc) {
    if (argc != 2) {
        std::cerr << "usage: ./stdAlgoV2 [file_name]" << std::endl;
        exit(1);
    }
}

void fillFlist(std::fstream& newfile, std::forward_list<std::string>& flist) {
    std::string tp;

    while(getline(newfile, tp)) {
        if (!tp.empty()) {
            flist.push_front(tp);
        }
    }
}