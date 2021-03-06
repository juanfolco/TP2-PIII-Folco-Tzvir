#ifndef TP2_PIII_FOLCO_TZVIR_CASOS_EDAD_H
#define TP2_PIII_FOLCO_TZVIR_CASOS_EDAD_H

#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include "Paciente.h"
#include "../Data_sortings/ListCasos.h"
#include "../Data_sortings/mergesort.h"

using namespace std;

/**
 * Mostrará los datos de los casos donde la edad sea ‘años’ (ordenados por Nombre de provincia)
 * @param x variable unsigned int con la que comparo edades
 * @param f variable const string opción argumento ingresado por el usuario
 * @return lista ordenada por provincias con casos donde la edad sea en años
 */

int casos_edad(unsigned int x, const string &f) {
    ifstream input;
    input.open(f.c_str());
    if (input.fail()) {
        cout << "Error: no se puede abrir el archivo o no existe." << endl;
        return 1;
    }
    cout << "Leyendo archivo..." << endl;
    string placeholder, genero, nomprov, nompais, nomdep, nomprove, iniciosint, medicoc, fechaint, cui, fechacui;
    string muerte, fechamuerte, asistenciaresp, financiamiento, estadopac, resumenestado, fechadiag, actualizacion;
    unsigned int total = 0, edad = 0;
    string id;
    string semmedicoc, codigoproving, idprov, iddepart;
    List<Paciente> delaedad;

    /**
     * Lectura del archivo .CSV a través de getline
     */

    while (getline(input, id, ',')) {
        total++;
        getline(input, genero, ','); //Genero

        getline(input, placeholder, '"'); //Captar inicio de comillas
        getline(input, placeholder, '"'); //edad
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
        getline(input, nompais, ','); //pais donde vive
        getline(input, nomprov, ','); //provincia donde vive
        getline(input, nomdep, ','); //departamento donde vive
        getline(input, nomprove, ','); //provincia donde se examina
        getline(input, iniciosint, ','); //fecha de inicio de sintomas (en formato fecha)
        getline(input, medicoc, ','); //fecha donde se consulto con medico? (en formato fecha)
        getline(input, semmedicoc, ','); //semana de consulta con doctor (en numero del 2020)
        getline(input, fechaint, ','); // fecha si es que se interno
        getline(input, cui, ','); //estuvo en cui?
        getline(input, fechacui, ','); //cuando estuvo en cui?
        getline(input, muerte, ','); //murio?
        getline(input, fechamuerte, ','); //si murio, cuando?
        getline(input, asistenciaresp, ','); //estuvo en asistencia respiratoria?
        getline(input, codigoproving, ','); //codigo de la provincia de ingreso
        getline(input, financiamiento, ','); //financiamiento publico o privado
        getline(input, estadopac, ','); //Estado del paciente
        getline(input, resumenestado, ','); //resumen del estado
        getline(input, idprov, ','); //id de provincia donde vive
        getline(input, fechadiag, ','); //fecha de diagnostico
        getline(input, iddepart, ','); //id de departamento donde vive
        getline(input, actualizacion); //ultima actualizacion
        /**
       * Inserción de los datos a la lista
       * @param temppac variable tipo paciente donde presenta todos los datos del paciente
       */
        if (edad == x) {
            Paciente temppac(id, genero, edad, nompais, nomprov, nomdep, nomprove, iniciosint, medicoc, semmedicoc,
                             fechaint, cui, fechacui, muerte, fechamuerte, asistenciaresp, codigoproving,
                             financiamiento, estadopac, resumenestado, idprov, fechadiag, iddepart, actualizacion);
            delaedad.push_front(temppac);
        }
    }

    /**
   * Lista con algoritmo de ordenamiento
   * Se muestra los datos de los casos donde la edad sea ‘años’ (ordenados por Nombre de provincia)
   * @param sorteado = lista con las edades y el algoritmo de ordenamiento para ordenar las provincias
   */

    List<Paciente> sorteado = mergesort(delaedad); //falta saber cómo ordenarlos por provincia
    sorteado.print();
    return 0;

}

#endif //TP2_PIII_FOLCO_TZVIR_CASOS_EDAD_H

