#include <iostream>
#include <iomanip>

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

template <typename T>
void fillArray(T arr[], int size) {
    std::cout << "Enter " << size << " elements for the array <T>:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
}

template <typename T>
void printArray(const T arr[], int size) {
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

    double* arrDouble = new double[size];
    fillArray(arrDouble, size);
    printArray(arrDouble, size);

    int result = countNegativeElements(arr, size);
    std::cout << "Number of negative elements in array: " << result << std::endl;

    int resultArrayT = countNegativeElementsT(arr, size);

    delete[] arr;
    delete[] arrDouble;

    return 0;
}