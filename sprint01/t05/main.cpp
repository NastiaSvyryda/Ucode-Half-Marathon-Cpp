#include "src/stdAlgoV2.h"

int main(int argc, char **argv) {
    valid(argc);
    std::fstream newfile;
    std::forward_list<std::string> flist;

    try {
        newfile.open(argv[1], std::ios::in);
        if (!newfile.is_open())
            throw 1;
        fillFlist(newfile, flist);
        newfile.close(); //close the file object.
        if (flist.empty())
            throw 1;
        modifyList(flist);
        std::ofstream outfile (newName(argv[1]));//create new name
        for(auto i : flist) {
            outfile << i << std::endl;
        }
        outfile.close();
    }
    catch(...) {
        std::cerr << "error" << std::endl;
    }
}
