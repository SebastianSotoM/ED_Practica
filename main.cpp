#include <iostream>
#include "ED_Personas/ListaPersonas.h"
#include "ED_Enteros/ListaEnteros.h"
#include "ED_Enteros/PilaEnteros.h"
#include "ED_Enteros/ColaEnteros.h"

using namespace std;

void probarPersonas();

void probarPilaEnteros();

void probarEnteros();

void probarColaEnteros();

void probarDeColaAPila();

void probarDePilaACola();

int main() {
    probarDePilaACola();
    return 0;
}

void probarColaEnteros() {
    ColaEnteros *cola = new ColaEnteros();
    cola->insertar(5);
    cola->insertar(4);
    cola->insertar(3);
    cola->insertar(2);
    cola->insertar(1);

    cout << "la longitud es:\t" << cola->getLongitud() << endl;
    cout << "El valor de la cabeza:\t" << cola->getCabeza()->getValue() << endl;
    cola->eliminarPos(1);
    cout << "la longitud es:\t" << cola->getLongitud() << endl;
    cout << "El valor de la cabeza:\t" << cola->getCabeza()->getValue() << endl;
    cola->atender();
    cout << "la longitud es:\t" << cola->getLongitud() << endl;
    cout << "El valor de la cabeza:\t" << cola->getCabeza()->getValue() << endl;
}

void probarPilaEnteros() {
    PilaEnteros *pila = new PilaEnteros();
    pila->push(5);
    pila->push(4);
    pila->push(3);
    pila->push(2);
    pila->push(1);

    cout << pila->getTop() << endl;
    cout << pila->pop() << endl;
    cout << pila->getTop() << endl;
    cout << pila->getLongitud() << endl;
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

void probarDeColaAPila() {

    cout << "Se crea una cola con los valores {1,2,3,4,5} y una pila vacia" << endl;

    ColaEnteros *cola = new ColaEnteros();
    cola->insertar(1);
    cola->insertar(2);
    cola->insertar(3);
    cola->insertar(4);
    cola->insertar(5);

    PilaEnteros *pila = new PilaEnteros();

    cout << "La cola esta vacia\t" << cola->estaVacia() << "\tLongitud actual:\t" << cola->getLongitud() << endl;
    cout << "La pila esta vacia\t" << pila->estaVacia() << "\tLongitud actual:\t" << pila->getLongitud() << endl;

    cout<<"La cabeza de la cola es:\t"<<cola->getCabeza()->getValue()<<endl;
    cout<<"La cabeza de la pila es:\t";
    if(pila->getCabeza() == nullptr)
        cout<<"nula";
    else
        cout<<pila->getCabeza()->getValue();
    cout<<endl;

    cout<<"Se atiende la cola y el valor se agrega a la pila (esto ocurre 2 veces)"<<endl;

    pila->push(cola->atender());
    pila->push(cola->atender());

    cout << "La cola esta vacia\t" << cola->estaVacia() << "\tLongitud actual:\t" << cola->getLongitud() << endl;
    cout << "La pila esta vacia\t" << pila->estaVacia() << "\tLongitud actual:\t" << pila->getLongitud() << endl;

    cout<<"La cabeza de la cola es:\t"<<cola->getCabeza()->getValue()<<endl;
    cout<<"La cabeza de la pila es:\t";
    if(pila->getCabeza() == nullptr)
        cout<<"nula";
    else
        cout<<pila->getCabeza()->getValue();
    cout<<endl;
}

void probarDePilaACola() {

    cout << "Se crea una pila con los valores {1,2,3,4,5} y una cola vacia" << endl;

    ColaEnteros *cola = new ColaEnteros();

    PilaEnteros *pila = new PilaEnteros();
    pila->push(1);
    pila->push(2);
    pila->push(3);
    pila->push(4);
    pila->push(5);

    cout << "La cola esta vacia\t" << cola->estaVacia() << "\tLongitud actual:\t" << cola->getLongitud() << endl;
    cout << "La pila esta vacia\t" << pila->estaVacia() << "\tLongitud actual:\t" << pila->getLongitud() << endl;

    cout<<"La cabeza de la pila es:\t"<<pila->getCabeza()->getValue()<<endl;
    cout<<"La cabeza de la cola es:\t";
    if(cola->getCabeza() == nullptr)
        cout<<"nula";
    else
        cout<<cola->getCabeza()->getValue();
    cout<<endl;

    cout<<"Se hace pop en la pila y el valor se agrega a la cola (esto ocurre 2 veces)"<<endl;

    cola->insertar(pila->pop());
    cola->insertar(pila->pop());

    cout << "La cola esta vacia\t" << cola->estaVacia() << "\tLongitud actual:\t" << cola->getLongitud() << endl;
    cout << "La pila esta vacia\t" << pila->estaVacia() << "\tLongitud actual:\t" << pila->getLongitud() << endl;

    cout<<"La cabeza de la pila es:\t"<<pila->getCabeza()->getValue()<<endl;
    cout<<"La cabeza de la cola es:\t";
    if(cola->getCabeza() == nullptr)
        cout<<"nula";
    else
        cout<<cola->getCabeza()->getValue();
    cout<<endl;

}