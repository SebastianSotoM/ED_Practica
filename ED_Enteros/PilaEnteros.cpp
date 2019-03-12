//
// Created by sebas on 3/11/2019.
//

#include "PilaEnteros.h"

PilaEnteros::PilaEnteros() {
    this->cabeza = nullptr;
    this->longitud = 0;
}

int PilaEnteros::getTop() {
    return this->getCabeza()->getValue();
}

bool PilaEnteros::estaVacia(){
    return this->getCabeza() == nullptr;
}

void PilaEnteros::push(int value) {
    NodoEnteros *nuevo = new NodoEnteros(value);
    if(estaVacia()){
        setCabeza(nuevo);
        setLongitud(getLongitud()+1);
    }else{
        nuevo->setSiguiente(getCabeza());
        setCabeza(nuevo);
        setLongitud(getLongitud()+1);
    }
}

int PilaEnteros::pop() {
    if(estaVacia()){
        return -1;
    }else{
        int value = getCabeza()->getValue();
        setCabeza(getCabeza()->getSiguiente());
        setLongitud(getLongitud()-1);
        return value;
    }
}

NodoEnteros *PilaEnteros::getCabeza() {
    return cabeza;
}

void PilaEnteros::setCabeza(NodoEnteros *cabeza) {
    this->cabeza = cabeza;
}

int PilaEnteros::getLongitud() {
    return longitud;
}

void PilaEnteros::setLongitud(int longitud) {
    this->longitud = longitud;
}
