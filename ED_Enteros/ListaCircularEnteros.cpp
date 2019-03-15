//
// Created by sebas on 3/15/2019.
//

#include <iostream>
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

NodoEnteros *ListaCircularEnteros::getSiguiente() {
    return this->siguiente;
}

void ListaCircularEnteros::setSiguiente(NodoEnteros *sig) {
    this->siguiente = sig;
}

bool ListaCircularEnteros::esVacia() {
    return longitud <= 0;
}

void ListaCircularEnteros::agregarInicio(int value) {
    NodoEnteros *nuevo = new NodoEnteros(value);
    if (esVacia()) {
        setSiguiente(nuevo);
        getSiguiente()->setSiguiente(nuevo);
    } else {
        getSiguiente()->setSiguiente(nuevo);
        nuevo->setSiguiente(getSiguiente());
        setSiguiente(nuevo);
    }
    this->longitud++;
}

void ListaCircularEnteros::agregarFinal(int value) {
    NodoEnteros *nuevo = new NodoEnteros(value);
    if (esVacia()) {
        setSiguiente(nuevo);
        getSiguiente()->setSiguiente(nuevo);
    } else {
        NodoEnteros *primero = getSiguiente();
        NodoEnteros *aux = getSiguiente();
        while (aux->getSiguiente() != primero) {
            aux = aux->getSiguiente();
        }
        nuevo->setSiguiente(aux->getSiguiente());
        aux->setSiguiente(nuevo);
    }
    this->longitud++;
}

void ListaCircularEnteros::agregarOrdenado(int value) {
    if (esVacia()) {
        agregarInicio(value);
    } else {
        NodoEnteros *primero = getSiguiente();
        NodoEnteros *aux = getSiguiente();
        int eval = value;

        if (eval < aux->getValue()) {
            agregarInicio(value);
        } else {
            while (aux->getSiguiente() != primero && eval > aux->getSiguiente()->getValue()) {
                aux = aux->getSiguiente();
            }
            NodoEnteros *nuevo = new NodoEnteros(value);
            nuevo->setSiguiente(aux->getSiguiente());
            aux->setSiguiente(nuevo);
            this->longitud++;
        }
    }
}

NodoEnteros *ListaCircularEnteros::buscarNodo(int value) {
    NodoEnteros *aux = getSiguiente();
    while (aux != nullptr && aux->getValue() != value) {
        aux = aux->getSiguiente();
    }
    return (aux != nullptr) ? aux : nullptr;
}

int ListaCircularEnteros::buscar(int value) {
    NodoEnteros *aux = buscarNodo(value);
    return (aux != 0) ? aux->getValue() : 0;
}

bool ListaCircularEnteros::eliminar(int value) {
    NodoEnteros *aux = getSiguiente();
    if (getSiguiente()->getValue() == value) {
        setSiguiente(getSiguiente()->getSiguiente());
        this->longitud--;
        return true;
    } else {
        while (aux->getSiguiente() != nullptr && aux->getSiguiente()->getValue() != value) {
            aux = aux->getSiguiente();
        }
        if (aux != nullptr && aux->getValue() == value) {
            aux->setSiguiente(aux->getSiguiente()->getSiguiente());
            this->longitud--;
            return true;
        }
    }
    return false;
}

bool ListaCircularEnteros::eliminarIndice(int index) {
    NodoEnteros *primero = getSiguiente();
    NodoEnteros *aux = getSiguiente();
    int i = 0;
    if (index == i) {
        setSiguiente(getSiguiente()->getSiguiente());
        this->longitud--;
        return true;
    } else {
        i++;
        while (index != i) {
            aux = aux->getSiguiente();
            i++;
        }
        if (aux != primero && index == i) {
            if(aux->getSiguiente() == primero){
                primero->setSiguiente(primero);
            }else{
                aux->setSiguiente(aux->getSiguiente()->getSiguiente());
            }
            this->longitud--;
            return true;
        }
    }
    return false;
}

void ListaCircularEnteros::toString() {
    NodoEnteros *primero = getSiguiente();
    NodoEnteros *aux = getSiguiente();
    do {
        std::cout << aux->getValue() << std::endl;
        aux = aux->getSiguiente();
    }while(aux != primero);
}