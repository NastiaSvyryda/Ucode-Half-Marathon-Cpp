#include "src/bookSaver.h"

int main() {
    std::string input;
    std::vector<std::string> args;
    std::map<std::string, std::string> books;

    while (1) {
        try {
            std::cout << "enter command:> ";
            std::getline(std::cin, input, '\n');
            if (!input.empty()) {
                input_parse(input, args);
                if (!args.empty()) {
                    routes(args, books);
                    args.clear();
                }
                input.clear();
            }
        }
        catch (int a) {
            args.clear();
            if (a == 1)
                std::cerr << "invalid command" << std::endl;
            if (a == 2)
                std::cerr << "invalid book" << std::endl;
        }
    }
}