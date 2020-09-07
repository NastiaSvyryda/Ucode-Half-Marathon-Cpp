#include "src/dwemerCalculator.h"



int main(){
    dwemerCalculator calc;
    std::string input_str;
    std::smatch match;
    std::regex regex("^[[:blank:]]*([\\+\\-]{0,1}[a-zA-Z0-9]+)[[:blank:]]*([\\+\\-\\*\\/]{1})[[:blank:]]*([\\+\\-]{0,1}[a-zA-Z0-9]+)[[:blank:]]*$");
    std::regex regex_var("^[[:blank:]]*([\\+\\-]{0,1}[a-zA-Z0-9]+)[[:blank:]]*([\\+\\-\\*\\/]{1})[[:blank:]]*([\\+\\-]{0,1}[a-zA-Z0-9]+)[[:blank:]]*\\=[[:blank:]]*([\\+\\-]{0,1}[a-zA-Z0-9]+)[[:blank:]]*$");
    while (1) {
        std::cout << ":>";
        std::getline(std::cin, input_str, '\n');
        if (!input_str.empty() && (std::regex_match(input_str, match, regex) != false
            || std::regex_match(input_str, match, regex_var) != false)) {
            calc.parser(match);
        }
        else if (input_str == "quit")
            exit(0);
        else
            std::cerr << "invalid input" << std::endl;
    }
}

