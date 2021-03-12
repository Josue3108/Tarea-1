/*
 *@file Collector.h
 * @version 1.0
 * @date 11/3/2021
 * @author Josue Guillermo Granados Chacon
 * @title Collector
 * @brief Generates a Collector for the linked list
 */

class Collector {

private:
    /*
     * @brief Node structure
     */
    struct node{// the structure of the node
        int data;
        node* next;
    };

    typedef struct node* nodePtr; // pointer for nodes

    nodePtr head;
    nodePtr current;
    nodePtr temp;

public:
    /*
     * @brief Constructor class for Collector
     */
    Collector ();
    /*
     * @brief Add a node to the collector
     * @param addData the memory position of a node
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
};


