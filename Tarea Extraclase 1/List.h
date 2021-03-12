/*
 *@file List.h
 * @version 1.0
 * @date 11/3/2021
 * @author Josue Guillermo Granados Chacon
 * @title Linked List
 * @brief Create a linked list and some functions
 */

#include "Collector.h"

class LinkedList{
private:
    /*
     * @brief Node structure
     */
    struct node{// the structure of the node
        int data;
        node* next;
    };

    typedef struct node* nodePtr; // pointer for nodes

    Collector collector;
    nodePtr head;
    nodePtr current;
    nodePtr temp;

public:
    /*
     * @brief Constructor class for the list
     */
    LinkedList ();
    /*
     * @brief Add a node to the linked list
     * @param AddData the value of the node
     */
    void AddNode(int addData);
    /*
     * @brief Delete a node in the list
     * @param delData the value to eliminate
     */
    void DeleteNode(int delData);
    /*
     * @brief Print the values in the list
     */
    void PrintList();
    /*
     * @brief Modify the value of the fist node
     * @param ModifyData the new value
     */
    void ModifyHead(int modifyData);

};