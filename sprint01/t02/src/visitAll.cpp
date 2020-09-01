#include "visitAll.h"

static int find_start(std::deque<s_city>& cities_info) {
    int stamina = 0;

    for (int i = 0; i < cities_info.size(); i++) {
        if (cities_info[i].stamina >= cities_info[i].distance) {
            stamina = 0;
            for (int y = i, k = 0; k < cities_info.size(); y++, k++) {
                if (y == cities_info.size())
                    y = 0;
                stamina += cities_info[y].stamina - cities_info[y].distance;
                if (stamina < 0)
                    break;
            }
            if(stamina >= 0)
                return i;
        }
    }
    return -1;
}

void visitAll(std::vector<std::string> args) {
    std::deque<s_city> cities_info;
    int start = -1;

    fill_cities(args, cities_info);
//    for (int i = 0; i < cities_info.size(); i++) {
//        std::cout << cities_info[i].name << " " << cities_info[i].stamina << " " <<cities_info[i].distance << std::endl;
//    }
    start = find_start(cities_info);
    if (start != -1) {
        for (int y = start, k = 0; k < cities_info.size(); y++, k++) {
            if (y == cities_info.size())
                y = 0;
            std::cout << y << ". " << cities_info[y].name << std::endl;
        }
    }
    else
        std::cerr << "Mission: Impossible" << std::endl;
}
