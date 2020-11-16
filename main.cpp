#include <iostream>
#include <string>
#include "Methods/stad.h"
#include "Methods/p_casos.h"
#include "Methods/p_muertes.h"
#include "Methods/casos_edad.h"
#include "Methods/casos_cui.h"

int main(int argc, char *argv[]) {
  // std::cout << "Cantidad de argumentos: " << argc << std::endl;
  // for (int i = 0; i < argc; ++i) {
  //     std::cout << "Valor " << i << "\t" << argv[i] << std::endl;
  // }
    if (argc >= 3) {
        // Suficientes argumentos para seguir
        if (std::string(argv[1]) == "-p_casos") {
            std::cout << "Realizando analisis de casos...";
            try {
                int cant = std::stoi(argv[2]);
                std::cout << " (con cantidad)" << std::endl;
            } catch (...) {
                std::cout << " (sin cantidad)" << std::endl;
            }
           p_casos();
        }

        if (std::string(argv[1]) == "-casos_cui") {
            std::cout << "Realizando analisis de cuidados intensivos...";
            try {
                int cant = std::stoi(argv[2]);
                std::cout << " (con fecha ingresada)" << std::endl;
            } catch (...) {
                std::cout << " (sin fecha ingresada)" << std::endl;
            }
            int cant = std::stoi(argv[2]); //cambiar por fecha
            casos_cui();
        }

        if (std::string(argv[1]) == "-p_muertes") {
            std::cout << "Realizando analisis de muertes...";
            try {
                int cant = std::stoi(argv[2]);
                std::cout << " (con cantidad)" << std::endl;
            } catch (...) {
                std::cout << " (sin cantidad)" << std::endl;
            }
            p_muertes();
        }

        if (std::string(argv[1]) == "-casos_edad") {
            std::cout << "Realizando analisis por edad...";
            try {
                unsigned int cant = std::stoi(argv[2]);
                std::cout << " (con edad de " << cant << " anios)" << std::endl;
            } catch (...) {
                std::cout << "Error: no se ha ingresado la edad requerida." << std::endl;
            }
            unsigned int cant = std::stoi(argv[2]);
            casos_edad(cant);
        }

        if (std::string(argv[1]) == "-stad") {
            std::cout << "Mostrando estadisticas..." << std::endl;
            stad();
        }
    }else{
        std::cout<<"Error: argumentos no ingresados correctamente." << std::endl;
    }
    std::cout << "Finalizado." << std::endl;
    return 0;
}
