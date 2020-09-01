#include "castSpells.h"

//int main() {
//    int a = 6;
//    std::cout << castFloatToInt(2.9);
//    std::cout << castToNonConstIntPtr(&(a));
//    return 0;
//}

int castFloatToInt(float number) {
    return static_cast<int>(number);
}

int* castToNonConstIntPtr(const int* ptr) {
    if (ptr)
        return const_cast<int*>(ptr);
    else
        return nullptr;
}