
#ifndef TP2_PIII_FOLCO_TZVIR_MERGESORT_EDAD_H
#define TP2_PIII_FOLCO_TZVIR_MERGESORT_EDAD_H
#include "ListCasos.h"
#include "../Methods/estado.h"
#include "merge_num.h"

/**
 * Algoritmo de ordenamiento merge que compara listas
 * @param a = lista tipo estado 1
 * @param b = lista tipo estado 2
 * @return ordenamiento de listas de mayor a menor de casos con muertes
 */

List<estado> mergesortnum(List<estado> x) {
    x.checkSize();
    int size = x.getSize();
// Base case. A list of zero or one elements is sorted, by definition.
    if (size <= 1)
        return x;

// Recursive case. First, divide the list into equal-sized sublists
// consisting of the first half and second half of the list.
    List<estado> left;
    List<estado> right;
    x.start();
    for (int i = 1; i <= size; i++) {
        if (i <=(size/2)) {
            left.push_front(x.getActual()->getData());
        } else {
            right.push_front(x.getActual()->getData());
        }
        x.next();
    }
// Recursively sort both sublists.
    left = mergesortnum(left);
    right = mergesortnum(right);

// Then merge the now-sorted sublists.
List<estado> Result= mergenum(left, right);
    return Result;
}
#endif //TP2_PIII_FOLCO_TZVIR_MERGESORT_EDAD_H
