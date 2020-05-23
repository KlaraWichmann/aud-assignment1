#ifndef ALGORITHMS_HPP
#define ALGORITHMS_HPP

#include <array>
#include <iterator>

/**
 * Kleinste Zahl die durch 1-20 teilbar ist
 *
 * @return kleinste durch 1-20 teilbare Zahl
*/
void quicksort (std::array<int, 3> A, int p, int r);

int partition (std::array<int, 3> A, int p, int r);

/**
 * Groessten gemeinsamen Teiler von zwei Zahlen (mit Hilfe des Euklidischen Algorithmus)
 *
 * @param a Zahl von denen der geinsame Teiler gefunden wird
 * @param b Zahl von denen der geinsame Teiler gefunden wird
 * @return groesster gemeinsamer Teiler von a und b
 *
*/
int counting_sort (std::array<int, 10> A, int k);

#endif
