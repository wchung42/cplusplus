#include <iostream>

int main () {
    /* Get two numbers from user and print all numbers within that range */
    /* 1 10 */
    /* 10 1 */
    int val1 = 0, val2 = 0, min = 0, max = 0;
    std::cin >> val1 >> val2; 
    if (val1 > val2) {
        min = val2;
        max = val1;
    }
    else {
        min = val1;
        max = val2;
    }
    while (min <= max) {
        std::cout << min << std::endl;
        ++min;
    }
}