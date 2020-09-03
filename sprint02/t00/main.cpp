#include "src/uniqueWords.h"

int main(int argc, char **argv) {
    valid(argc);
    std::set<std::string> wordsSet;

    try {
        fillSet(wordsSet,argv);
        if (wordsSet.empty())
            throw 1;
        std::ofstream outfile (newName(argv[1]));
        for(auto i : wordsSet) {
            outfile << i << std::endl;
        }
        outfile.close();
    }
    catch(...) {
        std::cerr << "error" << std::endl;
    }
}

