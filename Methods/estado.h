//
// Created by Folkius on 16/11/2020.
//

#ifndef TP2_PIII_FOLCO_TZVIR_ESTADO_H
#define TP2_PIII_FOLCO_TZVIR_ESTADO_H
#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include <utility>
using namespace std;
class estado {
private:
<<<<<<< HEAD
    string nombre;
=======

    string Nombre;
>>>>>>> 523f801efcf0e0507ebd4732aa9059e0dce9df9c
    unsigned int cantidad;
public:
    estado(string nombre, unsigned int cantidad) : Nombre(std::move(nombre)), cantidad(cantidad) {}

    friend ostream &operator<<(ostream &os, const estado &estado) {
        os << "Nombre: " << estado.Nombre << " cantidad: " << estado.cantidad;
        return os;
    }

<<<<<<< HEAD
    const string &getNombre() const { return nombre; }

    void setNombre(string &nombre) { estado::nombre = nombre; }
=======
    const string &getNombre() const {
        return Nombre;
    }

    void setNombre(string &nombre) {
        estado::Nombre = nombre;
    }
>>>>>>> 523f801efcf0e0507ebd4732aa9059e0dce9df9c

    unsigned int getCantidad() const { return cantidad; }

    void setCantidad(unsigned int cant) { estado::cantidad = cant; }

    void addCant() {
        int a=estado::cantidad;
        a++;
        estado::cantidad = a;
    }
<<<<<<< HEAD

    bool operator==(const estado &rhs) const { return nombre == rhs.nombre; }
    bool operator!=(const estado &rhs) const { return !(nombre == rhs.nombre); }
=======
    bool operator==(const estado &rhs) const { return Nombre == rhs.Nombre; }

    bool operator!=(const estado &rhs) const { return !(Nombre == rhs.Nombre); }
>>>>>>> 523f801efcf0e0507ebd4732aa9059e0dce9df9c
};
#endif //TP2_PIII_FOLCO_TZVIR_ESTADO_H
