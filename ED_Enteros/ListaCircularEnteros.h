//
// Created by sebas on 3/15/2019.
//

#ifndef ED_PRACTICA_LISTACIRCULARENTEROS_H
#define ED_PRACTICA_LISTACIRCULARENTEROS_H

#include "NodoEnteros.h"


class ListaCircularEnteros {

private:
    int longitud;
    NodoEnteros *siguiente;
public:
    ListaCircularEnteros();
    int getLongitud();
    void setLongitud(int);
    NodoEnteros *getSiguiente();
    void setSiguiente(NodoEnteros *);
    bool esVacia();
};


#endif //ED_PRACTICA_LISTACIRCULARENTEROS_H
