#include "dwemerCalculator.h"

static int isNumber(std::string str) {
    int counter = 0;
    for (auto i : str) {
        if (counter == 0 && (i == '-' || i == '+')) {
            i++;
        }
        else if (!std::isdigit(i))
            return false;
        counter++;
    }
    return true;
}

void dwemerCalculator:: findOperands(int& index, std::smatch& match ) {
    int num = 0;
    std::string str;
    for (index = 1; index <= 3; index += 2) {
        if (isNumber(match[index])) {
            try {
                num = std::stoi(match[index]);
            }
            catch(...) {
                throw 1;
            }
            (index == 1) ? this->arg1 = num : this->arg2 = num;
        }
        else {
            str = std::string(match[index]);
            if (str[0] == '-') {
                str.erase(0,1);
                (index == 1) ? this->arg1 = -1 * variable.at(str) : this->arg2 = -1 * variable.at(str);
            }
            else if (str[0] == '+') {
                str.erase(0,1);
                (index == 1) ? this->arg1 = variable.at(str) : this->arg2 = variable.at(str);
            }
            else
                (index == 1) ? this->arg1 = variable.at(str) : this->arg2 = variable.at(str);
            str.clear();
        }
    }
}

void dwemerCalculator::parser(std::smatch& match) {
    int index = 0;
    std::string str;
    std::map<std::string, dwemerCalculator::Operation> operations = {
            {"+", dwemerCalculator::Operation::Add},
            {"-", dwemerCalculator::Operation::Subtract},
            {"*", dwemerCalculator::Operation::Multiply},
            {"/", dwemerCalculator::Operation::Divide}
    };

    try {
        findOperands(index, match);
        executeAction(operations.at(match[2]));
        if (match.size() == 5) {
            str = std::string(match[4]);
            if (str[0] == '-') {
                str.erase(0,1);
                variable.insert({str, -1 * this->result});
            }
            else if (str[0] == '+') {
                str.erase(0,1);
                variable.insert({str, this->result});
            }
            else
                variable.insert({str, this->result});
            str.clear();
        }
    }
    catch (std::out_of_range) { // 0 - input; 1 - operand1; 2 - operand2
        std::cerr << "invalid ";
        (index == 1) ? std::cerr << "operand1\n" : std::cerr <<"operand2\n";
    }
    catch(...) {
        (index == 1) ? std::cerr << "operand1" : std::cerr <<"operand2";
        std::cerr << " is out of range\n";
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
    if (arg2 != 0) {
        this->result = this->arg1 / this->arg2;
        std::cout << this->result << std::endl;
    }
    else {
        std::cerr << "division by zero" << std::endl;
    }
}