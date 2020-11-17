//
// Created by Folkius on 6/11/2020.
//

#ifndef TP2_PIII_FOLCO_TZVIR_CASOS_EDAD_H
#define TP2_PIII_FOLCO_TZVIR_CASOS_EDAD_H
#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include <sstream>
#include "Paciente.h"
#include "../Data_sortings/HashMap.h"
#include "../Data_sortings/ListCasos.h"

using namespace std;


int casos_edad(unsigned int x) {
    ifstream input;
    input.open("..\\Test_files\\Covid19Casos-1000.csv");
    if (input.fail()) {
        cout << "Error: no se puede abrir el archivo o no existe." << endl;
        return 1;
    }
    cout << "Leyendo archivo..." << endl;
    string placeholder,genero,nomprov,nompais,nomdep,nomprove,iniciosint,medicoc,fechaint,cui,fechacui;
    string muerte,fechamuerte,asistenciaresp,financiamiento,estadopac,resumenestado,fechadiag, actualizacion;
    int total = 0, edad=0,id=0,semmedicoc=0,codigoproving=0,idprov=0,iddepart=0;
    List<Paciente> delaedad;
    while (getline(input, placeholder, ',')) {
        total++;
        stringstream temp(placeholder);
        temp >> id;
        cout << "Caso " << total << " " << placeholder << " " << endl; //ID
        getline(input, genero, ','); //Genero
        getline(input, placeholder, ','); //edad
        cout << "Edad: " << placeholder << " " << endl;
        stringstream temp2(placeholder);
        //edad=std::stoi(placeholder);
        temp2 >> edad;
        getline(input, placeholder, ','); //si la edad son años o meses
        if (placeholder == "\"Meses\"") {
            // solucionar el stringstream que no toma bien
        }
        getline(input, nompais, ','); //pais donde vive
        getline(input, nomprov, ','); //provincia donde vive
        getline(input, nomdep, ','); //departamento donde vive
        getline(input, nomprove, ','); //provincia donde se examina
        getline(input, iniciosint, ','); //fecha de inicio de sintomas (en formato fecha)
        getline(input, medicoc, ','); //fecha donde se consulto con medico? (en formato fecha)
        getline(input, placeholder, ','); //semana de consulta con doctor (en numero del 2020)
        stringstream temp3(placeholder);
        temp3 >> semmedicoc;
        getline(input, fechaint, ','); // fecha si es que se interno
        getline(input, cui, ','); //estuvo en cui?
        getline(input, fechacui, ','); //cuando estuvo en cui?
        getline(input, muerte, ','); //murio?
        getline(input, fechamuerte, ','); //si murio, cuando?
        getline(input, asistenciaresp, ','); //estuvo en asistencia respiratoria?
        getline(input, placeholder, ','); //codigo de la provincia de ingreso
        stringstream temp4(placeholder);
        temp4 >> codigoproving;
        getline(input, financiamiento, ','); //financiamiento publico o privado
        getline(input, estadopac, ','); //Estado del paciente
        getline(input, resumenestado, ','); //resumen del estado
        getline(input, placeholder, ','); //id de provincia donde vive
        stringstream temp5(placeholder);
        temp5 >> idprov;
        getline(input, fechadiag, ','); //fecha de diagnostico
        getline(input, placeholder, ','); //id de departamento donde vive
        stringstream temp6(placeholder);
        temp6 >> iddepart;
        getline(input, actualizacion); //ultima actualizacion
        cout << endl;
        if(edad == x){
            Paciente temppac(id,genero,edad,nompais,nomprov,nomdep,nomprove,iniciosint,medicoc,semmedicoc,fechaint,cui,fechacui,muerte,fechamuerte,asistenciaresp,codigoproving,financiamiento,estadopac,resumenestado,idprov,fechadiag,iddepart,actualizacion);
            delaedad.push_front(temppac);
        }
    }delaedad.print();
   return 0;

}
#endif //TP2_PIII_FOLCO_TZVIR_CASOS_EDAD_H
