#include "fecha.h"

Fecha::Fecha(){
dia=1;
mes=1;
}

Fecha::Fecha(int d, int m){
dia=d;
mes=m;
}

void Fecha::setDia(int d) {
dia=d;
}

void Fecha::setMes(int m) {
mes=m;
}

int Fecha::getDia() {
return dia;
}

int Fecha::getMes() {
return mes;
}

