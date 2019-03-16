//
// Created by sebas on 3/15/2019.
//

#ifndef ED_PRACTICA_LISTADOBLEMENTEENLAZADAENTEROS_H
#define ED_PRACTICA_LISTADOBLEMENTEENLAZADAENTEROS_H

#include "NodoEnterosDoblementeEnlazado.h"
class ListaDoblementeEnlazadaEnteros {
private:
    NodoEnterosDoblementeEnlazado *cabeza;
    int length;
public:
    ListaDoblementeEnlazadaEnteros();

    NodoEnterosDoblementeEnlazado *getCabeza();

    void setCabeza(NodoEnterosDoblementeEnlazado *);

    int getLength();

    void setLength(int);

    void agregarInicio(int);

    void agregarFinal(int);

    void agregarOrdenado(int);

    bool esVacia();

    NodoEnterosDoblementeEnlazado *buscarNodo(int);

    bool buscar(int);

    bool eliminar(int);

    bool eliminarIndice(int);

    void mostrarInicioFin();

    void mostrarFinInicio();
};


#endif //ED_PRACTICA_LISTADOBLEMENTEENLAZADAENTEROS_H
