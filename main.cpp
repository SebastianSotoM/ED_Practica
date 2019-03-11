#include <iostream>
#include "ED_Personas/ListaPersonas.h"
#include "ED_Enteros/ListaEnteros.h"

using namespace std;

void probarPersonas();

void probarEnteros();

int main() {
//    probarPersonas();
    probarEnteros();
    return 0;
}

void probarEnteros() {
    ListaEnteros *lista = new ListaEnteros();

    lista->agregarOrdenado(7);
    lista->agregarOrdenado(3);
    lista->agregarOrdenado(6);
    lista->agregarOrdenado(5);

    lista->toString();
    cout << "Se imprime la longitud inicial\t" << lista->getLength() << endl;
    int index = 3;
    cout << "Se elimina el indice:\t" << index << "con resultado:\t" << lista->eliminarIndice(index) << endl;
    lista->toString();
    cout << "Se imprime la longitud final\t" << lista->getLength() << endl;
}

void probarPersonas() {
    ListaPersonas *lista = new ListaPersonas();

    lista->agregarOrdenado(new Persona("5", "Santi", 18));
    lista->agregarOrdenado(new Persona("4", "Santi", 18));
    lista->agregarOrdenado(new Persona("3", "Santi", 18));
    lista->agregarOrdenado(new Persona("2", "Santi", 18));

    lista->toString();
    cout << lista->getLength() << endl;
    int index = 3;
    cout << lista->eliminarIndice(index) << endl;
    lista->toString();
    cout << lista->getLength() << endl;
}