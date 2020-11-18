
#ifndef TP2_PIII_FOLCO_TZVIR_MERGESORT_EDAD_H
#define TP2_PIII_FOLCO_TZVIR_MERGESORT_EDAD_H
#include "ListCasos.h"
#include "../Methods/Paciente.h"
#include "merge_edad.h"

List<Paciente> mergesort(List<Paciente> x){
    int size=x.getSize();
// Base case. A list of zero or one elements is sorted, by definition.
    if (size <= 1)
    return x;

// Recursive case. First, divide the list into equal-sized sublists
// consisting of the first half and second half of the list.
    List<Paciente> left;
    List<Paciente> right;
    x.start();
    for (int i=0; i<size; i++) {
        if (i <= size / 2) {
            left.push_front(x.getActual());
            x.next();
        } else {
            right.push_front(x.getActual());
        }
        x.next();
    }
// Recursively sort both sublists.
    left=mergesort(left);
    right=mergesort(right);

// Then merge the now-sorted sublists.
    return merge(left, right)

#endif //TP2_PIII_FOLCO_TZVIR_MERGESORT_EDAD_H
