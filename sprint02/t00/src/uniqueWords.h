#pragma once

#include <iostream>
#include <forward_list>
#include <fstream>
#include <string>
#include <algorithm>
#include <set>
#include <sstream>

void valid(int& argc);
std::string newName(char* name_);
void fillSet(std::set<std::string>& wordsSet, char **argv);