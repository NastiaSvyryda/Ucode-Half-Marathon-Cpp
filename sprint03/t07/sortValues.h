#pragma once
#include <iostream>
#include <algorithm>

template <class RandomAccessIterator>
RandomAccessIterator sortValues(RandomAccessIterator begin, RandomAccessIterator end){
    if (end <= begin)
        return begin;
    RandomAccessIterator pivot = begin, middle = begin + 1;
    for (RandomAccessIterator i = begin + 1; i < end; ++i) {
        if (*i < *pivot) {
            std::iter_swap(i, middle);
            ++middle;
        }
    }
    std::iter_swap(begin, middle - 1);
    sortValues(begin, middle - 1);
    sortValues(middle, end);
    return begin;
}
