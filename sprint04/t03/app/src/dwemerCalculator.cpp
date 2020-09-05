#include "dwemerCalculator.h"

static int isNumber(std::string str) {
    for (auto i : str) {
        if (!std::isdigit(i))
            return false;
    }
    return true;
}

static std::string findOperation(std::string match) {
    if (match.size() == 1)
        return match;
    if (match == "++" || match == "--")
        return std::string("+");
    else
        return std::string("-");
}

void dwemerCalculator:: findOperands(int& index, std::smatch& match ) {
    for (index = 1; index <= 3; index += 2) {
        if (match[index] > "2147483647")
            throw 1;
        if (isNumber(match[index]))
            (index == 1) ? this->arg1 = std::stoi(match[index]) : this->arg2 = std::stoi(match[index]);
        else
            (index == 1) ? this->arg1 = variable.at(match[index]) : this->arg2 = variable.at(match[index]);
    }
}
void dwemerCalculator::parser(std::smatch& match) {
    int index = 0;
    std::map<std::string, dwemerCalculator::Operation> operations = {
            {"+", dwemerCalculator::Operation::Add},
            {"-", dwemerCalculator::Operation::Subtract},
            {"*", dwemerCalculator::Operation::Multiply},
            {"/", dwemerCalculator::Operation::Divide}
    };
    try {
        findOperands(index, match);
        executeAction(operations.at(findOperation(match[2])));
        if (match.size() == 5) {
            variable.insert({match[4], this->result});
        }
    }
    catch (std::out_of_range) { // 0 - input; 1 - operand1; 2 - operand2
        std::cerr << "invalid ";
        (index == 1) ? std::cerr << "operand1\n" : std::cerr <<"operand2\n";
    }
    catch(...) {
        (index == 1) ? std::cerr << "operand1 " : std::cerr <<"operand2";
        std::cerr << "is out of range\n";
    }
}
void dwemerCalculator::executeAction(const dwemerCalculator::Operation operation) {
    std::map<dwemerCalculator::Operation, void(dwemerCalculator::*)()> func;
            func.insert({dwemerCalculator::Operation::Add, &dwemerCalculator::Add});
            func.insert({dwemerCalculator::Operation::Subtract, &dwemerCalculator::Subtract});
            func.insert({dwemerCalculator::Operation::Multiply, &dwemerCalculator::Multiply});
            func.insert({dwemerCalculator::Operation::Divide, &dwemerCalculator::Divide});
    (this->*func.at(operation))();
}
void dwemerCalculator::Add(){
    this->result = this->arg1 + this->arg2;
    std::cout << this->result << std::endl;

}
void dwemerCalculator::Subtract(){
    this->result = this->arg1 - this->arg2;
    std::cout << this->result << std::endl;
}
void dwemerCalculator::Multiply(){
    this->result = this->arg1 * this->arg2;
    std::cout << this->result << std::endl;
}
void dwemerCalculator::Divide(){
    this->result = this->arg1 / this->arg2;
    std::cout << this->result << std::endl;
}