//
// Created by Jocselyn Aguilar on 31/10/22.
//

#include "../Model/ListaSimple.h"
ListaSimple::ListaSimple(){};

Nodo *ListaSimple::getHead()  {
    return head;
}

void ListaSimple::setHead(Nodo *head) {
    ListaSimple::head = head;
}

bool  ListaSimple::addBeginnig(int data) {
    Nodo *newNodo = new Nodo(data);
    bool answer = false;

    if(getHead() == nullptr){
        setHead(newNodo);
        answer = true;

    } else{
        newNodo->setNext(getHead());
        setHead(newNodo);
        answer = true;

    }

    return answer;
}

bool  ListaSimple::addEnd(int data) {
    Nodo *newNodo = new Nodo(data);
    Nodo *aux = getHead();
    bool answer = false;

    if(getHead() == nullptr){
        setHead(newNodo);
        answer = true;
    } else{
        while (aux->getNext() != nullptr){
            aux->setNext(aux->getNext());
        }

        aux->setNext(newNodo);
        answer = true;
    }

    return answer;
}

void ListaSimple::showList() {
    Nodo *aux = getHead();

    if(getHead() != nullptr){
        cout << "the list is empty";
    } else{
        while (aux != nullptr){
            cout << aux->getData() << "|";
            aux = aux->getNext();
        }
        cout << endl;
    }
}

bool ListaSimple::isEmpty() {
    bool answer = false;

    if(getHead() == nullptr){
        answer = true;
    } else{
        cout << "there are " << getAvailable() << " free" << endl;
    }
}

int ListaSimple::getLength() {
    return length;
}


void ListaSimple::setLength(int newlength) {
    length = newlength;
}

int ListaSimple::getAvailable() {
    return available;
}

void ListaSimple::setAvailable(int newAvailable) {
    if(newAvailable == getLength()){
        available = newAvailable;
    } else{
        cout << "The amount is incorrect, you should have the same available spots that the length" << endl;
    }
}
bool ListaSimple::search(int data) {
    Nodo *aux = getHead();
    bool answer = false;
    while (aux->getNext() != nullptr){
        if(aux->getData() == data){
            answer = true;
            aux->setNext(aux->getNext());
            break;
        }
    }
    return answer;
}

bool ListaSimple::deletePosition(int) {

}

