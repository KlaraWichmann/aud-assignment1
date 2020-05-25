#include <iostream>
#include "algorithms.hpp"


int main () {

    std::vector<int> a2 = {0, 2, 1, 8};
    for (const auto& i: a2) {
        std::cout << i << ' ';
    }
    std::cout << "\n";
        
    a2 = quicksort (a2, 0, a2.size() - 1);
    
    for (const auto& i: a2) {
        std::cout << i << ' ';
    }

}
