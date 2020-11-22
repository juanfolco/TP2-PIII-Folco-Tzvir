
#ifndef TP2_PIII_FOLCO_TZVIR_MERGEsortfecha_H
#define TP2_PIII_FOLCO_TZVIR_MERGEsortfecha_H
#include "ListCasos.h"
#include "../Methods/Paciente.h"
#include "mergefecha.h"

List<Paciente> mergesortcui(List<Paciente> x) {
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
    left = mergesortcui(left);
    right = mergesortcui(right);

    return mergefecha(left, right);

}
#endif //TP2_PIII_FOLCO_TZVIR_MERGEsortfecha_H