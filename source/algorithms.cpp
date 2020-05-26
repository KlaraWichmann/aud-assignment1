#include "algorithms.hpp"

void quicksort (std::vector<int>& array, int start, int end) {
    if (start < end) { //if array is empty start == end and array is sorted
        int pivot = (start + end) / 2; //sets the pivot in the middle of the array
        int endOfLeftSide = start;
        std::swap(array[pivot], array[end]); //swaps the pivot element with the last element
        pivot = end;//correct index of pivot element position
        for (int i = start; i <= end; i++) {
            if (array[i] < array[pivot]) { //if array element is smaller than pivot element, put it left
                std::swap(array[endOfLeftSide], array[i]);
                endOfLeftSide++; //increase the "border" on the left side
            }
        }
        std::swap(array[endOfLeftSide], array[pivot]);//swap element on left border with position of pivot element (put it right)
        quicksort(array, start, endOfLeftSide - 1); //call quicksort with subarrays (devided in middle)
        quicksort(array, endOfLeftSide + 1, end);
    }
}

std::vector<int> counting_sort (std::vector<int>const& array, int k){ //values in array must be between 0 and k
    std::vector<int> counts(k+1, 0);  // array with length k+1, initialized with zeros only
    for(int i = 0; i < array.size(); ++i){ // count how often each value in given array (between 0 and k) exists, counts[0] counts number of value 0 and so on 
        counts[array[i]] ++;
    }
    std::vector<int> result(array.size(), 0);
    int pos = 0; //next empty position in result-array
    for(int i = 0; i<= counts.size(); ++i){ //iterate through counts array
        for(int j = 0; j < counts[i]; ++j){ //insert each value as often into result-array as counts-array says
            result[pos] = i;
            pos ++;
        }
    }
    return result; //fully sorted array
}
