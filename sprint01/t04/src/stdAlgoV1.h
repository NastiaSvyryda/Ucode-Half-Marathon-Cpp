#pragma once
#include<iostream>
#include<forward_list>
#include <fstream>
#include <fstream>
#include <string>
#include <algorithm>

struct Answers {
    int size;
    bool containsRich;
    bool noneLengths15;
    bool allEndVel;
    int withoutMel;
};

void fillFlist(std::fstream& newfile, std::forward_list<std::string>& flist, Answers& answer);
void valid(int& argc);
void fileProcessing(std::forward_list<std::string>& flist, Answers& answer);
std::string boolStr(bool var);
void printAnswer(Answers& answer);
