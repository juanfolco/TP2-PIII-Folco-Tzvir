#ifndef TP2_PIII_FOLCO_TZVIR_PACIENTE_H
#define TP2_PIII_FOLCO_TZVIR_PACIENTE_H

#include <iostream>
#include <fstream>
#include <string.h>
#include <string>

/**
 * Clase con los datos del paciente presentados en el archivo .CSV
 */

class Paciente {
private:
    int id;
    std::string idstr;
    std::string genero;
    int edad; //en meses
    std::string edadstr;
    std::string pais;
    std::string provincia;
    std::string departamento;
    std::string provinciaC;
    std::string sintomas;
    std::string inicio_caso;
    std::string semana_iniciostr;
    std::string internacion;
    std::string CUI;
    std::string CUIF;
    std::string fallecido;
    std::string fallecimiento;
    std::string asistenciaresp;
    std::string idprovinciacargastr;
    std::string financiamiento;
    std::string clasificacion;
    std::string resumen;
    std::string idprovinciaresstr;
    std::string diagnostico;
    std::string iddepartamentoresstr;
    std::string actualizacion;
public:
    Paciente() {}


    Paciente(const std::string &idstr, const std::string &genero, int edad, const std::string &pais,
             const std::string &provincia,
             const std::string &departamento, const std::string &provinciaC, const std::string &sintomas,
             const std::string &inicioCaso, const std::string &semanaIniciostr, const std::string &internacion,
             const std::string &cui, const std::string &cuif, const std::string &fallecido,
             const std::string &fallecimiento, const std::string &asistenciaresp,
             const std::string &idprovinciacargastr, const std::string &financiamiento,
             const std::string &clasificacion, const std::string &resumen, const std::string &idprovinciaresstr,
             const std::string &diagnostico, const std::string &iddepartamentoresstr, const std::string &actualizacion)
            : idstr(idstr), genero(genero), edad(edad), pais(pais), provincia(provincia), departamento(departamento),
              provinciaC(provinciaC), sintomas(sintomas), inicio_caso(inicioCaso), semana_iniciostr(semanaIniciostr),
              internacion(internacion), CUI(cui), CUIF(cuif), fallecido(fallecido), fallecimiento(fallecimiento),
              asistenciaresp(asistenciaresp), idprovinciacargastr(idprovinciacargastr), financiamiento(financiamiento),
              clasificacion(clasificacion), resumen(resumen), idprovinciaresstr(idprovinciaresstr),
              diagnostico(diagnostico), iddepartamentoresstr(iddepartamentoresstr), actualizacion(actualizacion) {}
    //constructor con solo la edad como int

    int getId() const { return id; }

    void setId(int id) { Paciente::id = id; }

    const std::string &getGenero() const { return genero; }

    void setGenero(const std::string &genero) { Paciente::genero = genero; }

    int getEdad() const { return edad; }

    void setEdad(int edad) { Paciente::edad = edad; }

    const std::string &getPais() const { return pais; }

    void setPais(const std::string &pais) { Paciente::pais = pais; }

    const std::string &getProvincia() const { return provincia; }

    void setProvincia(const std::string &provincia) { Paciente::provincia = provincia; }

    const std::string &getDepartamento() const { return departamento; }

    void setDepartamento(const std::string &departamento) { Paciente::departamento = departamento; }

    const std::string &getProvinciaC() const { return provinciaC; }

    void setProvinciaC(const std::string &provinciaC) { Paciente::provinciaC = provinciaC; }

    const std::string &getSintomas() const { return sintomas; }

    void setSintomas(const std::string &sintomas) { Paciente::sintomas = sintomas; }

    const std::string &getInicioCaso() const { return inicio_caso; }

    void setInicioCaso(const std::string &inicioCaso) { inicio_caso = inicioCaso; }


    const std::string &getInternacion() const { return internacion; }

    void setInternacion(const std::string &internacion) { Paciente::internacion = internacion; }

    const std::string &getCui() const { return CUI; }

    void setCui(const std::string &cui) { CUI = cui; }

    const std::string &getCuif() const { return CUIF; }

    void setCuif(const std::string &cuif) { CUIF = cuif; }

    const std::string &getFallecido() const { return fallecido; }

    void setFallecido(const std::string &fallecido) { Paciente::fallecido = fallecido; }

    const std::string &getFallecimiento() const { return fallecimiento; }

    void setFallecimiento(const std::string &fallecimiento) { Paciente::fallecimiento = fallecimiento; }

    const std::string &getAsistenciaresp() const { return asistenciaresp; }

    void setAsistenciaresp(const std::string &asistenciaresp) { Paciente::asistenciaresp = asistenciaresp; }

    const std::string &getFinanciamiento() const { return financiamiento; }

    void setFinanciamiento(const std::string &financiamiento) { Paciente::financiamiento = financiamiento; }

    const std::string &getClasificacion() const { return clasificacion; }

    void setClasificacion(const std::string &clasificacion) { Paciente::clasificacion = clasificacion; }

    const std::string &getResumen() const { return resumen; }

    void setResumen(const std::string &resumen) { Paciente::resumen = resumen; }

    const std::string &getDiagnostico() const { return diagnostico; }

    void setDiagnostico(const std::string &diagnostico) { Paciente::diagnostico = diagnostico; }

    const std::string &getActualizacion() const { return actualizacion; }

    void setActualizacion(const std::string &actualizacion) { Paciente::actualizacion = actualizacion; }

    friend std::ostream &operator<<(std::ostream &os, const Paciente &paciente) {
        os << "ID de caso: " << paciente.idstr << " Genero: " << paciente.genero << " Edad: " << paciente.edad
           << " Pais de residencia: "
           << paciente.pais << " Provincia de residencia: " << paciente.provincia << " Departamento de residencia: "
           << paciente.departamento
           << " Provincia de carga: " << paciente.provinciaC << " Fecha de inicio de sintomas: " << paciente.sintomas
           << " Fecha de inicio del caso: "
           << paciente.inicio_caso << " Semana de inicio: " << paciente.semana_iniciostr << " Fecha de internacion: "
           << paciente.internacion << " CUI: " << paciente.CUI << " Fecha de CUI: " << paciente.CUIF << " Fallecido: "
           << paciente.fallecido << " Fecha de fallecimiento: " << paciente.fallecimiento
           << " Asistencia respiratoria: "
           << paciente.asistenciaresp << " ID de provincia de carga: " << paciente.idprovinciacargastr
           << " Financiamiento: "
           << paciente.financiamiento << " Clasificacion: " << paciente.clasificacion << " Resumen: "
           << paciente.resumen << " ID de provincia de residencia: " << paciente.idprovinciaresstr
           << " Fecha de diagnostico: "
           << paciente.diagnostico << " ID de departamento de residencia: " << paciente.iddepartamentoresstr
           << " Fecha de actualizacion: " << paciente.actualizacion;
        return os;
    }
};


#endif //TP2_PIII_FOLCO_TZVIR_PACIENTE_H