//
// Created by Jocselyn Aguilar on 11/11/22.
//

#ifndef PROYECTO1_NODOPILAS_H
#define PROYECTO1_NODOPILAS_H

#include "Nodo.h"
#include "Pila.h"

class NodoPilas{
private:
    explicit NodoPilas(Pila);
public:
    Nodo *next;
    Pila data;

};
#endif //PROYECTO1_NODOPILAS_H
