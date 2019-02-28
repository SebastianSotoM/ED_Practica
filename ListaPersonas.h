//
// Created by sebas on 2/27/2019.
//

#ifndef ED_PRACTICA_LISTAPERSONAS_H
#define ED_PRACTICA_LISTAPERSONAS_H

#include "NodoPersona.h"

class ListaPersonas {
private:
    NodoPersona *cabeza;
public:
    ListaPersonas();
    NodoPersona *getCabeza();
    void setCabeza(NodoPersona *);
    void agregarInicio(Persona *);
    void agregarFinal(Persona *);
    void agregarOrdenado(Persona *);
    bool esVacia();
    NodoPersona *buscarNodo(std::string);
    Persona *buscar(std::string);
    bool eliminar(std::string);
    std::string toString();
};


#endif //ED_PRACTICA_LISTAPERSONAS_H
