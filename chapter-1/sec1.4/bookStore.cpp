#include <iostream>
#include "Sales_item.h"

// Bookstore Program
int main () {
    // Read in sorted transaction and calculate total for each ISBN
    Sales_item total;

    // Check to see if there is data to be processed
    if (std::cin >> total) {
        Sales_item currTrans;
        while (std::cin >> currTrans) {
            if (currTrans.isbn() == total.isbn()) {
                total += currTrans;
            }
            else {
                std::cout << total << std::endl;
                total = currTrans; // total now refers to the next ISBN
            }
        }
        // Print final ISBN total
        std::cout << total << std:: endl;
    }
    else {
        std::cout << "No data to process" << std::endl;
        return -1;
    }

    return 0;
}