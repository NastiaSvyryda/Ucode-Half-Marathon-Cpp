#include "castSpells.h"

int castFloatToInt(float number) {
    return static_cast<int>(number);
}

int* castToNonConstIntPtr(const int* ptr) {
    if (ptr)
        return const_cast<int*>(ptr);
    else
        return nullptr;
}