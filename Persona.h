//
// Created by sebas on 2/27/2019.
//

#ifndef ED_PRACTICA_PERSONA_H
#define ED_PRACTICA_PERSONA_H


#include <iostream>

class Persona {
private:
    std::string cedula;
    std::string nombre;
    int edad;
public:
    Persona();
    Persona(std::string,std::string,int);
    std::string getCedula();
    std::string getNombre();
    int getEdad();
    void setCedula(std::string);
    void setNombre(std::string);
    void setEdad(int);
    std::string toString();
};


#endif //ED_PRACTICA_PERSONA_H
