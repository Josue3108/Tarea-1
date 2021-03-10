//
// Created by yangr on 10/3/2021.
//
#include <iostream>
#include "Collector.h"

using namespace std;

Collector::Collector() {
    head = NULL;
    current = NULL;
    temp = NULL;

}

void Collector::AddNode(int addData) {
    nodePtr n = new node;
    n->next = head;
    n->data = addData;
    head = n;
}

void Collector::DeleteNode(int delData) {
    nodePtr delPtr = NULL;
    temp = head;
    current = head;
    while (current != NULL && current->data != delData){
        temp = current;
        current = current->next;
    }
    if (current == NULL){
        cout << delData << "was not in memory\n";
        delete delPtr;
    }
    else{
        delPtr = current;
        current = current->next;
        temp->next = current;
        if (delPtr == head){
            head = head->next;
            temp = NULL;
        }
        delete delPtr;
        cout << "The space " << delData << " was deleted\n";
    }
}

void Collector::PrintList() {
    current = head;
    while (current != NULL){
        cout << current->data << endl;
        current = current->next;
    }
}