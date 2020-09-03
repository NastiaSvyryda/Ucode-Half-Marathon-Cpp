#pragma once

#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <algorithm>

struct s_city {
    std::string name;
    int stamina;
    int distance;
};

void fill_cities(std::vector<std::string> args, std::deque<s_city>& cities_info);
void visitAll(std::vector<std::string> args);


