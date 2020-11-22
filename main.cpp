#include <iostream>
#include <string>
#include "Methods/stad.h"
#include "Methods/p_casos.h"
#include "Methods/p_muertes.h"
#include "Methods/casos_edad.h"
#include "Methods/casos_cui.h"

/**
 * linea de comandos para realizar determinadas tareas. El archivo se lee y procesa
 * para brindar información según los argumentos pasados.
 * @param argc cantidad de argumentos
 * @param argv valor de argumento
 * @return
 */

int main(int argc, char *argv[]) {
    if (argc >= 3) {
        // Suficientes argumentos para seguir
        if (std::string(argv[1]) == "-p_casos") {
            std::cout << "Realizando analisis de casos...";
            int cant = 0;
            std::string file;
            try {
                cant = std::stoi(argv[2]);
                std::cout << " (con cantidad)" << std::endl;
                file = std::string(argv[3]);
            } catch (...) {
                std::cout << " (sin cantidad)" << std::endl;
                file = std::string(argv[2]);
                cant = 0;
            }
            p_casos(cant, file);
        }

        if (std::string(argv[1]) == "-casos_cui") {
            std::cout << "Realizando analisis de cuidados intensivos...";
            std::string fecha, file;
            try {
                fecha = std::string(argv[2]);
                file = std::string(argv[3]);
                std::cout << " (con fecha ingresada)" << std::endl;
            } catch (...) {
                std::cout << " (sin fecha ingresada)" << std::endl;
                file = std::string(argv[2]);
                fecha = std::string("1970-01-01");
            }
            casos_cui(fecha, file);
        }

        if (std::string(argv[1]) == "-p_muertes") {
            std::cout << "Realizando analisis de muertes...";
            std::string file;
            int cant = 0;
            try {
                cant = std::stoi(argv[2]);
                std::cout << " (con cantidad)" << std::endl;
                file = std::string(argv[3]);
            } catch (...) {
                std::cout << " (sin cantidad)" << std::endl;
                file = std::string(argv[2]);
            }
            p_muertes(cant, file);
        }

        if (std::string(argv[1]) == "-casos_edad") {
            std::cout << "Realizando analisis por edad...";
            std::string file;
            try {
                unsigned int cant = std::stoi(argv[2]);
                std::cout << " (con edad de " << cant << " anios)" << std::endl;
                file = std::string(argv[3]);
            } catch (...) {
                std::cout << "Error: no se ha ingresado la edad requerida." << std::endl;
            }
            unsigned int cant = std::stoi(argv[2]);
            casos_edad(cant, file);
        }

        if (std::string(argv[1]) == "-stad") {
            std::cout << "Mostrando estadisticas..." << std::endl;
            std::string file = std::string(argv[2]);
            stad(file);
        }
    } else {
        std::cout << "Error: argumentos no ingresados correctamente." << std::endl;
    }
    std::cout << "Finalizado." << std::endl;
    return 0;
}