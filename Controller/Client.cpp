//
// Created by Jocselyn Aguilar on 11/11/22.
//

#include "../Model/Client.h"
Client::Client() {

}

string Client::getId() {
    return this->Id;
}

string Client::getName() {
    return this->name;
}

void Client::setSit(Nodo sit) {
    this->sit =  sit;
}

Nodo Client::getSit() {
    return this->sit;
}