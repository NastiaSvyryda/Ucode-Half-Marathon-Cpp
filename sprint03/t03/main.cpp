#include "sumFileDat.h"

int main() {
    const std::string str = "test.txt";

    std::cout << sumFileData<int>(str) << std::endl;
    return 0;
}
