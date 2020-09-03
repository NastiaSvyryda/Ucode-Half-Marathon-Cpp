#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <list>
#include <unistd.h>
#include <fstream>
#include <forward_list>
#include <set>
#include <regex>
#include <map>

void read_file(std::ifstream& file_stream,  std::multimap<std::string, std::string>& multimap);
void output(std::multimap<std::string, std::string>& multimap);
void tesLibrary(std::string file);