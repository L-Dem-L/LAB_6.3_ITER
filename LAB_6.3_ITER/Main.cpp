#include <iostream>
#include <iomanip>
#include <vector>

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
int countNegativeElementsT(const std::vector<T>& arr) {
    int count = 0;
    for (const auto& element : arr) {
        if (element < 0) {
            ++count;
        }
    }
    std::cout << "Number of negative elements in vector <T>: " << count << std::endl;
    return count;
}

int main() {
    int arr[] = { -1, 2, 3, -4, 5 };
    const int arrSize = std::size(arr);

    printArray(arr, arrSize);

    int result = countNegativeElements(arr, arrSize);
    std::cout << "Number of negative elements in array: " << result << std::endl;

    std::vector<int> vec(arr, arr + arrSize);

    int resultVector = countNegativeElementsT(vec);

    return 0;
}
