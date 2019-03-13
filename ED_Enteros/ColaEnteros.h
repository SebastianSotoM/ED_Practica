//
// Created by sebas on 3/11/2019.
//

#ifndef ED_PRACTICA_COLAENTEROS_H
#define ED_PRACTICA_COLAENTEROS_H

#include "NodoEnteros.h"

class ColaEnteros {
private:
    int longitud;
    NodoEnteros *cabeza;
    NodoEnteros * final;
public:
    ColaEnteros();

    NodoEnteros *getCabeza();

    void setCabeza(NodoEnteros *);

    NodoEnteros *getFinal();

    void setFinal(NodoEnteros *);

    int getLongitud();

    void setLongitud(int);

    bool estaVacia();

    void insertar(int);

    bool atender();

    bool eliminarPos(int);
};


#endif //ED_PRACTICA_COLAENTEROS_H
