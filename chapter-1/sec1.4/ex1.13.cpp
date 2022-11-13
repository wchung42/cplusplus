#include <iostream>

int main () {
    // Rewriting ex1.9 as a for loop
    // Sum of nums from 50 to 100
    int sum = 0;
    for (int i = 50; i <= 100; ++i) {
        sum += i;
        // std::cout << i << "-" << sum << std::endl;
    }
    std::cout << sum << std::endl;

    // Rewriting ex1.10 as a for loop
    // Print out numbers from ten to 1
    for (int val = 10; val >= 0; --val) {
        std::cout << val << std::endl;
    }
}