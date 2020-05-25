#ifndef ALGORITHMS_HPP
#define ALGORITHMS_HPP

#include <vector>
#include <iterator>
#include <algorithm>
#include <iostream>

/**
 * Kleinste Zahl die durch 1-20 teilbar ist
 *
 * @return kleinste durch 1-20 teilbare Zahl
*/
std::vector<int> quicksort (std::vector<int> A, int p, int r);

int partition (std::vector<int> A, int p, int r);

/**
 * Groessten gemeinsamen Teiler von zwei Zahlen (mit Hilfe des Euklidischen Algorithmus)
 *
 * @param a Zahl von denen der geinsame Teiler gefunden wird
 * @param b Zahl von denen der geinsame Teiler gefunden wird
 * @return groesster gemeinsamer Teiler von a und b
 *
*/
int counting_sort (std::vector<int> A, int k);

#endif
