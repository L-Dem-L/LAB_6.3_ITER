#include <iostream>
#include <iomanip>

template <typename T>
void printArray(const T arr[], const int size) {
    std::cout << "Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << std::setw(4);
    }
    std::cout << std::endl;
}

int countNegativeElements(const int arr[], const int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            ++count;
        }
    }
    return count;
}

template <typename T>
int countNegativeElementsT(const T arr[], const int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        count += (arr[i] < 0 ? 1 : 0);
    }

    std::cout << "Number of negative elements in array <T>: " << count << std::endl;
    return count;
}

int main() {
    int arr[] = { -1, 2, 3, -4, 5 };
    const int arrSize = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, arrSize);

    int result = countNegativeElements(arr, arrSize);
    std::cout << "Number of negative elements in array: " << result << std::endl;

    int resultArrayT = countNegativeElementsT(arr, arrSize);

    return 0;
}
