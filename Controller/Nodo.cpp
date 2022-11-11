//
// Created by Jocselyn Aguilar on 31/10/22.
//

#include "../Model/Nodo.h"

Nodo::Nodo(Client data) {
    this->data = data;
}

Nodo *Nodo::getNext()  {
    return this->next;
}

void Nodo::setNext(Nodo *next) {
    this->next = next;
}

Nodo *Nodo::getBack()  {
    return this->back;
}

void Nodo::setBack(Nodo *next) {
    this->back = back;
}

Client &Nodo::getData() {
    return this->data;
}




