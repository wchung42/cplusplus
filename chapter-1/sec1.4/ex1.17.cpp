#include <iostream>

int main () {
    /* Count duplicates */
    int currentVal = 0, val = 0;
    if (std::cin >> currentVal) {
        int count = 1;
        while (std::cin >> val) {
            if (val == currentVal) {
                ++count;
            }
            else {
                std::cout << currentVal << " occurs " << count << " times." << std::endl;
                currentVal = val;
                count = 1;
            }
        }
        std::cout << currentVal << " occurs " << count << " times." << std::endl;
    }
    return 0;
}