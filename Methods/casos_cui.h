#ifndef TP2_PIII_FOLCO_TZVIR_CASOS_CUI_H
#define TP2_PIII_FOLCO_TZVIR_CASOS_CUI_H

#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include <sstream>
#include "Paciente.h"
#include "../Data_sortings/HashMap.h"

using namespace std;

int casos_cui() { // tiene que incluirse un Fecha
    ifstream input;
    input.open("..\\Test_files\\Covid19Casos-10.csv");
    if (input.fail()) {
        cout << "Error: no se puede abrir el archivo o no existe." << endl;
        return 1;
    }
    cout << "Leyendo archivo..." << endl;
    string placeholder, nomprov;
    int total = 0, edad=0;
    while (getline(input, placeholder, ',')) {
        total++;
        cout << "Caso " << total << " " << placeholder << " " << endl; //ID
        getline(input, placeholder, ','); //el Dato no importa
        getline(input, placeholder, ','); //edad
        stringstream temp(placeholder);
        temp >> edad;
        getline(input, placeholder, ','); //si la edad son años o meses
        if (placeholder == "\"Meses\"") {
            edad = 0;
        }
        getline(input, placeholder, ','); //pais donde vive
        getline(input, nomprov, ','); //provincia donde vive
        getline(input, placeholder, ','); //departamento donde vive
        getline(input, placeholder, ','); //provincia donde se examina
        getline(input, placeholder, ','); //fecha de inicio de sintomas (en formato fecha)
        getline(input, placeholder, ','); //fecha donde se consulto con medico? (en formato fecha)
        getline(input, placeholder, ','); //semana de consulta con doctor (en numero del 2020)
        getline(input, placeholder, ','); // fecha si es que se interno
        getline(input, placeholder, ','); //estuvo en cui?
        cout << "CUI? " << total << " " << placeholder << " " << endl;
        getline(input, placeholder, ','); //cuando estuvo en cui?
        getline(input, placeholder, ','); //murio?
        getline(input, placeholder, ','); //si murio, cuando?
        getline(input, placeholder, ','); //estuvo en asistencia respiratoria?
        getline(input, placeholder, ','); //codigo de la provincia de ingreso
        getline(input, placeholder, ','); //financiamiento publico o privado
        getline(input, placeholder, ','); //Estado del paciente
        getline(input, placeholder, ','); //resumen del estado
        getline(input, placeholder, ','); //id de provincia donde vive
        getline(input, placeholder, ','); //fecha de diagnostico
        getline(input, placeholder, ','); //id de departamento donde vive
        getline(input, placeholder); //ultima actualizacion
        cout << endl;
    }
    return 0;

}
#endif //TP2_PIII_FOLCO_TZVIR_CASOS_CUI_H
