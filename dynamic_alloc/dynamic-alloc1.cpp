#include <iostream>

int main() {
    int arr[1000];
    int size = 0, num, sum = 0;
    std::cout << "Enter numbers (CTRL+C to end):" << std::endl;
    while (std::cin >> num) {
        if (size == 1000) {
            std::cout << "Reached maximum array size of 1000." << std::endl;
            break;
        }
        arr[size++] = num;
    }
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}