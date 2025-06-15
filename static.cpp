#include<iostream>
using namespace std;

// statické proměnné
static int a; // statická proměnná

void zprava() {
    static int b = 0; // počet volání funkce
    if (b == 0) {
        cout << "Prvni volani funkce zprava." << endl;
    } else {
        cout << "Hej uz si me volal: " << b << " krát." << endl;
    }
    b++; // zvyšuje hodnotu b
}

int main() {
    cout << "Hodnota a: " << a << endl; // Staticke promenné jsou inicializovány na 0
    zprava(); // b = 0, první volání funkce zprava
    zprava(); // b = 1, druhé volání funkce zprava
    zprava(); // b = 2, třetí volání funkce zprava
    return 0;
}