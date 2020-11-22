#ifndef TP2_PIII_FOLCO_TZVIR_MERGEfecha_H
#define TP2_PIII_FOLCO_TZVIR_MERGEfecha_H
<<<<<<< HEAD

#include "../Methods/Paciente.h"
#include "ListCasos.h"
using namespace std;

/**
 * Algoritmo de ordenamiento merge que compara listas
 * @param a = lista tipo paciente 1
 * @param b = lista tipo paciente 2
 * @return ordenamiento de listas por fecha de cuidados intensivos
 */

=======
#include "../Methods/Paciente.h"
#include "ListCasos.h"
using namespace std;
>>>>>>> 523f801efcf0e0507ebd4732aa9059e0dce9df9c
List<Paciente> mergefecha(List<Paciente> a, List<Paciente> b) {
    a.checkSize();b.checkSize();
    List<Paciente> result;
    string left;
    string right;
    while (!a.isEmpty() && !b.isEmpty()) {
        a.start();
        left = a.getActual()->getData().getCuif();
        b.start();
        right = b.getActual()->getData().getCuif();
        if (left <= right) {
            result.push_back(a.get(0));
            a.remove(0);
        } else {
            result.push_back(b.get(0));
            b.remove(0);
        }
    }
    while(!a.isEmpty()){
        result.push_back(a.get(0));
        a.remove(0);
    }
    while(!b.isEmpty()){
        result.push_back(b.get(0));
        b.remove(0);
    }
    return result;
}

<<<<<<< HEAD
#endif //TP2_PIII_FOLCO_TZVIR_MERGEfecha_H
=======
#endif //TP2_PIII_FOLCO_TZVIR_MERGEfecha_H
>>>>>>> 523f801efcf0e0507ebd4732aa9059e0dce9df9c
