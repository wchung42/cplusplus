#include <iostream>
#include "Sales_item.h"

int main () {
    Sales_item item;
    int count = 0;
    std::string currIsbn;

    // Check to ensure there is at least one input
    if (std::cin >> item) {
        currIsbn = item.isbn();
        ++count;
        while (std:: cin >> item) {
            if (item.isbn() == currIsbn) {
                ++count;
            }
            else {
                // Print out isbn and total transaction count
                std::cout << currIsbn << " " << count << std::endl;
                // Set currIsbn to current item isbn and reset count to 1
                currIsbn = item.isbn();
                count = 1;
            }
        }
        // print last count
        std::cout << currIsbn << " " << count << std::endl;
    }
    else {
        std::cerr << "No data to process" << std::endl;
        return -1;
    }
    return 0;
    
}