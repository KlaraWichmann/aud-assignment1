#ifndef ALGORITHMS_HPP
#define ALGORITHMS_HPP

#include <vector>
#include <iterator>
#include <algorithm>
#include <iostream>

/**
 * Sorting an given array by using the quicksort algorithm
 *
 * @param array array to be sorted
 * @param start index of first array value (usually 0)
 * @param end index of last array element (array size - 1)
*/
void quicksort (std::vector<int>& array, int start, int end);

/**
 * Sorting a given array with numbers between 0 and k
 *
 * @param array array to be sorted
 * @param k greatest value in array to be sorted
 * @return sorted array
 *
*/
std::vector<int> counting_sort (std::vector<int>const& array, int k);

#endif
