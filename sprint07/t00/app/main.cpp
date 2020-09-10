#include <iostream>
#include <string>

#include "CBLVector.h"
#include <vector>
#include "algorithmUtils.h"

int main() {
    CBL::Vector<int> v;
    std::vector<int> a;

    std::cout << "Vector size : "
              << v.size() << "  " << a.size() << std::endl;
    std::cout << "Vector capacity : "
              << v.capacity() << "  " << a.capacity() << std::endl;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(10);
    v.push_back(20);
    v.push_back(10);

    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(40);
    a.push_back(50);
    a.push_back(10);
    a.push_back(20);
    a.push_back(10);

    std::cout << "Vector size : "
         << v.size() << "  " << a.size() << std::endl;
    std::cout << "Vector capacity : "
         << v.capacity() << "  " << a.capacity() << std::endl;

    std::cout << "Vector elements : ";
    int y = 0;
    for (auto i : v) {
        std::cout << i << " - " << a[y++] << "\n";
    }
    std::cout << std::endl;

    v.push_back(100);
    v.push_back(100);
    v.push_back(100);
    v.push_back(100);
    v.push_back(100);
    v.push_back(100);
    v.push_back(100);
    v.push_back(100);
    v.push_back(100);
    a.push_back(100);
    a.push_back(100);
    a.push_back(100);
    a.push_back(100);
    a.push_back(100);
    a.push_back(100);
    a.push_back(100);
    a.push_back(100);
    a.push_back(100);


    std::cout << "\nAfter updating"
         << std::endl;
    std::cout << "Vector size : "
              << v.size() << "  " << a.size() << std::endl;
    std::cout << "Vector capacity : "
              << v.capacity() << "  " << a.capacity() << std::endl;

    std::cout << "Vector elements : ";
    y = 0;
    for (auto i : v) {
        std::cout << i << " - " << a[y++] << "\n";
    }
    std::cout << std::endl;

    v.pop_back();
    a.pop_back();

    std::cout << "\nAfter deleting last element"
         << std::endl;

    std::cout << "Vector size : "
              << v.size() << "  " << a.size() << std::endl;
    std::cout << "Vector capacity : "
              << v.capacity() << "  " << a.capacity() << std::endl;

    std::cout << "Vector elements : ";
    y = 0;
    for (auto i : v) {
        std::cout << i << " - " << a[y++] << "\n";
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    return 0;
}
