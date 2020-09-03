#include "bookSaver.h"

static std::string pathBook(std::string book_name) {
    std::string name = book_name;

    return name.insert(0, ("./library/"));
}

static void adds (std::string& book_name, std::map<std::string, std::string>& books) {
    std::ifstream bookFile(pathBook(book_name));
    std::string str;

    if (bookFile.fail())
        throw 2;
    std::getline(bookFile, str, '\0');
    books.insert(std::make_pair(book_name, str));
    std::cout << book_name << " added" << std::endl;
    bookFile.close();
}

static void reads(std::string& book_name, std::map<std::string, std::string>& books) {
    auto it = books.find(book_name);

    if (it == books.end())
        throw 2;
    std::cout << it->second << std::endl;
}

static void list(std::map<std::string, std::string>& books) {
    for (auto& i : books)
        std::cout << i.first << std::endl;
}

static void deletes(std::string& book_name, std::map<std::string, std::string>& books) {
    auto it = books.find(book_name);

    if (it == books.end())
        throw 2;
    books.erase(it);
    std::cout << book_name << " deleted" << std::endl;
}

void routes(std::vector<std::string>& args, std::map<std::string, std::string>& books) {
    if (args[0] == "add" && args.size() == 2)
        adds(args[1], books);
    else if (args[0] == "list" && args.size() == 1)
        list(books);
    else if (args[0] == "read" && args.size() == 2)
        reads( args[1], books);
    else if (args[0] == "delete" && args.size() == 2)
        deletes(args[1], books);
    else if (args[0] == "quit" && args.size() == 1) {
        std::cout << "bye" << std::endl;
        exit(0);
    }
    else
        throw 1;
}

void input_parse(std::string input, std::vector<std::string>& args) {
    size_t pos = 0;

    while ((pos = input.find(' ')) != std::string::npos) {//npos = -1
        if (!input.substr(0, pos).empty())
            args.push_back(input.substr(0, pos));
        input.erase(0, pos + 1);
    }
    if (!input.empty())
        args.push_back(input);
    if (args.size() > 2)
        throw 1;
}
