#include <iostream>
#include "List.h"

using namespace std;

int main(int argc , char** argv) {

    LinkedList Try1;

    Try1.AddNode(3);
    Try1.AddNode(5);
    Try1.AddNode(7);
    Try1.AddNode(9);
    Try1.AddNode(11);

    Try1.DeleteNode(3);

    Try1.PrintList();
    return 0;
}