//
// Created by yangr on 10/3/2021.
//

#ifndef MAIN_CPP_COLLECTOR_H
#define MAIN_CPP_COLLECTOR_H


class Collector {

private:
    struct node{
        int data;
        node* next;
    };

    typedef struct node* nodePtr;

    nodePtr head;
    nodePtr current;
    nodePtr temp;

public:
    Collector ();
    void AddNode(int addData);
    void DeleteNode(int delData);
    void PrintList();
};


#endif //MAIN_CPP_COLLECTOR_H
