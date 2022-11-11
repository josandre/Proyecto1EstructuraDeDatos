//
// Created by Jocselyn Aguilar on 11/11/22.
//

#ifndef PROYECTO1_LISTADOBLEPREFERENCIAL_H
#define PROYECTO1_LISTADOBLEPREFERENCIAL_H

#include "Nodo.h"

class ListaDoblePreferencial{
public:
    explicit ListaDoblePreferencial();
    Nodo getHead();
    int getlenght();
    void setLenght(int);
    void showSits();
    void inFirstSit(Client);
    void setHead(Nodo *);

private:
    int lenght = 10;
    Nodo *head;
};

#endif //PROYECTO1_LISTADOBLEPREFERENCIAL_H
