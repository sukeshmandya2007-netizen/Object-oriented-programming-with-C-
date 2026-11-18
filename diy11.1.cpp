#include <iostream>
#include <stdexcept>

using namespace std;

template <typename T>
void swapVals(T &first, T &second) {
    T temporary = first;
    first = second;
    second = temporary;
}

template <typename T>
T findMax(const T values[], int size) {
    if (size <= 0)
        throw invalid_argument("findMax requires at least one value");

    T maximum = values[0];
    for (int i = 1; i < size; ++i) {
        if (values[i] > maximum)
            maximum = values[i];
    }
    return maximum;
}

int main() {
    int firstInt = 10, secondInt = 20;
    swapVals(firstInt, secondInt);
    cout << "Swapped integers: " << firstInt << " " << secondInt << endl;

    double firstDouble = 2.5, secondDouble = 7.5;
    swapVals(firstDouble, secondDouble);
    cout << "Swapped doubles: " << firstDouble << " " << secondDouble << endl;

    const int integers[] = {4, 9, 2, 7};
    const double decimals[] = {1.25, 8.5, 3.75};
    cout << "Maximum integer: " << findMax(integers, 4) << endl;
    cout << "Maximum double: " << findMax(decimals, 3) << endl;

    return 0;
}
