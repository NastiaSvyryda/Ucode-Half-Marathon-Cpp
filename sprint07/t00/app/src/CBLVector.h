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

        Vector() {
            std::cout << "hello\n";
        }
        explicit Vector(size_t size) {
            m_capacity = size;
            m_size = size;
            m_buffer = new T[size];
            for (int i = 0; i < m_size; i++)
                m_buffer[i] = 0;
        }
        Vector(size_t size, const T& value) {
            m_capacity = size;
            m_size = size;
            m_buffer = new T[size];
            for (int i = 0; i < m_size; i++)
                m_buffer[i] = value;
        }
        Vector(iterator first, iterator last);
        Vector(const std::initializer_list<T>& lst);
        Vector(const Vector<T>& other) {
            m_size = other.my_size;
            m_capacity = other.my_capacity;
            m_buffer = new T[m_size];
            for (int i = 0; i < m_size; i++)
                m_buffer[i] = other.m_buffer[i];
        }
        ~Vector() {
            std::cout << "bye\n";
            delete [] m_buffer;
        }

        Vector<T>& operator=(const Vector<T>& other) {
            delete[ ] m_buffer;
            m_size = other.my_size;
            m_capacity = other.my_capacity;
            m_buffer = new T [m_size];
            for (int i = 0; i < m_size; i++)
                m_buffer[i] = other.m_buffer[i];
            return *this;
        }
        bool operator==(const Vector<T>& other) const {
            bool res = true;

            for (int i = 0; i < m_size; i++) {
                if (!(m_buffer[i] == other[i])) {
                    res = false;
                    break;
                }
            }
            return res;
        }
        bool operator!=(const Vector<T>& other) const;
        bool operator<(const Vector<T>& other) const;
        bool operator>(const Vector<T>& other) const;
        bool operator<=(const Vector<T>& other) const;
        bool operator>=(const Vector<T>& other) const;
        // iterators
        iterator begin() const {
            return m_buffer;
        }
        iterator end() const {
            return m_buffer + size();
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
        void resize(size_t size, const T& value= T());
        void reserve(size_t size) {
            if( size < m_size )
                return;
            T *newArray = new T[ size ];
            for( auto k = 0ul; k < m_size; ++k )
                newArray[ k ] = std::move( m_buffer[ k ] );
            m_capacity = size;
            std::swap(m_buffer, newArray );
            delete [ ] newArray;
        }
        // element access
        T& operator[](size_t index) const {
            if( index < 0 || index >= size( ) )
                throw std::out_of_range ("out of bounds");
            return m_buffer[index];
        }
        T& at(size_t index) const;
        T* data() const;
        // modifiers
        void push_back(const T& value) {
            if( m_size == m_capacity ) {
                int newcapacity = 0;
                (2 * m_capacity == 0) ? newcapacity = 8 : newcapacity = 2 * m_capacity;
                reserve(newcapacity);
            }
            m_buffer[m_size++] = value;
        }
        void pop_back() {
            m_size--;
        }
        iterator insert(iterator pos, const T& value);
        iterator erase(iterator pos);
        iterator erase(iterator first, iterator last);
        void clear();
    private:
        size_t m_size{0};
        size_t m_capacity{0};
        T* m_buffer{nullptr};
};
}