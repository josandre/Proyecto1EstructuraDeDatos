//
// Created by Jocselyn Aguilar on 31/10/22.
//

#ifndef PROYECTO1_NODO_H
#define PROYECTO1_NODO_H
#include<iostream>
#include "Client.h"


class Nodo {
public:
    explicit Nodo(Client);

    Nodo *getNext();

    void setNext(Nodo *next);

    Nodo *getBack();

    void setBack(Nodo *next);

    Client &getData();

    int getCost();

    void setCost();

    string getZone();

    string setZone(string);

private:
    Nodo *next;
    Nodo *back;
    Client data;
    int position;
    int cost;
    string zone;
};


#endif //PROYECTO1_NODO_H
