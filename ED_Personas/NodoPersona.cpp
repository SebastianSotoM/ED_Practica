//
// Created by sebas on 2/27/2019.
//

#include "NodoPersona.h"

NodoPersona::NodoPersona(){
    this->pers = nullptr;
    this->siguiente = nullptr;
}
NodoPersona::NodoPersona(Persona *_pers) {
    this->pers = _pers;
    this->siguiente = nullptr;
}

Persona* NodoPersona::getPersona() {
    return this->pers;
}
NodoPersona* NodoPersona::getSiguiente() {
    return this->siguiente;
}

void NodoPersona::setPersona(Persona *_pers) {
    this->pers = _pers;
}
void NodoPersona::setSiguiente(NodoPersona * _siguiente) {
    this->siguiente = _siguiente;
}