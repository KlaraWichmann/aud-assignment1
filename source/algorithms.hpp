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
 * Groessten gemeinsamen Teiler von zwei Zahlen (mit Hilfe des Euklidischen Algorithmus)
 *
 * @param a Zahl von denen der geinsame Teiler gefunden wird
 * @param b Zahl von denen der geinsame Teiler gefunden wird
 * @return groesster gemeinsamer Teiler von a und b
 *
*/
std::vector<int> counting_sort (std::vector<int> array, int k);

#endif
