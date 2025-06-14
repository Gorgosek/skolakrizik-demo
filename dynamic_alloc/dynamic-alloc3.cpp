#include <iostream>

int main() {
    int num, sum = 0, count = 0;
    std::cout << "Enter numbers (CTRL+C to end):" << std::endl;
    while (std::cin >> num) {
        sum += num;
        count++;
    }
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}