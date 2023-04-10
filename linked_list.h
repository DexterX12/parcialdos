#include <iostream>
#include "product.h"

class Node {
    public:
        Product *data;
        Node* next;

        Node(Product *data); 
};

class LinkedList {
    public:
        Node* head = NULL;
    
    void addAfter(Product *dta, Node* currentNode=NULL);
    Product* get(std::string id, Node* currentNode=NULL);
    void erase(std::string id, Node* currentNode=NULL);
    bool exists(std::string id, Node* currentNode=NULL);
    void show();
    int sizeOf(Node* currentNode=NULL, int currentLength=0);
};