#ifndef TP2_PIII_FOLCO_TZVIR_MERGESORT_H
#define TP2_PIII_FOLCO_TZVIR_MERGESORT_H

#include "ListCasos.h"
#include "../Methods/Paciente.h"
#include "merge.h"

List<Paciente> mergesort(List<Paciente> x) {
    x.checkSize();
    int size = x.getSize();
    if (size <= 1)
        return x;

    List<Paciente> left;
    List<Paciente> right;
    x.start();
    for (int i = 0; i < size; i++) {
        if (i < size / 2) {
            left.push_front(x.getActual()->getData());
        } else {
            right.push_front(x.getActual()->getData());
        }
        x.next();
    }
    left = mergesort(left);
    right = mergesort(right);
    
    return merge(left, right);

}

#endif //TP2_PIII_FOLCO_TZVIR_MERGESORT_H