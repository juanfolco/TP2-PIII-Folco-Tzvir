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
    std::string genero;
    int edad; //en meses
    std::string pais;
    std::string provincia;
    std::string departamento;
    std::string provinciaC;
    std::string sintomas;
    std::string inicio_caso;
    int semana_inicio;
    std::string internacion;
    std::string CUI;
    std::string CUIF;
    std::string fallecido;
    std::string fallecimiento;
    std::string asistenciaresp;
    int idprovinciacarga;
    std::string financiamiento;
    std::string clasificacion;
    std::string resumen;
    int idprovinciares;
    std::string diagnostico;
    int iddepartamentores;
    std::string actualizacion;
public:
    Paciente() {}

    Paciente(int id, const std::string &genero, int edad, const std::string &pais, const std::string &provincia,
             const std::string &departamento, const std::string &provinciaC, const std::string &sintomas,
             const std::string &inicioCaso, int semanaInicio, const std::string &internacion, const std::string &cui,
             const std::string &cuif, const std::string &fallecido, const std::string &fallecimiento,
             const std::string &asistenciaresp, int idprovinciacarga, const std::string &financiamiento,
             const std::string &clasificacion, const std::string &resumen, int idprovinciares,
             const std::string &diagnostico, int iddepartamentores, const std::string &actualizacion) : id(id),
             genero(genero), edad(edad), pais(pais), provincia(provincia), departamento(departamento),
             provinciaC(provinciaC),
             sintomas(sintomas),
             inicio_caso(inicioCaso), semana_inicio(semanaInicio),
             internacion(internacion),
             CUI(cui),
             CUIF(cuif),
             fallecido(fallecido),
             fallecimiento(fallecimiento),
             asistenciaresp(asistenciaresp),
             idprovinciacarga(idprovinciacarga),
             financiamiento(financiamiento),
             clasificacion(clasificacion),
             resumen(resumen),
             idprovinciares(idprovinciares),
             diagnostico(diagnostico),
             iddepartamentores(iddepartamentores),
             actualizacion(actualizacion) {}

    int getId() const {
        return id;
    }

    void setId(int id) {
        Paciente::id = id;
    }

    const std::string &getGenero() const {
        return genero;
    }

    void setGenero(const std::string &genero) {
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

    const std::string &getSintomas() const {
        return sintomas;
    }

    void setSintomas(const std::string &sintomas) {
        Paciente::sintomas = sintomas;
    }

    const std::string &getInicioCaso() const {
        return inicio_caso;
    }

    void setInicioCaso(const std::string &inicioCaso) {
        inicio_caso = inicioCaso;
    }

    int getSemanaInicio() const {
        return semana_inicio;
    }

    void setSemanaInicio(int semanaInicio) {
        semana_inicio = semanaInicio;
    }

    const std::string &getInternacion() const {
        return internacion;
    }

    void setInternacion(const std::string &internacion) {
        Paciente::internacion = internacion;
    }

    const std::string &getCui() const {
        return CUI;
    }

    void setCui(const std::string &cui) {
        CUI = cui;
    }

    const std::string &getCuif() const {
        return CUIF;
    }

    void setCuif(const std::string &cuif) {
        CUIF = cuif;
    }

    const std::string &getFallecido() const {
        return fallecido;
    }

    void setFallecido(const std::string &fallecido) {
        Paciente::fallecido = fallecido;
    }

    const std::string &getFallecimiento() const {
        return fallecimiento;
    }

    void setFallecimiento(const std::string &fallecimiento) {
        Paciente::fallecimiento = fallecimiento;
    }

    const std::string &getAsistenciaresp() const {
        return asistenciaresp;
    }

    void setAsistenciaresp(const std::string &asistenciaresp) {
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

    const std::string &getDiagnostico() const {
        return diagnostico;
    }

    void setDiagnostico(const std::string &diagnostico) {
        Paciente::diagnostico = diagnostico;
    }

    int getIddepartamentores() const {
        return iddepartamentores;
    }

    void setIddepartamentores(int iddepartamentores) {
        Paciente::iddepartamentores = iddepartamentores;
    }

    const std::string &getActualizacion() const {
        return actualizacion;
    }

    void setActualizacion(const std::string &actualizacion) {
        Paciente::actualizacion = actualizacion;
    }

    friend std::ostream &operator<<(std::ostream &os, const Paciente &paciente) {
        os << "id: " << paciente.id << " genero: " << paciente.genero << " edad: " << paciente.edad << " pais: "
           << paciente.pais << " provincia: " << paciente.provincia << " departamento: " << paciente.departamento
           << " provinciaC: " << paciente.provinciaC << " sintomas: " << paciente.sintomas << " inicio_caso: "
           << paciente.inicio_caso << " semana_inicio: " << paciente.semana_inicio << " internacion: "
           << paciente.internacion << " CUI: " << paciente.CUI << " CUIF: " << paciente.CUIF << " fallecido: "
           << paciente.fallecido << " fallecimiento: " << paciente.fallecimiento << " asistenciaresp: "
           << paciente.asistenciaresp << " idprovinciacarga: " << paciente.idprovinciacarga << " financiamiento: "
           << paciente.financiamiento << " clasificacion: " << paciente.clasificacion << " resumen: "
           << paciente.resumen << " idprovinciares: " << paciente.idprovinciares << " diagnostico: "
           << paciente.diagnostico << " iddepartamentores: " << paciente.iddepartamentores << " actualizacion: "
           << paciente.actualizacion;
        return os;
    }
};


#endif //TP2_PIII_FOLCO_TZVIR_PACIENTE_H
