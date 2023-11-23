#include <iostream>
#include <iomanip>
#include <vector>

void fillArray(int arr[], int size) {
    std::cout << "Enter " << size << " elements for the array:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
}

void printArray(const int arr[], int size) {
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
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0) {
        std::cerr << "Invalid array size\n";
        return 1;
    }

    int* arr = new int[size];

    fillArray(arr, size);
    printArray(arr, size);

    int result = countNegativeElements(arr, size);
    std::cout << "Number of negative elements in array: " << result << std::endl;

    std::vector<int> vec(arr, arr + size);
    int resultVector = countNegativeElementsT(vec);

    delete[] arr;

    return 0;
}
