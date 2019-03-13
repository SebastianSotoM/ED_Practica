//
// Created by sebas on 3/11/2019.
//

#include "ColaEnteros.h"


ColaEnteros::ColaEnteros() {
    this->cabeza = nullptr;
    this->longitud = 0;
}

NodoEnteros *ColaEnteros::getCabeza() {
    return cabeza;
}

void ColaEnteros::setCabeza(NodoEnteros *cabeza) {
    this->cabeza = cabeza;
}

NodoEnteros *ColaEnteros::getFinal() {
    return this->final;
}

void ColaEnteros::setFinal(NodoEnteros *final) {
    this->final = final;
}

void ColaEnteros::setLongitud(int longitud) {
    this->longitud = longitud;
}

int ColaEnteros::getLongitud() {
    return this->longitud;
}

bool ColaEnteros::estaVacia() {
    return this->getCabeza() == nullptr;
}

void ColaEnteros::insertar(int value) {
    NodoEnteros *nuevo = new NodoEnteros(value);
    if (estaVacia()) {
        setCabeza(nuevo);
        setFinal(nuevo);
        setLongitud(getLongitud() + 1);
    } else {
        getFinal()->setSiguiente(nuevo);
        setFinal(nuevo);
        setLongitud(getLongitud() + 1);
    }
}

int ColaEnteros::atender() {
    if (estaVacia()) {
        return -1;
    } else {
        int value = getCabeza()->getValue();
        setCabeza(getCabeza()->getSiguiente());
        setLongitud(getLongitud() - 1);
        return value;
    }
}

bool ColaEnteros::eliminarPos(int pos) {
    if (estaVacia() || pos > longitud - 1) {
        return false;
    } else {
        int i = 0;
        if (pos == i) {
            return atender();
        } else {
            i++;
            NodoEnteros *aux = getCabeza()->getSiguiente();
            while (aux->getSiguiente() != nullptr && pos != i) {
                aux = aux->getSiguiente();
                i++;
            }
            if (aux != nullptr && pos == i) {
                aux->setSiguiente(aux->getSiguiente()->getSiguiente());
                setLongitud(getLongitud() - 1);
                return true;
            }
        }
    }
}