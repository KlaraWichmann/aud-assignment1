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

std::vector<int> counting_sort (std::vector<int> array_a, int k) {
    std::vector<int> array_b;
    std::vector<int> array_c;
    for (int j = 0; j < array_a.size(); j++) {
        array_c[array_a[j]]++;
    }
    for (int i = 1; i < k; i++) {
        array_c[i] += array_c[i - 1];
    }
    for (int j = array_a.size() - 1; j <= 0; j--) {
        array_b[array_c[array_a[j]]] = array_a[j];
        array_c[array_a[j]]--;
    }
    return array_b;
}
