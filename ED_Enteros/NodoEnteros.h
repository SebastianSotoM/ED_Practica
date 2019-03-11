//
// Created by sebas on 3/10/2019.
//

#ifndef ED_PRACTICA_NODOENTEROS_H
#define ED_PRACTICA_NODOENTEROS_H


class NodoEnteros {
private:
    int value;
    NodoEnteros *siguiente;
public:
    NodoEnteros();
    NodoEnteros(int);
    int getValue();
    NodoEnteros *getSiguiente();
    void setValue(int);
    void setSiguiente(NodoEnteros *);
};


#endif //ED_PRACTICA_NODOENTEROS_H
