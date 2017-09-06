#ifndef CIRCLIST_H
#define CIRCLIST_H

#include <iostream>
#include "../Lista/Nodo.h"

class CircList {

    private:
        Nodo<T> *Puntero;

    public:
        CircList();

        CircList(const Lista<T> &li);

        ~CircList()();

        bool esVacia();

        int getTamanio();

        void insertar(T dato);

        void remover();

        void avanzar();

        T getDato();

        void reemplazar(T dato);

        void vaciar();
};

CircList::CircList(){
    Puntero = Null;
}

bool CircList::esVacia() {
    return Puntero = NULL;
}

void CircList::insertar(T dato){
    if(Puntero==NULL){
        Puntero = new Nodo(dato);
        Puntero->setNext(Puntero);
        return;
    }

    Nodo* tmp = new Nodo(dato, Puntero->getNext());
    Puntero->setNext(tmp);
    Puntero = Puntero->getNext();
}

void CircList::avanzar(){
    if (Puntero != Null)
    Puntero = Puntero->getNext();
}

void CircList::remover() {
    Nodo *aux = Puntero;

    if (NULL == Puntero)
        return;

    while(aux->getNext() != Puntero ){
        aux = aux->getNext(); //seria un problema si hay un solo nodo
    }

    if (aux == Puntero){
        delete Puntero;
        Puntero = NULL;
        return;
    }

    aux->setNext(Puntero->getNext());// entenerst
    delete Puntero;
    Puntero = aux->getNext();
}
int CircList::getDato() {
    if(Puntero == NULL)
        throw 1;
    return Puntero->getDato();
}

int CircList::getTamanio() {
    Nodo *aux = Puntero;
    int tamanio = 1;

    if (NULL == Puntero)
        return 0;// preguntar como es lo de return 0

    while(aux->getNext() != Puntero ){
        tamanio++;
        aux = aux->getNext();
    }
        return tamanio;
}

int CircList::reemplazar(T dato) {
    if (Puntero == NULL)
        throw 1;

    return Puntero->setDato();
}

void CircList::vaciar() {
    while(!esVacia()){
        remover();
    }

}



#endif //CIRCLIST_H
