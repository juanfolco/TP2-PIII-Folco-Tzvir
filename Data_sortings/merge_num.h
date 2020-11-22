#ifndef TP2_PIII_FOLCO_TZVIR_MERGE_EDAD_H
#define TP2_PIII_FOLCO_TZVIR_MERGE_EDAD_H

using namespace std;

/**
 * Algoritmo de ordenamiento merge que compara listas
 * @param a = lista tipo estado 1
 * @param b = lista tipo estado 2
 * @return ordenamiento de listas de mayor a menor de casos con muertes
 */
List<estado> mergenum(List<estado> a, List<estado> b){
    List<estado> result;
    int left; int right;
    a.checkSize();b.checkSize();
    while(!a.isEmpty() && !b.isEmpty()) {
        left = a.get(0).getCantidad();
        right = b.get(0).getCantidad();
        if (left <= right){
            result.push_back(b.get(0));
            b.remove(0);
        }
        else{
            result.push_back(a.get(0));
            a.remove(0);
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
#endif //TP2_PIII_FOLCO_TZVIR_MERGE_EDAD_H