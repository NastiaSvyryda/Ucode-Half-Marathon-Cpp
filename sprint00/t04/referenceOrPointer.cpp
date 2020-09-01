#include "referenceOrPointer.h"

//int main() {
//    int a = 5;
//    multiplyByPointer(&(a), 2);
//    std::cout << a << std::endl;
//    multiplyByReference(a, 3);
//    std::cout << a << std::endl;
//    return 0;
//}

void multiplyByPointer(int* ptr, int mult) {
    if (ptr && *ptr)
        *ptr *= mult;
}

void multiplyByReference(int& ref, int mult) {
    ref *= mult;
}
