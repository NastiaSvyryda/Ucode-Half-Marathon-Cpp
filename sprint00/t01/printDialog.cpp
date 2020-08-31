#include "printDialog.h"

int main() {
    std::string name = "Guard" ;
    std::string sentence = "I used to be an adventurer like you. Then I took an arrow in the knee..." ;
    printDialog(name, sentence);
    return 0;
}

void printDialog(const std::string& name, const std::string& sentence) {
    std::cout << name << " says: \"" << sentence << "\"" <<std::endl;
}