//
// Created by sebas on 2/27/2019.
//

#include "NodoEnteros.h"

NodoEnteros::NodoEnteros(){
    this->value = 0;
    this->siguiente = nullptr;
}
NodoEnteros::NodoEnteros(int _value) {
    this->value = _value;
    this->siguiente = nullptr;
}

int NodoEnteros::getValue(){
    return this->value;
}
NodoEnteros* NodoEnteros::getSiguiente() {
    return this->siguiente;
}

void NodoEnteros::setValue(int _value){
    this->value = _value;
}
void NodoEnteros::setSiguiente(NodoEnteros * _siguiente) {
    this->siguiente = _siguiente;
}