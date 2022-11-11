//
// Created by Jocselyn Aguilar on 11/11/22.
//


#include "../Model/Pila.h"

Pila::Pila(){
    this->up = nullptr;
}

int Pila::getlenght() {
    return this->lenght;
}

Nodo Pila::getUp() {
    return *this->up;
}

void Pila::setUp(Nodo *newNodo) {
    this->up = newNodo;
}