#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>
#include <map>
#include <vector>
#include <iterator>
#include <stdlib.h>

void input_parse(std::string input, std::vector<std::string>& args);
void routes(std::vector<std::string>& args, std::map<std::string, std::string>& books);
