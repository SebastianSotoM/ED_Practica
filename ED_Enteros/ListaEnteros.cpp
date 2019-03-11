//
// Created by sebas on 2/27/2019.
//

#include <iostream>
#include "ListaEnteros.h"

ListaEnteros::ListaEnteros() {
    this->cabeza = nullptr;
    this->length = 0;
}

NodoEnteros *ListaEnteros::getCabeza() {
    return this->cabeza;
}

void ListaEnteros::setCabeza(NodoEnteros *_cabeza) {
    this->cabeza = _cabeza;
}

bool ListaEnteros::esVacia() {
    return getCabeza() == nullptr;
}

void ListaEnteros::agregarInicio(int value) {
    NodoEnteros *nuevo = new NodoEnteros(value);
    if (esVacia()) {
        setCabeza(nuevo);
    } else {
        nuevo->setSiguiente(getCabeza());
        setCabeza(nuevo);
    }
    setLength(getLength()+1);
}

void ListaEnteros::agregarFinal(int value) {
    NodoEnteros *nuevo = new NodoEnteros(value);
    if (esVacia()) {
        setCabeza(nuevo);
    } else {
        NodoEnteros *aux = getCabeza();
        while (aux->getSiguiente() != nullptr) {
            aux = aux->getSiguiente();
        }
        aux->setSiguiente(nuevo);
    }
    setLength(getLength()+1);
}

void ListaEnteros::agregarOrdenado(int value) {
    if (esVacia()) {
        agregarInicio(value);
    } else {
        NodoEnteros *aux = getCabeza();
        int eval = value;

        if (eval < aux->getValue()) {
            agregarInicio(value);
        } else {
            while (aux->getSiguiente() != nullptr && eval > aux->getSiguiente()->getValue()) {
                aux = aux->getSiguiente();
            }
            NodoEnteros *nuevo = new NodoEnteros(value);
            nuevo->setSiguiente(aux->getSiguiente());
            aux->setSiguiente(nuevo);
            setLength(getLength()+1);
        }
    }
}

NodoEnteros *ListaEnteros::buscarNodo(int value) {
    NodoEnteros *aux = getCabeza();
    while (aux != nullptr && aux->getValue() != value) {
        aux = aux->getSiguiente();
    }
    return (aux != nullptr) ? aux : nullptr;
}

int ListaEnteros::buscar(int value) {
    NodoEnteros *aux = buscarNodo(value);
    return (aux != 0) ? aux->getValue() : 0;
}

bool ListaEnteros::eliminar(int value) {
    NodoEnteros *aux = getCabeza();
    if(getCabeza()->getValue() == value){
        setCabeza(getCabeza()->getSiguiente());
        setLength(getLength()-1);
        return true;
    }else{
        while (aux->getSiguiente() != nullptr && aux->getSiguiente()->getValue() != value) {
            aux = aux->getSiguiente();
        }
        if(aux != nullptr && aux->getValue() == value){
            aux->setSiguiente(aux->getSiguiente()->getSiguiente());
            setLength(getLength()-1);
            return true;
        }
    }
    return false;
}

bool ListaEnteros::eliminarIndice(int index) {
    NodoEnteros *aux = getCabeza();
    int i =0;
    if(getCabeza() != nullptr && index == i){
        setCabeza(getCabeza()->getSiguiente());
        setLength(getLength()-1);
        return true;
    }else{
        i++;
        while (aux->getSiguiente() != nullptr && index != i) {
            aux = aux->getSiguiente();
            i++;
        }
        if(aux != nullptr && index == i){
            aux->setSiguiente(aux->getSiguiente()->getSiguiente());
            setLength(getLength()-1);
            return true;
        }
    }
    return false;
}
void ListaEnteros::toString() {
    NodoEnteros *aux = getCabeza();
    while (aux != nullptr) {
        std::cout << aux->getValue() << std::endl;
        aux = aux->getSiguiente();
    }
}

int ListaEnteros::getLength() {
    return length;
}

void ListaEnteros::setLength(int value) {
    this->length = value;
}