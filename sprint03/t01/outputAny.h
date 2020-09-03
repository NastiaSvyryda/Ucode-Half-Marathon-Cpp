#pragma once

template <class Container>
void outputAny(const Container& c) {
    for (auto i : Container)
        std::cout << i << std::endl;
}

