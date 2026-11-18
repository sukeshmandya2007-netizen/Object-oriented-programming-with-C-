#include <cstddef>
#include <iostream>
#include <memory>
#include <stdexcept>

using namespace std;

class SafeArray {
    size_t length;
    unique_ptr<int[]> values;

public:
    explicit SafeArray(size_t size)
        : length(size), values(size == 0 ? nullptr : new int[size]{}) {}

    size_t size() const {
        return length;
    }

    int &operator[](size_t index) {
        if (index >= length)
            throw out_of_range("SafeArray index is out of range");
        return values[index];
    }

    const int &operator[](size_t index) const {
        if (index >= length)
            throw out_of_range("SafeArray index is out of range");
        return values[index];
    }
};

int main() {
    SafeArray numbers(3);
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;

    cout << "Array values: ";
    for (size_t i = 0; i < numbers.size(); ++i)
        cout << numbers[i] << " ";
    cout << endl;

    try {
        cout << numbers[3] << endl;
    } catch (const out_of_range &error) {
        cout << "Error: " << error.what() << endl;
    }

    return 0;
}
