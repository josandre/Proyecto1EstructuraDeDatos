//
// Created by Jocselyn Aguilar on 11/11/22.
//
#include "../Model/ListaDoblePreferencial.h"

ListaDoblePreferencial::ListaDoblePreferencial() {
    this->head = nullptr;
}

void ListaDoblePreferencial::showSits() {

}

Nodo ListaDoblePreferencial::getHead() {
    return this->getHead();
}

void ListaDoblePreferencial::setHead(Nodo *client) {
    this->head = client;
}

void ListaDoblePreferencial::inFirstSit(Client client) {
    Nodo *newClient = new Nodo(client);

    if(this->head == nullptr){
        setHead(newClient);
    }else{
        newClient->setNext(this->head);
        this->head->setBack(newClient);
        this->head = newClient;
    }
}



