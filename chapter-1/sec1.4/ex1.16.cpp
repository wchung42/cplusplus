#include <iostream>

int main () {
    // Read in numbers until eof and print sum
    int val = 0, sum = 0;
    while (std::cin >> val) {
        sum += val;
    }
    std::cout << sum << std::endl;
    return 0;
}