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

void countUniqueWords(std::string file);
void read_file(std::ifstream& file_stream, std::multiset<std::string>&multiset, std::string& file);
bool isAlphaNum(std::string word);
void output(std::multiset<std::string>&multiset, std::string& file, std::ifstream& file_stream);