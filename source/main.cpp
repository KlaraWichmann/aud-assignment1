#include <iostream>
#include "algorithms.hpp"


int main () {

    std::array<int, 3> a2 = {3, 2, 1};
    for (const auto& i: a2) {
        std::cout << i << ' ';
    }
    std::cout << "\n";
        
    quicksort (a2, 1, 3);
    
    for (const auto& i: a2) {
        std::cout << i << ' ';
    }

}
