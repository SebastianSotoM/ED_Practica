//
// Created by sebas on 3/16/2019.
//

#ifndef ED_PRACTICA_LISTACIRCULARDOBLEMENTEENLAZADA_H
#define ED_PRACTICA_LISTACIRCULARDOBLEMENTEENLAZADA_H

#include "NodoEnterosDoblementeEnlazado.h"

class ListaCircularDoblementeEnlazada {
private:
    NodoEnterosDoblementeEnlazado *inicio;
    NodoEnterosDoblementeEnlazado *final;
    int longitud;

    bool agregarEnVacia(NodoEnterosDoblementeEnlazado *);

    NodoEnterosDoblementeEnlazado *buscarNodo(int);

public:
    ListaCircularDoblementeEnlazada();

    int getLongitud();

    void setLongitud(int);

    NodoEnterosDoblementeEnlazado *getInicio();

    void setInicio(NodoEnterosDoblementeEnlazado *);

    NodoEnterosDoblementeEnlazado *getFinal();

    void setFinal(NodoEnterosDoblementeEnlazado *);

    bool esVacia();

    void agregarInicio(int);

    void agregarFinal(int);

    void agregarOrdenado(int);

    bool buscar(int);

    bool eliminar(int);

    bool eliminarIndice(int);

    void mostrarInicioFin();

    void mostrarFinInicio();
};


#endif //ED_PRACTICA_LISTACIRCULARDOBLEMENTEENLAZADA_H
