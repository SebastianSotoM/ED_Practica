cmake_minimum_required(VERSION 3.13)
project(ED_Practica)

set(CMAKE_CXX_STANDARD 14)

add_executable(ED_Practica main.cpp ED_Personas/NodoPersona.cpp ED_Personas/NodoPersona.h ED_Personas/Persona.cpp ED_Personas/Persona.h ED_Personas/ListaPersonas.cpp ED_Personas/ListaPersonas.h ED_Enteros/NodoEnteros.cpp ED_Enteros/NodoEnteros.h ED_Enteros/ListaEnteros.cpp ED_Enteros/ListaEnteros.h ED_Enteros/PilaEnteros.cpp ED_Enteros/PilaEnteros.h)