//
// Created by Folkius on 16/11/2020.
//

#ifndef TP2_PIII_FOLCO_TZVIR_ESTADO_H
#define TP2_PIII_FOLCO_TZVIR_ESTADO_H
#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include <sstream>
#include <utility>
using namespace std;
class estado {
private:

    string nombre;
    unsigned int cantidad;
public:
    estado(string nombre, unsigned int cantidad) : nombre(std::move(nombre)), cantidad(cantidad) {}

    friend ostream &operator<<(ostream &os, const estado &estado) {
        os << "nombre: " << estado.nombre << " cantidad: " << estado.cantidad;
        return os;
    }

    const string &getNombre() const {
        return nombre;
    }

    void setNombre(string &nombre) {
        estado::nombre = nombre;
    }

    unsigned int getCantidad() const {
        return cantidad;
    }

    void setCantidad(unsigned int cant) {
        estado::cantidad = cant;
    }

    void addCant() {
        int a=estado::cantidad;
        a++;
        estado::cantidad = a;
    }
    bool operator==(const estado &rhs) const { return nombre == rhs.nombre; }

    bool operator!=(const estado &rhs) const { return !(nombre == rhs.nombre); }
};
#endif //TP2_PIII_FOLCO_TZVIR_ESTADO_H
