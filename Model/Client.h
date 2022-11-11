//
// Created by Jocselyn Aguilar on 11/11/22.
//

#ifndef PROYECTO1_CLIENT_H
#define PROYECTO1_CLIENT_H
#include<iostream>
#include "Sit.h"
#include "Nodo.h"

using namespace std;

class Client{
public:
    explicit Client();
    string getName();
    string getId();
    void setSit(Nodo);
    Nodo getSit();

private:
    string name;
    string Id;
    Nodo sit;
};
#endif //PROYECTO1_CLIENT_H
