class LinkedList{
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
    LinkedList ();
    void AddNode(int addData);
    void DeleteNode(int delData);
    void PrintList();

};