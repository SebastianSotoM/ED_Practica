//
// Created by sebas on 3/10/2019.
//

#ifndef ED_PRACTICA_LISTAENTEROS_H
#define ED_PRACTICA_LISTAENTEROS_H

#include "NodoEnteros.h"

class ListaEnteros {

private:
    NodoEnteros *cabeza;
    int length;
public:
    ListaEnteros();

    NodoEnteros *getCabeza();

    void setCabeza(NodoEnteros *);

    int getLength();

    void setLength(int);

    void agregarInicio(int);

    void agregarFinal(int);

    void agregarOrdenado(int);

    bool esVacia();

    NodoEnteros *buscarNodo(int);

    int buscar(int);

    bool eliminar(int);

    bool eliminarIndice(int);

    void toString();
};

#endif //ED_PRACTICA_LISTAENTEROS_H
