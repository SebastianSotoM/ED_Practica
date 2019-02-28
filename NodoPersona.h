//
// Created by sebas on 2/27/2019.
//

#ifndef ED_PRACTICA_NODOPERSONA_H
#define ED_PRACTICA_NODOPERSONA_H

#include "Persona.h"

class NodoPersona {
private:
    Persona *pers;
    NodoPersona *siguiente;
public:
    NodoPersona();
    NodoPersona(Persona *);
    Persona *getPersona();
    NodoPersona *getSiguiente();
    void setPersona(Persona *);
    void setSiguiente(NodoPersona *);
};


#endif //ED_PRACTICA_NODOPERSONA_H
