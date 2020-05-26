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

/*std::vector<int> counting_sort (std::vector<int> array_a, int k) {
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
}*/

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