#include <iostream>
#include "algorithms.hpp"


int main () {

    //___________________Quicksort___________________
    std::cout << "=====================QUICKSORT========================\n";
    //Output for array(vector) of size 1
    std::vector<int> a1 = {1};
    std::cout << "Array of size 1 before: \n";
    for (int i = 0; i < a1.size(); i++) {
        std::cout << a1[i] << ' ';
    }
    std::cout << "\n";
        
    quicksort (a1, 0, a1.size() - 1);
    
    std::cout << "Array of size 1 after: \n";
    for (int i = 0; i < a1.size(); i++) {
        std::cout << a1[i] << ' ';
    }
    std::cout << "\n ---------------------------------------- \n";
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
    //Output for array(vector) of size 11
    std::vector<int> a11 = {-1, 0, 0, -1, 15, 3, 24, 22, 13, 2, 1};
    std::cout << "Array of size 11 before: \n";
    for (int i = 0; i < a11.size(); i++) {
        std::cout << a11[i] << ' ';
    }
    std::cout << "\n";
        
    quicksort (a11, 0, a11.size() - 1);
    
    std::cout << "Array of size 11 after: \n";
    for (int i = 0; i < a11.size(); i++) {
        std::cout << a11[i] << ' ';
    }
    std::cout << "\n ---------------------------------------- \n";
    //___________________Counting sort___________________
    std::cout << "=====================COUNTING SORT========================\n";

    std::cout << "Array before sorting: \n";
    std::vector<int> a8 = {5, 7, 5, 1, 1, 0};
    for (int i = 0; i < a8.size(); i++) {
        std::cout << a8[i] << ' ';
    }
    std::cout << "\nSorted: \n";
    std::vector<int> a8_sorted = counting_sort(a8,7);
    for (int i = 0; i < a8_sorted.size(); i++) {
        std::cout << a8_sorted[i] << ' ';
    }
    std::cout << "\n ---------------------------------------- \n";

        std::cout << "Array before sorting: \n";
    std::vector<int> a9 = {22, 9, 12, 8, 18, 0, 0, 0};
    for (int i = 0; i < a9.size(); i++) {
        std::cout << a9[i] << ' ';
    }
    std::cout << "\nSorted: \n";
    std::vector<int> a9_sorted = counting_sort(a9,22);
    for (int i = 0; i < a9_sorted.size(); i++) {
        std::cout << a9_sorted[i] << ' ';
    }
    std::cout << "\n ---------------------------------------- \n";

    std::cout << "Array before sorting: \n";
    std::vector<int> a10 = {30, 23, 23, 1, 15, 6, 4, 4};
    for (int i = 0; i < a10.size(); i++) {
        std::cout << a10[i] << ' ';
    }
    std::cout << "\nSorted: \n";
    std::vector<int> a10_sorted = counting_sort(a10,30);
    for (int i = 0; i < a10_sorted.size(); i++) {
        std::cout << a10_sorted[i] << ' ';
    }
    std::cout << "\n ---------------------------------------- \n";

    std::cout << "Array before sorting: \n";
    std::vector<int> a12 = {14, 12, 19, 96, 5, 5, 1, 3, 13};
    for (int i = 0; i < a12.size(); i++) {
        std::cout << a12[i] << ' ';
    }
    std::cout << "\nSorted: \n";
    std::vector<int> a12_sorted = counting_sort(a12,96);
    for (int i = 0; i < a12_sorted.size(); i++) {
        std::cout << a12_sorted[i] << ' ';
    }
    std::cout << "\n ---------------------------------------- \n";

        std::cout << "Array before sorting: \n";
    std::vector<int> a13 = {9, 8, 7, 7, 6, 5, 4, 3, 3, 2, 1, 0};
    for (int i = 0; i < a13.size(); i++) {
        std::cout << a13[i] << ' ';
    }
    std::cout << "\nSorted: \n";
    std::vector<int> a13_sorted = counting_sort(a13,9);
    for (int i = 0; i < a13_sorted.size(); i++) {
        std::cout << a13_sorted[i] << ' ';
    }
    std::cout << "\n ---------------------------------------- \n";
}
