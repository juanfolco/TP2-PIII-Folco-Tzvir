
#ifndef TP2_PIII_FOLCO_TZVIR_MERGESORT_EDAD_H
#define TP2_PIII_FOLCO_TZVIR_MERGESORT_EDAD_H
#include "ListCasos.h"
#include "../Methods/estado.h"
#include "merge_num.h"

List<estado> mergesortnum(List<estado> x) {
    x.checkSize();
    int size = x.getSize();
    if (size <= 1)
        return x;

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
    left = mergesortnum(left);
    right = mergesortnum(right);

List<estado> Result= mergenum(left, right);
    return Result;
}
#endif //TP2_PIII_FOLCO_TZVIR_MERGESORT_EDAD_H
