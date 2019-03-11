//
// Created by sebas on 2/27/2019.
//

#include "ListaPersonas.h"

ListaPersonas::ListaPersonas() {
    this->cabeza = nullptr;
    this->length = 0;
}

NodoPersona *ListaPersonas::getCabeza() {
    return this->cabeza;
}

void ListaPersonas::setCabeza(NodoPersona *_cabeza) {
    this->cabeza = _cabeza;
}

bool ListaPersonas::esVacia() {
    return getCabeza() == nullptr;
}

void ListaPersonas::agregarInicio(Persona *pers) {
    NodoPersona *nuevo = new NodoPersona(pers);
    if (esVacia()) {
        setCabeza(nuevo);
    } else {
        nuevo->setSiguiente(getCabeza());
        setCabeza(nuevo);
    }
    setLength(getLength()+1);
}

void ListaPersonas::agregarFinal(Persona *pers) {
    NodoPersona *nuevo = new NodoPersona(pers);
    if (esVacia()) {
        setCabeza(nuevo);
    } else {
        NodoPersona *aux = getCabeza();
        while (aux->getSiguiente() != nullptr) {
            aux = aux->getSiguiente();
        }
        aux->setSiguiente(nuevo);
    }
    setLength(getLength()+1);
}

void ListaPersonas::agregarOrdenado(Persona *pers) {
    if (esVacia()) {
        agregarInicio(pers);
    } else {
        NodoPersona *aux = getCabeza();
        std::string pers_cedula = pers->getCedula();

        if (pers_cedula < aux->getPersona()->getCedula()) {
            agregarInicio(pers);
        } else {
            while (aux->getSiguiente() != nullptr && pers_cedula > aux->getSiguiente()->getPersona()->getCedula()) {
                aux = aux->getSiguiente();
            }
            NodoPersona *nuevo = new NodoPersona(pers);
            nuevo->setSiguiente(aux->getSiguiente());
            aux->setSiguiente(nuevo);
            setLength(getLength()+1);
        }
    }
}

NodoPersona *ListaPersonas::buscarNodo(std::string _ced) {
    NodoPersona *aux = getCabeza();
    while (aux != nullptr && aux->getPersona()->getCedula() != _ced) {
        aux = aux->getSiguiente();
    }
    return (aux != nullptr) ? aux : nullptr;
}

Persona *ListaPersonas::buscar(std::string _ced) {
    NodoPersona *aux = buscarNodo(_ced);
    return (aux != nullptr) ? aux->getPersona() : nullptr;
}

bool ListaPersonas::eliminar(std::string _ced) {
    NodoPersona *aux = getCabeza();
    if(getCabeza()->getPersona()->getCedula() == _ced){
        setCabeza(getCabeza()->getSiguiente());
        setLength(getLength()-1);
        return true;
    }else{
        while (aux->getSiguiente() != nullptr && aux->getSiguiente()->getPersona()->getCedula() != _ced) {
            aux = aux->getSiguiente();
        }
        if(aux != nullptr && aux->getPersona()->getCedula() == _ced){
            aux->setSiguiente(aux->getSiguiente()->getSiguiente());
            setLength(getLength()-1);
            return true;
        }
    }
    return false;
}
std::string ListaPersonas::toString() {
    NodoPersona *aux = getCabeza();
    while (aux != nullptr) {
        std::cout << aux->getPersona()->toString() << std::endl;
        aux = aux->getSiguiente();
    }
}

int ListaPersonas::getLength() {
    return length;
}

void ListaPersonas::setLength(int value) {
    this->length = value;
}