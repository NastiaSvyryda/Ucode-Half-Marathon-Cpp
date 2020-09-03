#pragma once

#include <iostream>
#include <forward_list>
#include <fstream>
#include <string>
#include <algorithm>

void fillFlist(std::fstream& newfile, std::forward_list<std::string>& flist);
void valid(int& argc);
void modifyList(std::forward_list<std::string>& flist);
std::string newName(char* name_);