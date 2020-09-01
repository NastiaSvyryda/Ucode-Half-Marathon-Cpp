#include "inventory.h"

static void input_parse(std::string input, std::vector<std::string>& args) {
    std::string delimiter = " ";
    size_t pos = 0;

    if (!input.empty()) {
        while ((pos = input.find(delimiter)) != std::string::npos) {//npos = -1
            if (!input.substr(0, pos).empty())
                args.push_back(input.substr(0, pos));
            input.erase(0, pos + delimiter.length());
        }
        if (!input.empty())
            args.push_back(input);
        if (args.size() > 2) {
            std::cerr << "Invalid command." << std::endl;
            args.clear();
        }
    }
}

static void show(std::list<std::string>& inventory_list) {
    std::cout << "Inventory {";
    for (auto i = inventory_list.begin(), end = inventory_list.end(); i != end; ++i)
        std::cout << ' ' << *i;
    for (int i = inventory_list.size(); i != 12; ++i)
        std::cout << " -";
    std::cout << " }" << std::endl;
}

static void insert(std::vector<std::string>& args, std::list<std::string>& inventory_list) {
    if (args[1] == "w" || args[1] == "f" || args[1] == "a" || args[1] == "p") {
        if (inventory_list.size() < 12) {
            inventory_list.push_back(args[1]);
            std::cout << args[1] <<" was inserted." << std::endl;
        }
        else
            std::cerr << "Inventory is full." << std::endl;
    }
    else
        std::cerr << "Invalid item." << std::endl;
}

static void remove(std::vector<std::string>& args, std::list<std::string>& inventory_list) {
    int flag = 0;
    for (auto i = inventory_list.begin(), end = inventory_list.end(); i != end; ++i) {
        if (*i == args[1]) {
            flag = 1;
            inventory_list.erase(i);
            std::cout << args[1] <<" was removed." << std::endl;
            break;
        }
    }
    if (flag == 0)
        std::cerr << "Invalid item." << std::endl;
}

static void routes(std::vector<std::string>& args, std::list<std::string>& inventory_list) {
    if (args[0] == "help" && args.size() == 1)
        std::cout << HELP << std::endl;
    else if (args[0] == "show" && args.size() == 1)
        show(inventory_list);
    else if (args[0] == "insert")
        insert( args, inventory_list);
    else if (args[0] == "remove")
        remove(args, inventory_list);
    else if (args[0] == "exit" && args.size() == 1) {
        std::cout << EXIT << std::endl;
        exit(0);
    }
    else
        std::cerr << "Invalid command." << std::endl;
}

void inventory(void) {
    std::string input;
    std::vector<std::string> args;
    std::list<std::string> inventory_list;
    while (1) {
        std::cout << "Enter command:> ";
        getline (std::cin, input, '\n');
        input_parse(input, args);
        if(!args.empty()) {
            routes(args, inventory_list);
            args.clear();
        }
    }
}