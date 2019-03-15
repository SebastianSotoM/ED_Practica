//
// Created by sebas on 3/15/2019.
//

#ifndef ED_PRACTICA_NODOENTEROSDOBLEMENTEENLAZADO_H
#define ED_PRACTICA_NODOENTEROSDOBLEMENTEENLAZADO_H


class NodoEnterosDoblementeEnlazado {

private:
    int value;
    NodoEnterosDoblementeEnlazado * siguiente;
    NodoEnterosDoblementeEnlazado *anterior;
public:
    NodoEnterosDoblementeEnlazado();
    NodoEnterosDoblementeEnlazado(int);
    NodoEnterosDoblementeEnlazado *getAnterior();
    void setAnterior(NodoEnterosDoblementeEnlazado *);
    NodoEnterosDoblementeEnlazado *getSiguiente();
    void setSiguiente(NodoEnterosDoblementeEnlazado *);
    int getValue();
    void setValue(int);
};


#endif //ED_PRACTICA_NODOENTEROSDOBLEMENTEENLAZADO_H
