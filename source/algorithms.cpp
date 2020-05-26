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

std::vector<int> counting_sort (std::vector<int>const& array, int k){
    std::vector<int> counts(k+1, 0);  // Laenge k+1, alle mit 0 initialisieren
    for(int i = 0; i < array.size(); i++){ // zaehlen wie oft Werte von 0 bis k vorkommen, an jeweiliger Position Anzahl eintragen
        counts[array[i]] ++;
    }
    std::vector<int> result(array.size(), 0); 
    int pos = 0;
    for(int i = 0; i<= counts.size(); i++){ //count array durchgehen
        for(int j = 0; j < counts[i]; ++j){ //bis count für diese Stelle 0 ist
            result[pos] = i;
            pos ++;
        }
    }
    return result;
}
