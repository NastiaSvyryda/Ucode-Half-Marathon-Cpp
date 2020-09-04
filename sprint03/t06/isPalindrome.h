#pragma once
#include <iostream>
#include <algorithm>
#include <iterator>


template <class BidirectionalIterator>
bool isPalindrome(BidirectionalIterator begin, BidirectionalIterator end) {
    return equal(begin, std::next(begin, std::distance(begin,end)/2), std::make_reverse_iterator(end));
}