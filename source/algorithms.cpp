#include "algorithms.hpp"

void quicksort (std::array<int, 3> A, int p, int r) {
    if (p < r) {
        int q = partition (A, p, r);
        quicksort (A, p, q - 1);
        quicksort (A, q + 1, r);
    }
}

int partition (std::array<int, 3> A, int p, int r) {
    int x = A[r];
    int i = p - 1;
    for (int j = p; j <= r - 1; j++) {
        if (A[j] <= x) {
            i++;
            int temp1 = A[i];
            int temp2 = A[j];
            A[i] = temp2;
            A[j] = temp1;
        }
    }
    int temp3 = A[i + 1];
    int temp4 = A[r];
    A[i + 1] = temp4;
    A[r] = temp3;
    return i + 1;
}
