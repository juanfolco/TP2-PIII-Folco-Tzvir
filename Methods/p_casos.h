#ifndef TP2_PIII_FOLCO_TZVIR_P_CASOS_H
#define TP2_PIII_FOLCO_TZVIR_P_CASOS_H

#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include "estado.h"
#include "../Data_sortings/ListCasos.h"
#include "../Data_sortings/mergesort_num.h"

using namespace std;

/**
 * Muestra las n primeras provincias con más contagios ordenadas
de más a menos. Si n no es pasado, se mostrarán todas las provincias.
 * @param n variable int que me permitirá la muestra de las primeras provincias con mayor contagio
 * @param f variable string opción argumento ingresado por el usuario
 * @return lista de provincias ordenadas de más a menos
 */

int p_casos(int n, const string &f) {
    ifstream input;
    input.open(f.c_str()); //necesario para convertirlo a algo leible del file.open
    if (input.fail()) {
        cout << "Error: no se puede abrir el archivo o no existe." << endl;
        return 1;
    }
    cout << "Leyendo archivo..." << endl;
    string placeholder, nomprov;
    List<estado> provincias;

    /**
   * Lectura del archivo .CSV a través de getline
   */

    while (getline(input, placeholder, ',')) { //mientras haya algo que leer
        getline(input, placeholder, ','); //el Dato no importa
        getline(input, placeholder, ','); //edad
        getline(input, placeholder, ','); //si la edad son años o meses
        getline(input, placeholder, ','); //pais donde vive
        getline(input, nomprov, ','); //provincia donde vive
        getline(input, placeholder, ','); //departamento donde vive
        getline(input, placeholder, ','); //provincia donde se examina
        getline(input, placeholder, ','); //fecha de inicio de sintomas (en formato fecha)
        getline(input, placeholder, ','); //fecha donde se consulto con medico? (en formato fecha)
        getline(input, placeholder, ','); //semana de consulta con doctor (en numero del 2020)
        getline(input, placeholder, ','); // fecha si es que se interno
        getline(input, placeholder, ','); //estuvo en cui?
        getline(input, placeholder, ','); //cuando estuvo en cui?
        getline(input, placeholder, ','); //murio?
        getline(input, placeholder, ','); //si murio, cuando?
        getline(input, placeholder, ','); //estuvo en asistencia respiratoria?
        getline(input, placeholder, ','); //codigo de la provincia de ingreso
        getline(input, placeholder, ','); //financiamiento publico o privado
        getline(input, placeholder, ','); //Estado del paciente
        getline(input, placeholder, ','); //resumen del estado

        /**
        * Generación de lista para comparar provincias
        * En caso de que la provincia ya se encuentre, se incrementa el número. En caso contrario,
        * se forma un nuevo contador
        * @param temp(nomprov,cantidad) = lista donde se almacena el Nombre de las provincias
        * @param nomprov = nombres de las provincias
        */

        if (placeholder == "\"Confirmado\"") {
            estado temp(nomprov, 1);
            provincias.start();
            while (!provincias.isEnd()) {
                if (provincias.getActual()->getData().getNombre() == nomprov) {
                    provincias.getActual()->getData().addCant();
                    provincias.end();
                } else {
                    provincias.next();
                    if (provincias.isEnd())
                        provincias.push_front(temp); //tabla de hash
                }
            }
            if (provincias.isEmpty())
                provincias.push_front(temp);
        }
        getline(input, placeholder, ','); //id de provincia donde vive
        getline(input, placeholder, ','); //fecha de diagnostico
        getline(input, placeholder, ','); //id de departamento donde vive
        getline(input, placeholder); //ultima actualizacion
    }

    /**
    * Lista con algoritmo de ordenamiento
    * Si no se presenta variable n, imprime todas las provincias. En caso contrario, se muestra provincias
    * ordenadas de más a menos
    * @param final = lista con las provincias y el algoritmo de ordenamiento para ordenar las mismas
    */

    List<estado> final = mergesortnum(provincias);
    if (n == 0) {
        final.print(); //sin n
        return 0;
    }
    final.printn(n); //con n
    return 0;
}

#endif //TP2_PIII_FOLCO_TZVIR_P_CASOS_H
