#ifndef ANIMALLIST_H
#define ANIMALLIST_H


class AnimalList
{
    class Node
    {
        friend class AnimalList;
        private:
        Animal* data;
        Node* next;
    };

public:
    AnimalList();
    ~AnimalList();
    add(Animal*);
    void print();
};

#endif // ANIMALLIST_H
