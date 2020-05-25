#include <iostream>
#include "algorithms.hpp"


int main () {

    //___________________Quicksort___________________
    std::cout << "=====================QUICKSORT========================\n";
    //Output for array(vector) of size 3
    std::vector<int> a3 = {0, 15, 1};
    std::cout << "Array of size 3 before: \n";
    for (int i = 0; i < a3.size(); i++) {
        std::cout << a3[i] << ' ';
    }
    std::cout << "\n";
        
    quicksort (a3, 0, a3.size() - 1);
    
    std::cout << "Array of size 3 after: \n";
    for (int i = 0; i < a3.size(); i++) {
        std::cout << a3[i] << ' ';
    }
    std::cout << "\n ---------------------------------------- \n";
    //Output for array(vector) of size 4
    std::vector<int> a4 = {-5, -10, 5, 3};
    std::cout << "Array of size 4 before: \n";
    for (int i = 0; i < a4.size(); i++) {
        std::cout << a4[i] << ' ';
    }
    std::cout << "\n";
        
    quicksort (a4, 0, a4.size() - 1);
    
    std::cout << "Array of size 4 after: \n";
    for (int i = 0; i < a4.size(); i++) {
        std::cout << a4[i] << ' ';
    }
    std::cout << "\n ---------------------------------------- \n";
    //Output for array(vector) of size 7
    std::vector<int> a7 = {0, -1, 15, 3, 24, 22, 13};
    std::cout << "Array of size 7 before: \n";
    for (int i = 0; i < a7.size(); i++) {
        std::cout << a7[i] << ' ';
    }
    std::cout << "\n";
        
    quicksort (a7, 0, a7.size() - 1);
    
    std::cout << "Array of size 7 after: \n";
    for (int i = 0; i < a7.size(); i++) {
        std::cout << a7[i] << ' ';
    }
    std::cout << "\n ---------------------------------------- \n";
    //___________________Counting sort___________________
    std::cout << "=====================COUNTING SORT========================\n";
    //Output for array(vector) of size 3
    std::vector<int> cs_a3 = {0, 15, 1};
    std::cout << "Array of size 3 before: \n";
    for (int i = 0; i < cs_a3.size(); i++) {
        std::cout << cs_a3[i] << ' ';
    }
    std::cout << "\n";
    cs_a3 = counting_sort(cs_a3, *max_element(cs_a3.begin(), cs_a3.end()));
    
    std::cout << "Array of size 3 after: \n";
    for (int i = 0; i < cs_a3.size(); i++) {
        std::cout << cs_a3[i] << ' ';
    }
    std::cout << "\n ---------------------------------------- \n";
}
