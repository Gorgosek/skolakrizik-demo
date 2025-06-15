#include<iostream>
#include<stdio.h>
using namespace std;

float deleni(float x, float y) {
    return x / y;
}

int main() {
    cout << "Vysl 1: " << deleni(10, 10) << endl;
    cout << "Vysl 2: " << deleni(1, 2) << endl;
    printf("Vysl 1: %f\n", deleni(11293, 0)); // C-style output
    return 0;
}
