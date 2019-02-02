#ifndef ANIMALLIST_H
#define ANIMALLIST_H

#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>

using namespace std;

#include "animal.h"

template<class T>
class AnimalList
{
    template<class U>
    class Node
    {
        friend class AnimalList;
        private:
            T data;
            Node<T>* next;
    };

public:
    AnimalList();
    ~AnimalList();
    void add(T);
    void print();

private:
    Node<T>* head;
};

template<class T>
AnimalList<T>::AnimalList(): head(0){}

template<class T>
AnimalList<T>::~AnimalList(){
    Node<T>* currNode;
    Node<T>* nextNode;
    currNode = head;

    while(currNode != NULL){
        nextNode = currNode->next;
        delete currNode->data;
        delete currNode;
        currNode = nextNode;

    }
}

template<class T>
void AnimalList<T>::add(T a){

}

template<class T>
void AnimalList<T>::print(){
    Node<T>* currNode;
    Node<T>* nextNode;
    currNode = head;

    while(currNode != NULL){
        cout<<currNode->data<<endl;
        nextNode = currNode->next;
        currNode = nextNode;
    }

}

#endif // ANIMALLIST_H
