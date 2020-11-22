#ifndef TP2_PIII_FOLCO_TZVIR_MERGE_H
#define TP2_PIII_FOLCO_TZVIR_MERGE_H

using namespace std;

<<<<<<< HEAD
 /**
=======
/**
 **
>>>>>>> c8a104e65aeff0d6a2992f571860def903ce14df
 * Algoritmo de ordenamiento merge que compara listas
 * @param a = lista tipo paciente 1
 * @param b = lista tipo paciente 2
 * @return ordenamiento de listas por Nombre de provincia
 */
<<<<<<< HEAD
=======
using namespace std;
>>>>>>> c8a104e65aeff0d6a2992f571860def903ce14df

List<Paciente> merge(List<Paciente> a, List<Paciente> b) {
    a.checkSize();
    b.checkSize();
    List<Paciente> result;
    string left;
    string right;
    while (!a.isEmpty() && !b.isEmpty()) {
        a.start();
        left = a.getActual()->getData().getProvincia();
        b.start();
        right = b.getActual()->getData().getProvincia();
        if (left <= right) {
            result.push_back(a.get(0));
            a.remove(0);
        } else {
            result.push_back(b.get(0));
            b.remove(0);
        }
    }
    while (!a.isEmpty()) {
        result.push_back(a.get(0));
        a.remove(0);
    }
    while (!b.isEmpty()) {
        result.push_back(b.get(0));
        b.remove(0);
    }
    return result;
}

#endif //TP2_PIII_FOLCO_TZVIR_MERGE_H
