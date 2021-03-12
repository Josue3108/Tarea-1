#include <iostream>
#include "List.h"


using namespace std;

LinkedList::LinkedList() {
    head = NULL;
    current = NULL;
    temp = NULL;
}

void LinkedList::AddNode(int addData) {
    nodePtr n = new node;
    n->next = head;
    n->data = addData;
    head = n;
    collector.AddNode(reinterpret_cast<int>(head));
}

void LinkedList::DeleteNode(int delData) {
    nodePtr delPtr = NULL;
    temp = head;
    current = head;
    while (current != NULL && current->data != delData){
        temp = current;
        current = current->next;
    }
    if (current == NULL){
        cout << delData << "was not in the list\n";
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
        collector.DeleteNode(reinterpret_cast<int>(delPtr));
        delete delPtr;
        cout << "The value " << delData << " was deleted\n";
    }
}

void LinkedList::ModifyHead(int modifyData) {
    head->data = modifyData;
}

void LinkedList::PrintList() {
    current = head;
    while (current != NULL){
        cout << current->data << endl;
        current = current->next;
    }
    cout << "Memory" << endl;
    collector.PrintList();
}
