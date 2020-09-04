#include <iostream>
#include <vector>
#include <list>
#include "isPalindrome.h"

int main() {
    std::list<std::string> tests = {
            "god saw I was dog", "dennis sinned", "This isn't palindrome"
    };
    std::list<int> list = {1,2,3,2,1};
    std::cout << isPalindrome(list.begin(), list.end()) << std::endl;
    for (auto i : tests)
        std::cout << i << ' ' << isPalindrome(i.begin(), i.end()) << std::endl;
    return 0;
}
