
#ifndef TP2_PIII_FOLCO_TZVIR_P_MUERTES_H
#define TP2_PIII_FOLCO_TZVIR_P_MUERTES_H

#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include <sstream>
#include "Paciente.h"
#include "estado.h"
#include "../Data_sortings/ListCasos.h"

using namespace std;


int p_muertes() {
    ifstream input;
    input.open("..\\Test_files\\Covid19Casos-10.csv");
    if (input.fail()) {
        cout << "Error: no se puede abrir el archivo o no existe." << endl;
        return 1;
    }
    cout << "Leyendo archivo..." << endl;
    string placeholder, nomprov;
    int total = 0;
    List<estado> provincias;
    while (getline(input, placeholder, ',')) {
        total++;
        cout << "Caso " << total << " " << placeholder << " " << endl; //ID
        getline(input, placeholder, ','); //el Dato no importa
        getline(input, placeholder, ','); //edad
        getline(input, placeholder, ','); //si la edad son años o meses
        getline(input, placeholder, ','); //pais donde vive
        getline(input, nomprov, ','); //provincia donde vive
        cout << "Provincia: " << nomprov << " " << endl;
        getline(input, placeholder, ','); //departamento donde vive
        getline(input, placeholder, ','); //provincia donde se examina
        getline(input, placeholder, ','); //fecha de inicio de sintomas (en formato fecha)
        getline(input, placeholder, ','); //fecha donde se consulto con medico? (en formato fecha)
        getline(input, placeholder, ','); //semana de consulta con doctor (en numero del 2020)
        getline(input, placeholder, ','); // fecha si es que se interno
        getline(input, placeholder, ','); //estuvo en cui?
        getline(input, placeholder, ','); //cuando estuvo en cui?
        getline(input, placeholder, ','); //murio?
        if (placeholder == "\"SI\"") {
            estado temp(nomprov, 1);
           // provincias.find(temp.getNombre());
            provincias.push_front(temp);
            //la lista se arma pero hay que ver la manera de que no se duplique
        }
        cout<< "Se murio? " << placeholder << endl;
        getline(input, placeholder, ','); //si murio, cuando?
        getline(input, placeholder, ','); //estuvo en asistencia respiratoria?
        getline(input, placeholder, ','); //codigo de la provincia de ingreso
        getline(input, placeholder, ','); //financiamiento publico o privado
        getline(input, placeholder, ','); //Estado del paciente
        getline(input, placeholder, ','); //resumen del estado
        cout << "Estado: " << placeholder << " " << endl;
        getline(input, placeholder, ','); //id de provincia donde vive
        cout << "ID provincial: " << placeholder << " " << endl;
        getline(input, placeholder, ','); //fecha de diagnostico
        getline(input, placeholder, ','); //id de departamento donde vive
        getline(input, placeholder); //ultima actualizacion
        cout << endl;
    }
    provincias.print();
    return 0;
}
#endif //TP2_PIII_FOLCO_TZVIR_P_MUERTES_H
