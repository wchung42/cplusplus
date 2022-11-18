#include <iostream>
#include <string>
#include "Sales_item.h"

int main () {
    Sales_item item, total;

    if (std::cin >> item) {
        total = item;
        std::string isbn = item.isbn();
        while (std::cin >> item) {
            if (item.isbn() == isbn) {
                total += item;
                std::cout << total << std::endl;
            }
            else {
                std::cerr << "Data must refer to same ISBN" << std::endl;
            }
        }
    }
    
    return 0;
}