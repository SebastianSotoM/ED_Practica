//
// Created by sebas on 3/15/2019.
//

#include <iostream>
#include "ListaDoblementeEnlazadaEnteros.h"

ListaDoblementeEnlazadaEnteros::ListaDoblementeEnlazadaEnteros() {
    this->cabeza = nullptr;
    this->length = 0;
}

int ListaDoblementeEnlazadaEnteros::getLength() {
    return this->length;
}

void ListaDoblementeEnlazadaEnteros::setLength(int value) {
    this->length = value;
}

NodoEnterosDoblementeEnlazado *ListaDoblementeEnlazadaEnteros::getCabeza() {
    return this->cabeza;
}

void ListaDoblementeEnlazadaEnteros::setCabeza(NodoEnterosDoblementeEnlazado *_cabeza) {
    this->cabeza = _cabeza;
}

bool ListaDoblementeEnlazadaEnteros::esVacia() {
    return this->length <= 0;
}

void ListaDoblementeEnlazadaEnteros::agregarInicio(int value) {
    NodoEnterosDoblementeEnlazado *nuevo = new NodoEnterosDoblementeEnlazado(value);
    if (esVacia()) {
        setCabeza(nuevo);
        this->length++;
    } else {
        nuevo->setSiguiente(getCabeza());
        getCabeza()->setAnterior(nuevo);
        setCabeza(nuevo);
        this->length++;
    }
}

void ListaDoblementeEnlazadaEnteros::agregarFinal(int value) {
    NodoEnterosDoblementeEnlazado *nuevo = new NodoEnterosDoblementeEnlazado(value);
    if (esVacia()) {
        setCabeza(nuevo);
        this->length++;
    } else {
        NodoEnterosDoblementeEnlazado *aux = getCabeza();
        while (aux->getSiguiente() != nullptr) {
            aux = aux->getSiguiente();
        }
        aux->setSiguiente(nuevo);
        nuevo->setAnterior(aux);
        this->length++;
    }
}

void ListaDoblementeEnlazadaEnteros::agregarOrdenado(int value) {
    if (esVacia()) {
        agregarInicio(value);
    } else {
        NodoEnterosDoblementeEnlazado *aux = getCabeza();

        if (value < aux->getValue()) {
            agregarInicio(value);
        } else {
            while (aux->getSiguiente() != nullptr && value > aux->getSiguiente()->getValue()) {
                aux = aux->getSiguiente();
            }
            NodoEnterosDoblementeEnlazado *nuevo = new NodoEnterosDoblementeEnlazado(value);
            nuevo->setSiguiente(aux->getSiguiente());
            nuevo->setAnterior(aux);
            aux->setSiguiente(nuevo);
            setLength(getLength() + 1);
        }
    }
}

bool ListaDoblementeEnlazadaEnteros::eliminarIndice(int index) {
    int i =0;
    NodoEnterosDoblementeEnlazado *aux = getCabeza();
    while(i < index && index > -1 && aux != nullptr){
        aux = aux->getSiguiente();
        i++;
    }
    if(aux != nullptr && index == i){
        eliminar(aux->getValue());
    }
}

bool ListaDoblementeEnlazadaEnteros::eliminar(int value) {
    NodoEnterosDoblementeEnlazado *aux = buscarNodo(value);
    if(aux != nullptr) {
        aux->getAnterior()->setSiguiente(aux->getSiguiente());
        aux->getSiguiente()->setAnterior(aux->getAnterior());
        this->length--;
        return true;
    }
    return false;
}

NodoEnterosDoblementeEnlazado* ListaDoblementeEnlazadaEnteros::buscarNodo(int value){
    NodoEnterosDoblementeEnlazado *aux = getCabeza();
    while (aux != nullptr && aux->getValue() != value) {
        aux = aux->getSiguiente();
    }
    return aux;
}

bool ListaDoblementeEnlazadaEnteros::buscar(int value){
    return (buscarNodo(value) != nullptr);
}

void ListaDoblementeEnlazadaEnteros::mostrarInicioFin() {
    NodoEnterosDoblementeEnlazado *aux = getCabeza();
    while (aux != nullptr) {
        std::cout << aux->getValue() << std::endl;
        aux = aux->getSiguiente();
    }
}

void ListaDoblementeEnlazadaEnteros::mostrarFinInicio() {
    NodoEnterosDoblementeEnlazado *aux = getCabeza();
    while (aux->getSiguiente() != nullptr) {
        aux = aux->getSiguiente();
    }
    while (aux != nullptr) {
        std::cout << aux->getValue() << std::endl;
        aux = aux->getAnterior();
    }
}