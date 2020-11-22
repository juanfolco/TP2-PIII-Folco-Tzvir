#ifndef TP2_PIII_FOLCO_TZVIR_STAD_H
#define TP2_PIII_FOLCO_TZVIR_STAD_H

#include <iostream>
#include <fstream>
#include <string.h>
#include <sstream>
#include "Paciente.h"
#include "../Data_sortings/AVLTree.h"
#include "../Data_sortings/rango.h"

using namespace std;
<<<<<<< HEAD
/**
 * Permite la muestra de información estadística
 * @param f = variable string opción argumento ingresado por el usuario
 * @return árbol binario y muestra de información estadística
 */
=======

>>>>>>> 523f801efcf0e0507ebd4732aa9059e0dce9df9c
int stad(string f) {
    ifstream input;
    input.open(f.c_str());
    if (input.fail()) {
        cout << "Error: no se puede abrir el archivo o no existe." << endl;
        return 1;
    }
    cout << "Leyendo archivo..." << endl;
    string placeholder;
    int total = 0, edad = 0, infectados = 0, fallecidos = 0;
    AVLTree<rango> arboldeinfectados, arboldefallecidos;
<<<<<<< HEAD

    /**
     * Lectura del archivo .CSV a través de getline
     */

=======
>>>>>>> 523f801efcf0e0507ebd4732aa9059e0dce9df9c
    while (getline(input, placeholder, ',')) {
        total++;
        cout << "Caso " << total << " " << placeholder << " " << endl; //ID
        getline(input, placeholder, ','); //Genero

        getline(input, placeholder, '"'); //Captar inicio de comillas
        getline(input, placeholder, '"'); //edad
        cout << "Edad: " << placeholder << " " << endl;
        try {
            edad = std::stoi(placeholder); //¿Está la edad puesta?
        } catch (...) {
            edad = 0; //Si no tiene edad se deja vacío
        }
        getline(input, placeholder, ','); // Captar fin de comillas
        getline(input, placeholder, ','); //si la edad son años o meses
        if (placeholder == "\"Meses\"") {
            edad = 0;
        }
<<<<<<< HEAD

        /**
         * Aplicación de variables para árbol binario balanceado
         * @param minrango = edad mínima del rango etario
         * @param maxrango = edad máxima del rango etario
         * @param dato(minrango, maxrango, cantidad) = dato de clase rango que va a formar parte de árbol balanceado
         */

        int mrango = edad / 10;
        int minrango = mrango * 10;
        int maxrango = mrango * 10 + 9;
        rango dato(minrango, maxrango, 1);
        cout << minrango << " " << maxrango << endl;

=======
        int mrango = edad / 10;
        int minrango = mrango * 10;
        int maxrango = mrango * 10 + 9;
        rango dato(minrango, maxrango, 1);
        cout << minrango << " " << maxrango << endl;
        //Acá debe ir un árbol binario de rangos pero todavía queda pendiente la implementación apropiada

>>>>>>> 523f801efcf0e0507ebd4732aa9059e0dce9df9c
        getline(input, placeholder, ','); //pais donde vive
        getline(input, placeholder, ','); //provincia donde vive
        getline(input, placeholder, ','); //departamento donde vive
        getline(input, placeholder, ','); //provincia donde se examina
        getline(input, placeholder, ','); //fecha de inicio de sintomas (en formato fecha)
        getline(input, placeholder, ','); //fecha donde se consulto con medico? (en formato fecha)
        getline(input, placeholder, ','); //semana de consulta con doctor (en numero del 2020)
        getline(input, placeholder, ','); // fecha si es que se interno
        getline(input, placeholder, ','); //estuvo en cui?
        getline(input, placeholder, ','); //cuando estuvo en cui?
        getline(input, placeholder, ','); //murio?
        cout << "Muerte: " << placeholder << " " << endl;
<<<<<<< HEAD

        /**
         * Condicional que en caso de que haya un paciente fallecido en el archivo .CSV realiza:
         * Cuenta de pacientes fallecidos
         * Generación árbol binario balanceado para ordenar cantidad de fallecidos por rango etario
         * Se agrega dato a árbol binario balanceado. En caso de variables iguales, se procede a la búsqueda
         * y incremento de la cantidad
         */

=======
>>>>>>> 523f801efcf0e0507ebd4732aa9059e0dce9df9c
        if (placeholder == "\"SI\"") {
            fallecidos++;
            try {
                arboldefallecidos.put(dato);
            } catch (...) {
                arboldefallecidos.search(dato).addCantidad();
            }
        }
        getline(input, placeholder, ','); //si murio, cuando?
        getline(input, placeholder, ','); //estuvo en asistencia respiratoria?
        getline(input, placeholder, ','); //codigo de la provincia de ingreso
        getline(input, placeholder, ','); //financiamiento publico o privado
        getline(input, placeholder, ','); //Estado del paciente
        getline(input, placeholder, ','); //resumen del estado
<<<<<<< HEAD

        /**
        * Condicional que en caso de que haya un paciente infectado en el archivo .CSV realiza:
        * Generación árbol binario balanceado para ordenar cantidad de infectados por rango etario
        * Se agrega dato a árbol binario balanceado. En caso de variables iguales, se procede a la búsqueda
        * y incremento de la cantidad
        */

=======
>>>>>>> 523f801efcf0e0507ebd4732aa9059e0dce9df9c
        if (placeholder == "\"Confirmado\"") {
            infectados++;
            try {
                arboldeinfectados.put(dato);
            } catch (...) {
                arboldeinfectados.search(dato).addCantidad();
            }
        }
        cout << "Resumen: " << placeholder << " " << endl;
        getline(input, placeholder, ','); //id de provincia donde vive
        getline(input, placeholder, ','); //fecha de diagnostico
        getline(input, placeholder, ','); //id de departamento donde vive
        getline(input, placeholder); //ultima actualizacion
        cout << endl;
    }

    /**
     * Muestra de información estadística
     */

    cout << "Cantidad de muestras: " << total << endl;
    cout << "Cantidad de infectados: " << infectados << endl;
    cout << "Cantidad de fallecidos: " << fallecidos << endl;
    cout << "Porcentaje de infectados por cantidad de muestras: " << (infectados * 100) / total << "%" << endl;
    cout << "Porcentaje de fallecidos por cantidad de muestras: " << (fallecidos * 100) / total << "%" << endl;
    cout << "Cantidad de infectados por rango etario:" << endl;
    arboldeinfectados.print();
    cout << endl;
    cout << "Cantidad de fallecidos por rango etario:" << endl;
    arboldefallecidos.print();
    cout << endl;
    return 0;
}

#endif //TP2_PIII_FOLCO_TZVIR_STAD_H