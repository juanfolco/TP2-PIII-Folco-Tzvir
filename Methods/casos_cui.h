#ifndef TP2_PIII_FOLCO_TZVIR_CASOS_CUI_H
#define TP2_PIII_FOLCO_TZVIR_CASOS_CUI_H

#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include <sstream>
#include "Paciente.h"
#include "../Data_sortings/ListCasos.h"
#include "../Data_sortings/mergesortfecha.h"
#include <bits/stdc++.h>

using namespace std;

int casos_cui(const string &x, const string &f) {
    ifstream input;
    input.open(f.c_str());
    //string x="2020-03-11"; el posible orden?
    if (input.fail()) {
        cout << "Error: no se puede abrir el archivo o no existe." << endl;
        return 1;
    }
    cout << "Leyendo archivo..." << endl;
    string placeholder, genero, nomprov, nompais, nomdep, nomprove, iniciosint, medicoc, fechaint, cui, fechacui;
    string muerte, fechamuerte, asistenciaresp, financiamiento, estadopac, resumenestado, fechadiag, actualizacion;
    int total = 0, edad = 0;
    string id, semmedicoc, codigoproving, idprov, iddepart;
    List<Paciente> delcui;
    while (getline(input, id, ',')) {
        total++;
        cout << "Caso " << total << " " << id << " " << endl; //ID
        getline(input, genero, ','); //Genero

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
        cout << endl;
        if (cui == "\"SI\"") {
            Paciente temppac(id, genero, edad, nompais, nomprov, nomdep, nomprove, iniciosint, medicoc, semmedicoc,
                             fechaint, cui, fechacui, muerte, fechamuerte, asistenciaresp, codigoproving,
                             financiamiento, estadopac, resumenestado, idprov, fechadiag, iddepart, actualizacion);
            delcui.push_front(temppac);
        }
    }
    List<Paciente> sorteado = mergesortcui(delcui);

    if (x == "1970-01-01") {
        sorteado.print();
        return 0;
    }
    string aux = "\"" + x + "\"";
    sorteado.printf(aux);
    return 0;
}

#endif //TP2_PIII_FOLCO_TZVIR_CASOS_CUI_H
