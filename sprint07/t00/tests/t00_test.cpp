#include <iostream>
#include <string>
#include <cassert>
#include <vector>

#include "CBLVector.h"
#include "algorithmUtils.h"

template <typename T>
std::ostream& operator<<(std::ostream& os, const CBL::Vector<T>& v) {
    for (size_t i = 0; i < v.size(); ++i)
        os << v[i] << " ";

    os << std::endl;

    return os;
}

int main() {
    CBL::Vector<int> v1;
    std::cout << "V1 size, capacity: " << v1.size() << ", " << v1.capacity() << std::endl;
    std::cout << v1 << std::endl;

    std::cout << std::endl;

    CBL::Vector<int> v2(5);
    std::cout << "V2 size, capacity: " << v2.size() << ", " << v2.capacity() << std::endl;
    std::cout << v2 << std::endl;

    std::cout << std::endl;

    CBL::Vector<int> v3(5, 23);
    std::cout << "V3 size, capacity: " << v3.size() << ", " << v3.capacity() << std::endl;
    std::cout << v3 << std::endl;

    std::cout << std::endl;

    CBL::Vector<int> v4 = {15, 24, 23, 0, -10, 59, 34, 67, 11};
    std::vector<int> stdv4 = {15, 24, 23, 0, -10, 59, 34, 67, 11};
    std::cout << "V4 size, capacity: " << v4.size() << ", " << v4.capacity() << std::endl;
    std::cout << v4 << std::endl;

    assert(std::equal(v4.begin(), v4.end(), stdv4.begin(), stdv4.end()));
    assert(v4.capacity() == stdv4.capacity());
    assert(v4.size() == stdv4.size());

    CBL::Vector<int> v5(v4.begin(), v4.end());
    std::cout << "V5 size, capacity: " << v5.size() << ", " << v5.capacity() << std::endl;
    std::cout << v5 << std::endl;

    std::cout << std::endl;

    CBL::Vector<int> v6(v5);
    std::cout << "V6 size, capacity: " << v6.size() << ", " << v6.capacity() << std::endl;
    std::cout << v6 << std::endl;

    std::cout << std::endl;

    CBL::Vector<int> v7 = v6;
    std::cout << "V7 size, capacity: " << v7.size() << ", " << v7.capacity() << std::endl;
    std::cout << v7 << std::endl;

    std::cout << std::endl;

    assert(v6 == v5);
    assert(v7 == v4);
    assert(v3 != v5);

    CBL::Vector<int> v8 = {1, 2, 3};
    CBL::Vector<int> v9 = {4, 5, 6};
    CBL::Vector<int> v10 = {1, 2, 3};
    assert(v8 < v9);
    assert(v8 <= v9);
    assert(v8 <= v10);
    assert(v9 > v8);
    assert(v9 >= v8);
    assert(v8 >= v10);

    for (auto it = v10.begin(); it != v10.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    for (auto i : v9)
        std::cout << i << " ";
    std::cout << std::endl;

    std::cout << std::endl;

    assert(v4.at(5) == 59);

    try {
        v4.at(17);
    }
    catch (std::out_of_range &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    CBL::Vector<std::string> v11 = {"fdkl;saf", "fjalf", "djkaff", "daklf"};
    std::vector<std::string> stdv11 = {"fdkl;saf", "fjalf", "djkaff", "daklf"};
    assert(std::equal(v11.begin(), v11.end(), stdv11.begin(), stdv11.end()));

    v11.clear();
    stdv11.clear();
    assert(std::equal(v11.begin(), v11.end(), stdv11.begin(), stdv11.end()));
    assert(v11.capacity() == stdv11.capacity());

    std::cout << v11.data() << " " << stdv11.data() << " " << std::endl;

    std::cout << std::endl;

    v11.resize(2);
    stdv11.resize(2);
    std::cout << "V11 size, capacity: " << v11.size() << ", " << v11.capacity() << std::endl;
    std::cout << v11;
    std::cout << "STDV11 size, capacity: " << stdv11.size() << ", " << stdv11.capacity() << std::endl;
    for (auto i = stdv11.begin(); i != stdv11.end(); ++i)
        std::cout << *i << " ";
    std::cout << std::endl;
    assert(std::equal(v11.begin(), v11.end(), stdv11.begin(), stdv11.end()));
    assert(v11.capacity() == stdv11.capacity());
    assert(v11.size() == stdv11.size());

    std::cout << std::endl;

    v11.resize(3, "foo");
    stdv11.resize(3, "foo");
    std::cout << "V11 size, capacity: " << v11.size() << ", " << v11.capacity() << std::endl;

    std::cout << "STDV11 size, capacity: " << stdv11.size() << ", " << stdv11.capacity() << std::endl;

    assert(std::equal(v11.begin(), v11.end(), stdv11.begin(), stdv11.end()));
    assert(v11.capacity() == stdv11.capacity());
    assert(v11.size() == stdv11.size());

    v11.resize(6, "foo");
    stdv11.resize(6, "foo");
    std::cout << "V11 size, capacity: " << v11.size() << ", " << v11.capacity() << std::endl;

    std::cout << "STDV11 size, capacity: " << stdv11.size() << ", " << stdv11.capacity() << std::endl;

    assert(std::equal(v11.begin(), v11.end(), stdv11.begin(), stdv11.end()));
    assert(v11.capacity() == stdv11.capacity());
    assert(v11.size() == stdv11.size());

    v11.resize(7, "foo");
    stdv11.resize(7, "foo");
    std::cout << "V11 size, capacity: " << v11.size() << ", " << v11.capacity() << std::endl;

    std::cout << "STDV11 size, capacity: " << stdv11.size() << ", " << stdv11.capacity() << std::endl;

    assert(std::equal(v11.begin(), v11.end(), stdv11.begin(), stdv11.end()));
    assert(v11.capacity() == stdv11.capacity());
    assert(v11.size() == stdv11.size());

    v11.resize(8, "foo");
    stdv11.resize(8, "foo");
    std::cout << "V11 size, capacity: " << v11.size() << ", " << v11.capacity() << std::endl;

    std::cout << "STDV11 size, capacity: " << stdv11.size() << ", " << stdv11.capacity() << std::endl;

    assert(std::equal(v11.begin(), v11.end(), stdv11.begin(), stdv11.end()));
    assert(v11.capacity() == stdv11.capacity());
    assert(v11.size() == stdv11.size());

    v11.resize(9, "foo");
    stdv11.resize(9, "foo");
    std::cout << "V11 size, capacity: " << v11.size() << ", " << v11.capacity() << std::endl;

    std::cout << "STDV11 size, capacity: " << stdv11.size() << ", " << stdv11.capacity() << std::endl;

    assert(std::equal(v11.begin(), v11.end(), stdv11.begin(), stdv11.end()));
    assert(v11.capacity() == stdv11.capacity());
    assert(v11.size() == stdv11.size());

    v11.resize(13, "moo");
    stdv11.resize(13, "moo");
    std::cout << "V11 size, capacity: " << v11.size() << ", " << v11.capacity() << std::endl;

    std::cout << "STDV11 size, capacity: " << stdv11.size() << ", " << stdv11.capacity() << std::endl;

    assert(std::equal(v11.begin(), v11.end(), stdv11.begin(), stdv11.end()));
    assert(v11.capacity() == stdv11.capacity());
    assert(v11.size() == stdv11.size());

    v11.resize(133, "moo");
    stdv11.resize(133, "moo");
    std::cout << "V11 size, capacity: " << v11.size() << ", " << v11.capacity() << std::endl;

    std::cout << "STDV11 size, capacity: " << stdv11.size() << ", " << stdv11.capacity() << std::endl;

    std::cout << std::endl;
    assert(std::equal(v11.begin(), v11.end(), stdv11.begin(), stdv11.end()));
    assert(v11.capacity() == stdv11.capacity());
    assert(v11.size() == stdv11.size());

    v11.reserve(30);
    stdv11.reserve(30);
    assert(std::equal(v11.begin(), v11.end(), stdv11.begin(), stdv11.end()));
    assert(v11.capacity() == stdv11.capacity());
    assert(v11.size() == stdv11.size());

    v11.reserve(5);
    stdv11.reserve(5);
    assert(std::equal(v11.begin(), v11.end(), stdv11.begin(), stdv11.end()));
    assert(v11.capacity() == stdv11.capacity());
    assert(v11.size() == stdv11.size());

    std::cout << std::endl;

    CBL::Vector<int> v12;
    std::vector<int> stdv12;
    std::cout << "V12 size, capacity: " << v12.size() << ", " << v12.capacity() << std::endl;
    std::cout << "STDV12 size, capacity: " << stdv12.size() << ", " << stdv12.capacity() << std::endl;

    size_t old_capacity = stdv12.capacity();
    for (int i = 0; i < 64; ++i) {
        v12.push_back(3);
        stdv12.push_back(3);
        if (old_capacity != stdv12.capacity()) {
            std::cout << "V12 size, capacity: " << v12.size() << ", " << v12.capacity() << std::endl;
            std::cout << "STDV12 size, capacity: " << stdv12.size() << ", " << stdv12.capacity() << std::endl;
            old_capacity = stdv12.capacity();
        }
        assert(std::equal(v12.begin(), v12.end(), stdv12.begin(), stdv12.end()));
        assert(v12.capacity() == stdv12.capacity());
        assert(v12.size() == stdv12.size());
    }

    std::cout << std::endl;

    CBL::Vector<int> v13;
    std::vector<int> stdv13;

    v13.pop_back();
    stdv13.pop_back();

    std::cout << "V13 size, capacity: " << v13.size() << ", " << v13.capacity() << std::endl;
    std::cout << "STDV13 size, capacity: " << stdv13.size() << ", " << stdv13.capacity() << std::endl;

    return 0;
}
