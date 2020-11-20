#ifndef TP2_PIII_FOLCO_TZVIR_STAD_H
#define TP2_PIII_FOLCO_TZVIR_STAD_H
#include <iostream>
#include <fstream>
#include <string.h>
#include <sstream>
#include "Paciente.h"
#include "../Data_sortings/BinaryTreeStad.h"
using namespace std;
int stad(string f){
    ifstream input;
    input.open(f.c_str());
    if(input.fail()){
        cout << "Error: no se puede abrir el archivo o no existe." << endl;
        return 1;
    }
    cout << "Leyendo archivo..." << endl;
    string placeholder;
    int total=0,edad=0,infectados=0,fallecidos=0;
    BinaryTree<unsigned int> rango;
   // Cantidad de infectados por rango etario (rango de 10 años)
   // Cantidad de muertes por rango etario (rango de 10 años)
    while(getline(input, placeholder, ',')){
        total++;
        cout << "Caso " << total<< " " << placeholder << " " <<endl; //ID
        getline(input, placeholder, ',') ; //Genero

        getline(input, placeholder, '"'); //Captar inicio de comillas
        getline(input, placeholder, '"'); //edad
        cout << "Edad: " << placeholder << " " << endl;
        try{
            edad=std::stoi(placeholder); //¿Está la edad puesta?
        }catch(...){
            edad=0; //Si no tiene edad se deja vacío
        }
        getline(input, placeholder, ','); // Captar fin de comillas
        getline(input, placeholder, ',') ; //si la edad son años o meses
        if(placeholder == "\"Meses\""){
            edad=0;
        }
        int mrango=edad/10;
        int minrango=mrango*10;
        int maxrango=mrango*10+9;
        cout<<minrango << " " << maxrango << endl;
        //Acá debe ir un árbol binario de rangos pero todavía queda pendiente la implementación apropiada

        getline(input, placeholder, ',') ; //pais donde vive
        getline(input, placeholder, ',') ; //provincia donde vive
        getline(input, placeholder, ',') ; //departamento donde vive
        getline(input, placeholder, ',') ; //provincia donde se examina
        getline(input, placeholder, ',') ; //fecha de inicio de sintomas (en formato fecha)
        getline(input, placeholder, ',') ; //fecha donde se consulto con medico? (en formato fecha)
        getline(input, placeholder, ',') ; //semana de consulta con doctor (en numero del 2020)
        getline(input, placeholder, ',') ; // fecha si es que se interno
        getline(input, placeholder, ',') ; //estuvo en cui?
        getline(input, placeholder, ',') ; //cuando estuvo en cui?
        getline(input, placeholder, ',') ; //murio?
        cout << "Muerte: " <<  placeholder<< " " <<endl ;
        if(placeholder == "\"SI\"")
            fallecidos++;
        getline(input, placeholder, ',') ; //si murio, cuando?
        getline(input, placeholder, ',') ; //estuvo en asistencia respiratoria?
        getline(input, placeholder, ',') ; //codigo de la provincia de ingreso
        getline(input, placeholder, ',') ; //financiamiento publico o privado
        getline(input, placeholder, ',') ; //Estado del paciente
        getline(input, placeholder, ',') ; //resumen del estado
        if(placeholder == "\"Confirmado\"")
            infectados++;
        cout << "Resumen: " <<  placeholder<< " "  <<endl;
        getline(input, placeholder, ',') ; //id de provincia donde vive
        getline(input, placeholder, ',') ; //fecha de diagnostico
        getline(input, placeholder, ',') ; //id de departamento donde vive
        getline(input, placeholder) ; //ultima actualizacion
        cout<<endl;
    }
    cout << "Cantidad de muestras: " << total << endl;
    cout << "Cantidad de infectados: " << infectados << endl;
    cout << "Cantidad de fallecidos: " << fallecidos << endl;
    cout << "Porcentaje de infectados por cantidad de muestras: " << (infectados*100)/total << "%" << endl;
    cout << "Porcentaje de fallecidos por cantidad de muestras: " << (fallecidos*100)/total << "%" << endl;
    return 0;
}
// , == 44

#endif //TP2_PIII_FOLCO_TZVIR_STAD_H
