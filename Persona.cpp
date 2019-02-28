//
// Created by sebas on 2/27/2019.
//

#include "Persona.h"

Persona::Persona(){
    this->cedula = "";
    this->nombre = "";
    this->edad = 0;
}
Persona::Persona(std::string _cedula,std::string _nombre,int _edad){
    this->cedula = _cedula;
    this->nombre = _nombre;
    this->edad = _edad;
}
std::string Persona::getCedula(){
    return this->cedula;
}
std::string Persona::getNombre(){
    return this->nombre;
}
int Persona::getEdad(){
    return this->edad;
}
void Persona::setCedula(std::string _cedula){
    this->cedula = _cedula;
}
void Persona::setNombre(std::string _nombre){
    this->nombre = _nombre;
}
void Persona::setEdad(int _edad){
    this->edad = _edad;
}

std::string Persona::toString() {
    return "Cedula:"+getCedula()+"\tNombre: "+getNombre()+"\tEdad: "+std::to_string(getEdad());
}