#include "src/stdAlgoV1.h"

int main(int argc, char **argv) {
    valid(argc);
    std::fstream newfile;
    std::forward_list<std::string> flist;
    Answers answer;

    answer.size = 0;
    answer.containsRich = false;
    answer.noneLengths15 = true;
    answer.allEndVel = true;
    answer.withoutMel = 0;
    newfile.open(argv[1],std::ios::in);
    if (newfile.is_open()) {
        fillFlist(newfile, flist, answer);
        newfile.close(); //close the file object.
        if (flist.empty())
            answer.allEndVel = false;
        else {
            fileProcessing(flist, answer);
        }
        printAnswer(answer);
    }
    else
        std::cerr << "error" << std::endl;
}
