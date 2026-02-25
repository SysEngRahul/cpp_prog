#include <iostream>
#include <algorithm>
#include <stdexcept>

class ManagedArray {
private:
    int* data;
    size_t size;

public:
    ManagedArray(size_t s) : data(new int[s]()), size(s) {}

    ~ManagedArray() {
        delete[] data;
    }

    ManagedArray(const ManagedArray& other)
        : data(new int[other.size]), size(other.size) {
        std::copy(other.data, other.data + size, data);
    }

    ManagedArray& operator=(const ManagedArray& other) {
        if (this != &other) {
            int* newData = new int[other.size];
            std::copy(other.data, other.data + other.size, newData);
            delete[] data;
            data = newData;
            size = other.size;
        }
        return *this;
    }

    ManagedArray(ManagedArray&& other) noexcept
        : data(other.data), size(other.size) {
        other.data = nullptr;
        other.size = 0;
    }

    ManagedArray& operator=(ManagedArray&& other) noexcept {
        if (this != &other) {
            delete[] data;
            data = other.data;
            size = other.size;
            other.data = nullptr;
            other.size = 0;
        }
        return *this;
    }

    int& operator[](size_t index) {
        if (index >= size)
            throw std::out_of_range("Index out of bounds");
        return data[index];
    }
};

int main() {
    ManagedArray arr(5);
    arr[0] = 42;
    std::cout << arr[0] << std::endl;
    return 0;
}
