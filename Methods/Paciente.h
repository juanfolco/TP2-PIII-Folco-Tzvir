#ifndef TP2_PIII_FOLCO_TZVIR_PACIENTE_H
#define TP2_PIII_FOLCO_TZVIR_PACIENTE_H
#include <iostream>
#include <fstream>
#include <string.h>
#include <sstream>
#include <string>
#include "fecha.cpp"
class Paciente {
private:
    int id;
    char genero;
    int edad; //en meses
    std::string pais;
    std::string provincia;
    std::string departamento;
    std::string provinciaC;
    Fecha sintomas;
    Fecha inicio_caso;
    int semana_inicio;
    Fecha internacion;
    bool CUI;
    Fecha CUIF;
    bool fallecido;
    Fecha fallecimiento;
    bool asistenciaresp;
    int idprovinciacarga;
    std::string financiamiento;
    std::string clasificacion;
    std::string resumen;
    int idprovinciares;
    Fecha diagnostico;
    int iddepartamentores;
    Fecha actualizacion;
public:
    Paciente() {}

    Paciente(int id, int edad, bool fallecido, const std::string &resumen) : id(id), edad(edad), fallecido(fallecido),
                                                                             resumen(resumen) {} //para stad

    int getId() const {
        return id;
    }

    void setId(int id) {
        Paciente::id = id;
    }

    char getGenero() const {
        return genero;
    }

    void setGenero(char genero) {
        Paciente::genero = genero;
    }

    int getEdad() const {
        return edad;
    }

    void setEdad(int edad) {
        Paciente::edad = edad;
    }

    const std::string &getPais() const {
        return pais;
    }

    void setPais(const std::string &pais) {
        Paciente::pais = pais;
    }

    const std::string &getProvincia() const {
        return provincia;
    }

    void setProvincia(const std::string &provincia) {
        Paciente::provincia = provincia;
    }

    const std::string &getDepartamento() const {
        return departamento;
    }

    void setDepartamento(const std::string &departamento) {
        Paciente::departamento = departamento;
    }

    const std::string &getProvinciaC() const {
        return provinciaC;
    }

    void setProvinciaC(const std::string &provinciaC) {
        Paciente::provinciaC = provinciaC;
    }

    const Fecha &getSintomas() const {
        return sintomas;
    }

    void setSintomas(const Fecha &sintomas) {
        Paciente::sintomas = sintomas;
    }

    const Fecha &getInicioCaso() const {
        return inicio_caso;
    }

    void setInicioCaso(const Fecha &inicioCaso) {
        inicio_caso = inicioCaso;
    }

    int getSemanaInicio() const {
        return semana_inicio;
    }

    void setSemanaInicio(int semanaInicio) {
        semana_inicio = semanaInicio;
    }

    const Fecha &getInternacion() const {
        return internacion;
    }

    void setInternacion(const Fecha &internacion) {
        Paciente::internacion = internacion;
    }

    bool isCui() const {
        return CUI;
    }

    void setCui(bool cui) {
        CUI = cui;
    }

    const Fecha &getCuif() const {
        return CUIF;
    }

    void setCuif(const Fecha &cuif) {
        CUIF = cuif;
    }

    bool isFallecido() const {
        return fallecido;
    }

    void setFallecido(bool fallecido) {
        Paciente::fallecido = fallecido;
    }

    const Fecha &getFallecimiento() const {
        return fallecimiento;
    }

    void setFallecimiento(const Fecha &fallecimiento) {
        Paciente::fallecimiento = fallecimiento;
    }

    bool isAsistenciaresp() const {
        return asistenciaresp;
    }

    void setAsistenciaresp(bool asistenciaresp) {
        Paciente::asistenciaresp = asistenciaresp;
    }

    int getIdprovinciacarga() const {
        return idprovinciacarga;
    }

    void setIdprovinciacarga(int idprovinciacarga) {
        Paciente::idprovinciacarga = idprovinciacarga;
    }

    const std::string &getFinanciamiento() const {
        return financiamiento;
    }

    void setFinanciamiento(const std::string &financiamiento) {
        Paciente::financiamiento = financiamiento;
    }

    const std::string &getClasificacion() const {
        return clasificacion;
    }

    void setClasificacion(const std::string &clasificacion) {
        Paciente::clasificacion = clasificacion;
    }

    const std::string &getResumen() const {
        return resumen;
    }

    void setResumen(const std::string &resumen) {
        Paciente::resumen = resumen;
    }

    int getIdprovinciares() const {
        return idprovinciares;
    }

    void setIdprovinciares(int idprovinciares) {
        Paciente::idprovinciares = idprovinciares;
    }

    const Fecha &getDiagnostico() const {
        return diagnostico;
    }

    void setDiagnostico(const Fecha &diagnostico) {
        Paciente::diagnostico = diagnostico;
    }

    int getIddepartamentores() const {
        return iddepartamentores;
    }

    void setIddepartamentores(int iddepartamentores) {
        Paciente::iddepartamentores = iddepartamentores;
    }

    const Fecha &getActualizacion() const {
        return actualizacion;
    }

    void setActualizacion(const Fecha &actualizacion) {
        Paciente::actualizacion = actualizacion;
    }
};


#endif //TP2_PIII_FOLCO_TZVIR_PACIENTE_H
