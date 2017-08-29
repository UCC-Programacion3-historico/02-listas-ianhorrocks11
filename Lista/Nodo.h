//
// Created by Ian Horrocks on 28/8/17.
//

#ifndef NODO_H
#define NODO_H

//#include <iostream>

template <class T>
class Nodo{
    // friend class Lista;
private:
    T dato;
    Nodo *next;

public:
    Nodo(){
        next = NULL;
    }

    Nodo(T d, Nodo *n){
        dato = d;
        next = n;
    }

    T getDato(){
        return dato;
    }

    void setDato(T d){
        dato = d;
    }

    Nodo *getNext(){
        return next;
    }

    void setNext(Nodo *n){
        next = n;
    }

};

#endif