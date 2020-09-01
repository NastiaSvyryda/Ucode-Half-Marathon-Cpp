#include "visitAll.h"

static void is_string(std::string& str) {
    for (int i = 0; i < str.size(); i++)
        if (std::isalpha(str[i]) == 0 && std::isspace(str[i]) == 0)
            throw 1;
}

static void is_number(std::string& str) {
    for (int i = 0; i < str.size(); i++)
        if (std::isdigit(str[i]) == 0)
            throw 1;
}

static void parse_city(std::vector<std::string>& city_args) {
    if (city_args.size() != 3)
        throw 1;
    is_string(city_args[0]);
    is_number(city_args[1]);
    is_number(city_args[2]);
}

static s_city create_city(std::vector<std::string>& city_args) {
    s_city city;

    city.name = city_args[0];
    city.stamina = std::stoi(city_args[1]);
    city.distance = std::stoi(city_args[2]);
    return city;
}

void fill_cities(std::vector<std::string> args, std::deque<s_city>& cities_info) {
    std::vector<std::string> city_args;
    std::string delimiter = ",";
    std::string temp;
    size_t pos = 0;

    for (int i = 0; i < args.size(); i++) {
        temp = args[i];
        try {
            while ((pos = temp.find(delimiter)) != -1) {
                if (temp.substr(0, pos).empty())
                    throw 1;
                city_args.push_back(temp.substr(0, pos));
                temp.erase(0, pos + delimiter.length());
            }
            if (temp.empty())
                throw 1;
            city_args.push_back(temp);
            parse_city(city_args);
        }
        catch(...) {
            std::cerr << "Argument " << args[i] << " is not valid" << std::endl;
            city_args.clear();
            exit(1);
        }
        cities_info.push_back(create_city(city_args));
        city_args.clear();
        temp.clear();
    }
}
