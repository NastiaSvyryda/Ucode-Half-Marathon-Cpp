#include <iostream>
#include <vector>
#include "sortValues.h"
int main(){
    std::vector<int> arr = {10, 7, 8, 9, 1, 5};

    printf("Sorted array: ");
    sortValues(arr.begin(), arr.end());
    for (auto i : arr)
        std::cout << i << " ";
    return 0;
}
