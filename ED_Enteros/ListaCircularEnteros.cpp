//
// Created by sebas on 3/15/2019.
//

#include "ListaCircularEnteros.h"

ListaCircularEnteros::ListaCircularEnteros() {
    this->longitud = 0;
    this->siguiente = nullptr;
}

int ListaCircularEnteros::getLongitud() {
    return this->longitud;
}

void ListaCircularEnteros::setLongitud(int value) {
    this->longitud = value;
}

NodoEnteros* ListaCircularEnteros::getSiguiente() {
    return this->siguiente;
}

void ListaCircularEnteros::setSiguiente(NodoEnteros *sig) {
    this->siguiente = sig;
}

bool ListaCircularEnteros::esVacia() {
    return longitud > 0;
}