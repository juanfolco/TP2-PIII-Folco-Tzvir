#ifndef TP2_PIII_FOLCO_TZVIR_MERGE_EDAD_H
#define TP2_PIII_FOLCO_TZVIR_MERGE_EDAD_H
using namespace std;
List<Paciente> merge(List<Paciente> a, List<Paciente> b){
    List<Paciente> result;
string left; string right;
while(!a.isEmpty() && !b.isEmpty()) {
    a.start();
    left = a.getActual()->getData().getProvincia();
    b.start();
    right = b.getActual()->getData().getProvincia();
}
/*
if first(left) ≤ first(right) then
        append first(left) to result
left := rest(left)
else
append first(right) to result
right := rest(right)
}
// Either left or right may have elements left; consume them.
// (Only one of the following loops will actually be entered.)
while left is not empty do
append first(left) to result
left := rest(left)
while right is not empty do
append first(right) to result
right := rest(right)
return result */
}
#endif //TP2_PIII_FOLCO_TZVIR_MERGE_EDAD_H
