#include <iostream>
#include <vector>
#include "squareValu.h"

int main() {
    std::vector<int> v1 = { 1, 2, 3, 4, 5 };

    squareValue(v1);
    for (auto i1 : v1) {
        // Accessing values at locations pointed by iterator
        std::cout << i1 << "\n";
    }
    return 0;
}
