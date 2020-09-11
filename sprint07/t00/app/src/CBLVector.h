#pragma once
#include <cstddef>
#include <initializer_list>
#include <stdexcept>
#include <iostream>

namespace CBL {

template<class T>
class Vector {
    public:
        using iterator = T*;

        Vector() : Vector(0) {}
        explicit Vector(size_t size) {
            m_capacity = size;
            m_size = size;
            m_buffer = new T[size];
            for (size_t i = 0; i < size; ++i)
                m_buffer[i] = T();
        }
        Vector(size_t size, const T& value) {
            m_capacity = size;
            m_size = size;
            m_buffer = new T[size];
            for (auto i = 0ul; i < m_size; i++)
                m_buffer[i] = value;
        }
        Vector(iterator first, iterator last) {
            m_size = std::distance(first, last);
            m_capacity = m_size;
            m_buffer = new T[m_size];
            for (auto i = 0ul; i < m_size; i++) {
                m_buffer[i] = *first++;
            }
        }
        Vector(const std::initializer_list<T>& lst) : Vector(iterator(lst.begin()), iterator(lst.end())) {}
        Vector(const Vector<T>& other) {
            m_size = other.m_size;
            m_capacity = other.m_capacity;
            m_buffer = new T[m_size];
            for (auto i = 0ul; i < m_size; i++)
                m_buffer[i] = other.m_buffer[i];
        }
        ~Vector() {
            m_size = 0;
            m_capacity = 0;
            if(m_buffer != nullptr)
                delete [] m_buffer;
        }

        Vector<T>& operator=(const Vector<T>& other) {
            delete[ ] m_buffer;
            m_size = other.size();
            m_capacity = other.capacity();
            m_buffer = new T [m_size];
            for (auto i = 0ul; i < m_size; i++)
                m_buffer[i] = other.m_buffer[i];
            return *this;
        }
        bool operator==(const Vector<T>& other) const {
            return std::lexicographical_compare(this->begin(), this->end(),
                                                other.begin(), other.end(), [](T&a, T&b){return a==b;});
        }
        bool operator!=(const Vector<T>& other) const {
            return std::lexicographical_compare(this->begin(), this->end(),
                                                other.begin(), other.end(), [](T&a, T&b){return a!=b;});
        }
        bool operator<(const Vector<T>& other) const {
            return std::lexicographical_compare(this->begin(), this->end(),
                                                other.begin(), other.end(), [](T&a, T&b){return a<b;});
        }
        bool operator>(const Vector<T>& other) const {
            return std::lexicographical_compare(this->begin(), this->end(),
                                                other.begin(), other.end(), [](const T&a, const T&b){return a>b;});
        }
        bool operator<=(const Vector<T>& other) const {
            return std::lexicographical_compare(this->begin(), this->end(),
                                                other.begin(), other.end(), [](T&a, T&b){return a<=b;});
        }
        bool operator>=(const Vector<T>& other) const {
            return std::lexicographical_compare(this->begin(), this->end(),
                                                other.begin(), other.end(), [](T&a, T&b){return a>=b;});
        }
        // iterators
        iterator begin() const {
            return m_buffer;
        }
        iterator end() const {
            return begin() + size();
        }
        // capacity
        size_t size() const {
            return m_size;
        }
        size_t capacity() const {
            return m_capacity;
        }
        bool isEmpty() const {
            return m_size == 0;
        }
        void resize(size_t size, const T& value= T()) {
            T* new_obj = new T[size];
            // size_t i = 0;
            if (size >= m_capacity) {
                // for (; i < m_size; ++i) new_obj[i] = m_buffer[i];
                std::move(begin(), end(), new_obj);
                for (size_t i = m_size; i < size; ++i) new_obj[i] = value;
            } else {
                for (size_t i = 0; i < size; ++i) new_obj[i] = m_buffer[i];
            }
            delete[] m_buffer;
            m_buffer = new_obj;
            m_capacity = size;
            m_size = size;
        }
        void reserve(size_t size) {
            if (size > m_capacity) {
                T* new_obj = new T[size];
                m_capacity = size;
                // size_t i = 0;
                // for (; i < m_size; ++i) new_obj[i] = m_buffer[i];
                std::move(begin(), end(), new_obj);
                for (size_t i = m_size; i < size; ++i) new_obj[i] = T();
                delete[] m_buffer;
                m_buffer = new_obj;
            }
        }
        // element access
        T& operator[](size_t index) const {
//            if( index < 0 || index >= size( ) )
//                throw std::out_of_range ("");
            return m_buffer[index];
        }
        T& at(size_t index) const {
            if (index < m_size)
                return m_buffer[index];
            throw std::out_of_range("vector");
        }
        T* data() const {
            return begin();
        }
        // modifiers
        void push_back(const T& value) {
            if (m_size == m_capacity) {
                reserve(m_capacity == 0 ? 1 : m_capacity * 2);
            }
            m_buffer[m_size++] = value;
        }
        void pop_back() {
            m_size--;
        }
        iterator insert(iterator pos, const T& value) {
            iterator iter;
            size_t distance = std::distance(begin(), pos);

            if (distance == m_size) {
                push_back(value);
                iter = end() - 1;
            } else {
                if (m_size == m_capacity) {
                    reserve(m_capacity == 0 ? 1 : m_capacity * 2);
                }
                for (size_t i = m_size; i > distance; --i)
                    m_buffer[i] = m_buffer[i - 1];
                m_buffer[distance] = value;
                m_size++;
                iter = pos;
            }
            return pos;
        }
        iterator erase(iterator pos) {
            size_t i = 0;
            size_t dst = std::distance(begin(), pos);
            for (i = dst; i < size() ; i++) {
                m_buffer[i] = m_buffer[i+1];
            }
            m_size--;
            return pos;
        }
        iterator erase(iterator first, iterator last) {
            for (auto i = 0l; i < last - first; i++)
                erase(first);
            return first;
        }
        void clear() {
            m_size = 0;
        }
    private:
        size_t m_size{0};
        size_t m_capacity{0};
        T* m_buffer{nullptr};
};
}