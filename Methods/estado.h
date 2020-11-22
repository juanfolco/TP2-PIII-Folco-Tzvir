#ifndef TP2_PIII_FOLCO_TZVIR_ESTADO_H
#define TP2_PIII_FOLCO_TZVIR_ESTADO_H
#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include <utility>

using namespace std;

/**
 * Clase con parámetros para la información
 * relacionada a provincias con mayor cantidad de muertes y mayor cantidad de contagiados
 */

class estado {
private:
    string Nombre;
    unsigned int cantidad;
public:
    estado(string nombre, unsigned int cantidad) : Nombre(std::move(nombre)), cantidad(cantidad) {}

    friend ostream &operator<<(ostream &os, const estado &estado) {
        os << "Nombre: " << estado.Nombre << " cantidad: " << estado.cantidad;
        return os;
    }

    const string &getNombre() const { return Nombre; }
    void setNombre(string &nombre) { estado::Nombre = nombre; }

    unsigned int getCantidad() const { return cantidad; }
    void setCantidad(unsigned int cant) { estado::cantidad = cant; }

    /**
     * Incrementa la cantidad de veces que se presenta una determinada variable
     */
    void addCant() {
        int a=estado::cantidad;
        a++;
        estado::cantidad = a;
    }

    bool operator==(const estado &rhs) const { return Nombre == rhs.Nombre; }
    bool operator!=(const estado &rhs) const { return !(Nombre == rhs.Nombre); }

};
#endif //TP2_PIII_FOLCO_TZVIR_ESTADO_H
