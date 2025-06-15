#include <iostream>
/*
* Ukazatele v C++
 * 
 * Ukazatele jsou proměnné, které obsahují adresu jiné proměnné.
 * Operátory & a * se používají k získání adresy proměnné a dereferencování ukazatele. 
 */
int main(){
    int a = 10;
    int *ptr_a;
    std::cout << "a = " << a << std::endl;
    ptr_a = &a;
    *ptr_a = 20;
    std::cout << "a = " << a << std::endl;
    return 0;
}
