#pragma once
#include <iostream>

template <class Container>
void squareValue(Container& container) {
    for (auto& i : container)
        i *= i;
}
