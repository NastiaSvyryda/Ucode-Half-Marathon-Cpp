#pragma once

#include <fstream>
#include <iterator>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>

template <class T>
T sumFileData(const std::string& fileName) {
    std::ifstream file_stream(fileName);
    T sum = std::accumulate(std::istream_iterator<T>(file_stream), {}, T{0});

    file_stream.close();
    return sum;
}
