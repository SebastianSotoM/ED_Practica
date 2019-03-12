//
// Created by sebas on 3/11/2019.
//

#ifndef ED_PRACTICA_PILAENTEROS_H
#define ED_PRACTICA_PILAENTEROS_H

#include "NodoEnteros.h"

class PilaEnteros {

private:
    NodoEnteros *cabeza;
    int longitud;
public:
    PilaEnteros();

    void push(int);

    int pop();

    bool estaVacia();

    int getTop();

    NodoEnteros *getCabeza();

    void setCabeza(NodoEnteros *);

    int getLongitud();

    void setLongitud(int);

};


#endif //ED_PRACTICA_PILAENTEROS_H
