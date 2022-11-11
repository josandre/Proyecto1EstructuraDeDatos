//
// Created by Jocselyn Aguilar on 31/10/22.
//

#ifndef PROYECTO1_LISTASIMPLE_H
#define PROYECTO1_LISTASIMPLE_H


#include "Nodo.h"
#include <iostream>

using namespace std;

class ListaSimple {
public:
    explicit ListaSimple();
    Nodo *getHead();
    void setHead(Nodo *head);
    bool addBeginnig(int);
    bool addEnd(int);
    void showList();
    bool isEmpty();
    int getAvailable();
    int getLength();
    void setLength(int);
    bool search(int);
    bool deletePosition(int);
    void upward(int *data);
    void falling(int *data);
    Nodo *getLast();
    bool addBeforeThat(int place, int *data);
    bool addAfterThat(int place, int *data);
    void clear();

private:
    void setAvailable(int);
    Nodo *head = nullptr;
    int available = 20;
    int length = 20;
};


#endif //PROYECTO1_LISTASIMPLE_H
