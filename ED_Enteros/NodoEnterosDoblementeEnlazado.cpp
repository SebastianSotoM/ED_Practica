//
// Created by sebas on 3/15/2019.
//

#include "NodoEnterosDoblementeEnlazado.h"

NodoEnterosDoblementeEnlazado::NodoEnterosDoblementeEnlazado() {
    this->siguiente = nullptr;
    this->anterior = nullptr;
    this->value = -1;
}
NodoEnterosDoblementeEnlazado::NodoEnterosDoblementeEnlazado(int _value) {
    this->value = _value;
    this->anterior = nullptr;
    this->siguiente = nullptr;
}
NodoEnterosDoblementeEnlazado* NodoEnterosDoblementeEnlazado::getSiguiente() {
    return  this->siguiente;
}
void NodoEnterosDoblementeEnlazado::setSiguiente(NodoEnterosDoblementeEnlazado *_sig) {
    this->siguiente = _sig;
}
NodoEnterosDoblementeEnlazado* NodoEnterosDoblementeEnlazado::getAnterior() {
    return this->anterior;
}
void NodoEnterosDoblementeEnlazado::setAnterior(NodoEnterosDoblementeEnlazado *_ant) {
    this->anterior = _ant;
}
int NodoEnterosDoblementeEnlazado::getValue() {
    return this->value;
}
void NodoEnterosDoblementeEnlazado::setValue(int _val) {
    this->value = _val;
}
