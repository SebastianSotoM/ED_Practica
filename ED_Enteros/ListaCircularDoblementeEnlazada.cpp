//
// Created by sebas on 3/16/2019.
//

#include <iostream>
#include "ListaCircularDoblementeEnlazada.h"

ListaCircularDoblementeEnlazada::ListaCircularDoblementeEnlazada() {
    this->inicio = nullptr;
    this->final = nullptr;
    this->longitud = 0;
}

NodoEnterosDoblementeEnlazado* ListaCircularDoblementeEnlazada::getInicio(){
    return this->inicio;
}

void ListaCircularDoblementeEnlazada::setInicio(NodoEnterosDoblementeEnlazado *_inicio){
    this->inicio = _inicio;
}

NodoEnterosDoblementeEnlazado* ListaCircularDoblementeEnlazada::getFinal(){
    return this->final;
}

void ListaCircularDoblementeEnlazada::setFinal(NodoEnterosDoblementeEnlazado *_final){
    this->final = _final;
}

int ListaCircularDoblementeEnlazada::getLongitud() {
    return this->longitud;
}

void ListaCircularDoblementeEnlazada::setLongitud(int _longitud) {
    this->longitud = longitud;
}

bool ListaCircularDoblementeEnlazada::esVacia(){
    return longitud <= 0;
}

bool ListaCircularDoblementeEnlazada::agregarEnVacia(NodoEnterosDoblementeEnlazado *nuevo){
    if(esVacia()){
        nuevo->setSiguiente(nuevo);
        nuevo->setAnterior(nuevo);
        setFinal(nuevo);
        setInicio(nuevo);
        longitud++;
        return true;
    }
    return false;
}

void ListaCircularDoblementeEnlazada::agregarInicio(int value) {
    NodoEnterosDoblementeEnlazado *nuevo = new NodoEnterosDoblementeEnlazado(value);
    if(!agregarEnVacia(nuevo)){
        nuevo->setSiguiente(getInicio());
        getInicio()->setAnterior(nuevo);
        nuevo->setAnterior(getFinal());
        getFinal()->setSiguiente(nuevo);
        setInicio(nuevo);
        longitud++;
    }
}

void ListaCircularDoblementeEnlazada::agregarFinal(int value){
    NodoEnterosDoblementeEnlazado *nuevo = new NodoEnterosDoblementeEnlazado(value);
    if(!agregarEnVacia(nuevo)){
        nuevo->setSiguiente(getInicio());
        getInicio()->setAnterior(nuevo);
        nuevo->setAnterior(getFinal());
        getFinal()->setSiguiente(nuevo);
        setFinal(nuevo);
        longitud++;
    }
}

void ListaCircularDoblementeEnlazada::agregarOrdenado(int value){
    NodoEnterosDoblementeEnlazado *nuevo = new NodoEnterosDoblementeEnlazado(value);
    if(!agregarEnVacia(nuevo)){
        if(getInicio()->getValue() > nuevo->getValue()){
            agregarInicio(value);
        }else if(getFinal()->getValue() < nuevo->getValue()){
            agregarFinal(value);
        }else{
            NodoEnterosDoblementeEnlazado *aux = getInicio();
            while(aux->getValue() < nuevo->getValue()){
                aux = aux->getSiguiente();
            }
            aux->getAnterior()->setSiguiente(nuevo);
            nuevo->setAnterior(aux->getAnterior());

            nuevo->setSiguiente(aux);
            aux->setAnterior(nuevo);


            longitud++;
        }
    }
}

void ListaCircularDoblementeEnlazada::mostrarInicioFin() {
    NodoEnterosDoblementeEnlazado *aux = getInicio();
    do {
        std::cout << aux->getValue() << std::endl;
        aux = aux->getSiguiente();
    }while (aux != getInicio());
}

void ListaCircularDoblementeEnlazada::mostrarFinInicio() {
    NodoEnterosDoblementeEnlazado *aux = getFinal();
    do {
        std::cout << aux->getValue() << std::endl;
        aux = aux->getAnterior();
    }while(aux != getFinal());
}

NodoEnterosDoblementeEnlazado* ListaCircularDoblementeEnlazada::buscarNodo(int value) {
    NodoEnterosDoblementeEnlazado *aux = getInicio();
    while (aux != nullptr && aux->getValue() != value) {
        aux = aux->getSiguiente();
    }
    return aux;
}

bool ListaCircularDoblementeEnlazada::buscar(int value) {
    return (buscarNodo(value) != nullptr);
}

bool ListaCircularDoblementeEnlazada::eliminar(int value) {
    NodoEnterosDoblementeEnlazado * toDelete = buscarNodo(value);
    toDelete->getAnterior()->setSiguiente(toDelete->getSiguiente());
    toDelete->getSiguiente()->setAnterior(toDelete->getAnterior());
    longitud--;
}

bool ListaCircularDoblementeEnlazada::eliminarIndice(int index) {
    int i =0;
    NodoEnterosDoblementeEnlazado *aux = getInicio();
    while(i < index && index > -1 && aux != nullptr){
        aux = aux->getSiguiente();
        i++;
    }
    if(aux != nullptr && index == i){
        eliminar(aux->getValue());
    }
}