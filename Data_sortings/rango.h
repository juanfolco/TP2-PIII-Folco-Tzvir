#ifndef TP2_PIII_FOLCO_TZVIR_RANGO_H
#define TP2_PIII_FOLCO_TZVIR_RANGO_H

#include <ostream>

/**
 * Clase con parámetros para la información estadística Cantidad de infectados por rango etario
 * (rango de 10 años) y Cantidad de muertes por rango etario (rango de 10 años)
 */

class rango {
private:
    int minrango;
    int maxrango;
    int cantidad;
public:
    rango(int minrango, int maxrango, int cantidad) : minrango(minrango), maxrango(maxrango), cantidad(cantidad) {}

<<<<<<< HEAD
    int getMinrango() const {return minrango; }
=======
    int getMinrango() const { return minrango; }

>>>>>>> c8a104e65aeff0d6a2992f571860def903ce14df
    void setMinrango(int minrango) { rango::minrango = minrango; }

    int getMaxrango() const { return maxrango; }
    void setMaxrango(int maxrango) { rango::maxrango = maxrango; }

    int getCantidad() const { return cantidad; }
    void setCantidad(int cantidad) { rango::cantidad = cantidad; }
<<<<<<< HEAD
=======

>>>>>>> c8a104e65aeff0d6a2992f571860def903ce14df

    friend std::ostream &operator<<(std::ostream &os, const rango &rango) {
        os << rango.minrango << "-" << rango.maxrango << " Casos: " << rango.cantidad;
        return os;
    }

    bool operator==(const rango &rhs) const {
        return minrango == rhs.minrango &&
               maxrango == rhs.maxrango;
    }

    bool operator!=(const rango &rhs) const { return !(rhs == *this); }

    bool operator<(const rango &rhs) const {
        if (minrango < rhs.minrango)
            return true;
        if (rhs.minrango < minrango)
            return false;
        return maxrango < rhs.maxrango;
    }

<<<<<<< HEAD
    bool operator>(const rango &rhs) const { return rhs < *this;}
=======
    bool operator>(const rango &rhs) const { return rhs < *this; }
>>>>>>> c8a104e65aeff0d6a2992f571860def903ce14df

    bool operator<=(const rango &rhs) const { return !(rhs < *this); }

    bool operator>=(const rango &rhs) const { return !(*this < rhs); }

    /**
     * Incrementa la cantidad de veces que se presenta una determinada variable
     */
    void addCantidad() {
        int x = rango::cantidad;
        x++;
        rango::cantidad = x;
    }
<<<<<<< HEAD

=======
>>>>>>> c8a104e65aeff0d6a2992f571860def903ce14df
};

#endif //TP2_PIII_FOLCO_TZVIR_RANGO_H
