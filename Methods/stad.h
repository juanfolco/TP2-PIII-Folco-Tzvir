#ifndef TP2_PIII_FOLCO_TZVIR_STAD_H
#define TP2_PIII_FOLCO_TZVIR_STAD_H
#include <iostream>
#include <fstream>
#include <string.h>
#include <sstream>
using namespace std;
int stad(){
    ifstream input;
    input.open("..\\Covid19Casos-1000.csv");
    if(input.fail()){
        cout << "Error: no se puede abrir el archivo o no existe." << endl;
        return 1;
    }
    cout << "Por ahora... bien?" << endl;
    string placeholder;
    int total=-1,edad=0,infectados=0,fallecidos=0;
   // Cantidad de infectados por rango etario (rango de 10 años)
   // Cantidad de muertes por rango etario (rango de 10 años)
    while(getline(input, placeholder, ',')){
        total++;
        cout << "Caso " << total<< " " << placeholder << " " <<endl; //ID

        getline(input, placeholder, ',') ; //el Dato no importa

        getline(input, placeholder, ',') ; //edad
        cout << "Edad: " << placeholder << " " <<endl ;
        stringstream temp(placeholder);
        temp >> edad;
        getline(input, placeholder, ',') ; //si la edad son años o meses, ignorar

        getline(input, placeholder, ',') ; //pais donde vive

        getline(input, placeholder, ',') ; //provincia donde vive
        cout << "Provincia: " <<  placeholder<< " "  <<endl;

        getline(input, placeholder, ',') ; //departamento donde vive
        cout << "Dato: " <<  placeholder<< " "  <<endl;
        getline(input, placeholder, ',') ; //provincia donde se examina
        cout << "Dato: " <<  placeholder<< " " <<endl ;
        getline(input, placeholder, ',') ; //fecha de inicio de sintomas (en formato fecha)
        cout << "Dato: " <<  placeholder<< " " <<endl ;
        getline(input, placeholder, ',') ; //fecha donde se consulto con medico? (en formato fecha)
        cout << "Dato: " <<  placeholder<< " "  <<endl;
        getline(input, placeholder, ',') ; //semana de consulta con doctor (en numero del 2020)
        cout << "Dato: " <<  placeholder<< " " <<endl ;
        getline(input, placeholder, ',') ; // fecha si es que se interno
        cout << "Dato: " <<  placeholder<< " " <<endl ;
        getline(input, placeholder, ',') ; //estuvo en cui?
        cout << "Dato: " <<  placeholder<< " " <<endl ;
        getline(input, placeholder, ',') ; //cuando estuvo en cui?
        cout << "Dato: " <<  placeholder<< " " <<endl ;
        getline(input, placeholder, ',') ; //murio?
        cout << "Dato: " <<  placeholder<< " " <<endl ;
        if(placeholder == "\"SI\"")
            fallecidos++;
        getline(input, placeholder, ',') ; //si murio, cuando?
        cout << "Dato: " <<  placeholder<< " " <<endl ;
        getline(input, placeholder, ',') ; //estuvo en asistencia respiratoria?
        cout << "Dato: " <<  placeholder<< " " <<endl ;
        getline(input, placeholder, ',') ; //codigo de la provincia de ingreso
        cout << "Dato: " <<  placeholder<< " " <<endl ;
        getline(input, placeholder, ',') ; //financiamiento publico o privado
        cout << "Dato: " <<  placeholder<< " " <<endl ;
        getline(input, placeholder, ',') ; //Estado del paciente
        cout << "Dato: " <<  placeholder<< " " <<endl ;
        getline(input, placeholder, ',') ; //resumen del estado
        if(placeholder == "\"Confirmado\"")
            infectados++;
        cout << "Dato: " <<  placeholder<< " "  <<endl;
        getline(input, placeholder, ',') ; //id de provincia donde vive
        cout << "Dato: " <<  placeholder<< " "  <<endl;
        getline(input, placeholder, ',') ; //fecha de diagnostico
        cout << "Dato: " <<  placeholder<< " "  <<endl;
        getline(input, placeholder, ',') ; //id de departamento donde vive
        cout << "Dato: " <<  placeholder<< " "  <<endl;
        getline(input, placeholder) ; //ultima actualizacion
        cout << "Dato: " <<  placeholder<< " " << endl << endl;
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
