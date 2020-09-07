#pragma once
#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <regex>
class dwemerCalculator final {
public:
    int arg1;
    int arg2;
    int result;
    std::map<std::string, int> variable;
    enum class Operation {
        Add,
        Subtract,
        Multiply,
        Divide
    };
    void parser(std::smatch& match);
    void executeAction(const Operation operation);
    void findOperands(int& index, std::smatch& match);

private:
    void Add();
    void Subtract();
    void Multiply();
    void Divide();
};