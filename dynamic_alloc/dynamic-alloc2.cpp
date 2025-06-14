#include <iostream>
#include <stdlib.h>

#define INITIAL_CAPACITY 5 // Pocatecni kapacita pole
int main() {
    // Odkaz na dynamicky alokovane pole
    int *arr = NULL;
    int size = 0, capacity = INITIAL_CAPACITY, num, sum = 0;
    // Alokace pameti pro pole
    arr = (int *)malloc(capacity * sizeof(int));
    if (arr == NULL) {
        std::cout << "Memory allocation failed!" << std::endl;
        return 1;
    }
    std::cout << "Enter numbers (CTRL+C to end):" << std::endl;
    while (std::cin >> num) {
        // Kontrola, zda je potreba zvetsit kapacitu pole
        if (size == capacity) {
            capacity *= 2;
            // Pouziti realloc pro zvetseni velikosti pole
            int *tmp = (int *)realloc(arr, capacity * sizeof(int));
            if (tmp == NULL) {
                std::cout << "Memory allocation failed!" << std::endl;
                free(arr);
                return 1;
            }
            arr = tmp;
        }
        arr[size++] = num;
    }
    // Vypocet souctu cisel v poli
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    std::cout << "Sum: " << sum << std::endl;
    free(arr);
    return 0;
}