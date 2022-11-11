//
// Created by Jocselyn Aguilar on 11/11/22.
//

#ifndef PROYECTO1_PILA_H
#define PROYECTO1_PILA_H

#include "Nodo.h"

class Pila{
public:
    explicit Pila();
    int getlenght();
    Nodo getUp();
    void setUp(Nodo *);

private:
    Nodo *up;
    int lenght = 5;
};
#endif //PROYECTO1_PILA_H
