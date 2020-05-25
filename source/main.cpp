#include <iostream>
#include "algorithms.hpp"


int main () {

    std::vector<int> a2 = {0, 22, 13};
    for (const auto& i: a2) {
        std::cout << i << ' ';
    }
    std::cout << "\n";
        
    quicksort (a2, 0, a2.size() - 1);
    
    for (const auto& i: a2) {
        std::cout << i << ' ';
    }

}
