//
// Created by Jocselyn Aguilar on 11/11/22.
//

#include "../Model/PilaGraderia.h"

PilaGraderia::PilaGraderia(){
    this->up = nullptr;
}

NodoPilas PilaGraderia::getUp() {
    return *this->up;
}

int PilaGraderia::getLenght() {
    return this->lenght;
}

void PilaGraderia::setUp(NodoPilas *newNodoPilas) {
    this->up = newNodoPilas;
}