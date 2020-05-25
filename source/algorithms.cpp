#include "algorithms.hpp"

void quicksort (std::vector<int>& array, int start, int end) {
    if (start < end) {
        int pivot = (start + end) / 2;
        int endOfLeftSide = start;
        std::swap(array[pivot], array[end]);
        pivot = end;
        for (int i = start; i <= end; i++) {
            if (array[i] < array[pivot]) {
                std::swap(array[endOfLeftSide], array[i]);
                endOfLeftSide++;
            }
        }
        std::swap(array[endOfLeftSide], array[pivot]);
        quicksort(array, start, endOfLeftSide - 1);
        quicksort(array, endOfLeftSide + 1, end);
    }
}

int counting_sort (std::vector<int> A, int k){

    
}
