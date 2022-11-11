cmake_minimum_required(VERSION 3.23)
project(Proyecto1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Proyecto1 main.cpp Controller/Nodo.cpp Model/Nodo.h Controller/ListaSimple.cpp Model/ListaSimple.h Model/Client.h Controller/Client.cpp Model/ListaDoblePreferencial.h Controller/ListaDoblePreferencial.cpp Model/PilaGraderia.h Model/Pila.h Model/NodoPilas.h Controller/PilasGraderias.cpp Controller/Pila.cpp Controller/NodoPilas.cpp)
