#include <iostream>
#include "ListaPersonas.h"

int main() {
    ListaPersonas *lista = new ListaPersonas();

    lista->agregarOrdenado(new Persona("5","Santi",18));
    lista->agregarOrdenado(new Persona("4","Santi",18));
    lista->agregarOrdenado(new Persona("3","Santi",18));
    lista->agregarOrdenado(new Persona("2","Santi",18));

    std::cout<<lista->eliminar("4")<<std::endl;

    lista->toString();
    return 0;
}