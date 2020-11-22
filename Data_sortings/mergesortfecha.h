#ifndef TP2_PIII_FOLCO_TZVIR_MERGEsortfecha_H
#define TP2_PIII_FOLCO_TZVIR_MERGEsortfecha_H
#include "ListCasos.h"
#include "../Methods/Paciente.h"
#include "mergefecha.h"

/**
 * Algoritmo de ordenamiento merge que compara listas
 * @param a = lista tipo paciente 1
 * @param b = lista tipo paciente 2
 * @return ordenamiento de listas por fecha de cuidados intensivos
 */

List<Paciente> mergesortcui(List<Paciente> x) {
    x.checkSize();
    int size = x.getSize();
// Base case. A list of zero or one elements is sorted, by definition.
    if (size <= 1)
        return x;

// Recursive case. First, divide the list into equal-sized sublists
// consisting of the first half and second half of the list.
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
// Recursively sort both sublists.
    left = mergesortcui(left);
    right = mergesortcui(right);

// Then merge the now-sorted sublists.
    return mergefecha(left, right);

}
#endif //TP2_PIII_FOLCO_TZVIR_MERGEsortfecha_H