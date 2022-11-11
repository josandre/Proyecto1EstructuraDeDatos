//
// Created by Jocselyn Aguilar on 11/11/22.
//

#ifndef PROYECTO1_PILAGRADERIA_H
#define PROYECTO1_PILAGRADERIA_H

#include "NodoPilas.h"

class PilaGraderia{
public:
    explicit PilaGraderia();
    int getLenght();
    NodoPilas getUp();
    void setUp(NodoPilas *);

private:
    int lenght = 4;
    NodoPilas *up;
};


#endif //PROYECTO1_PILAGRADERIA_H
