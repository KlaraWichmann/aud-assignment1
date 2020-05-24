#include <iostream>
#include "algorithms.hpp"


int main () {

    std::array<int, 3> a2 = {0, 2, 1};
    for (const auto& i: a2) {
        std::cout << i << ' ';
    }
    std::cout << "\n";
        
    a2 = quicksort (a2, 0, 2);
    
    for (const auto& i: a2) {
        std::cout << i << ' ';
    }

}
