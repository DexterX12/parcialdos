#include <iostream>
#include "linked_list.h"

Node::Node (Product *dta) {
    this->data = dta;
    this->next = NULL;
}

void LinkedList::addAfter (Product *dta, Node* currentNode) {
    
    if (!this->head) {
        Node *newNodeTail = new Node(dta);
        newNodeTail->next = NULL;
        this->head = newNodeTail;
    } else {

        if (!currentNode)
            currentNode = this->head;

        if (currentNode->next) {
            return this->addAfter(dta, currentNode->next);
        }


        Node *newNodeTail = new Node(dta);
        newNodeTail->next = currentNode->next; // next will be null for currentNode
        
        currentNode->next = newNodeTail;
    }

}

Product* LinkedList::get(std::string id, Node* currentNode) {
    if (!this->head)
        return NULL;

    if (!currentNode) {
        currentNode = this->head;
        if (!this->exists(id))
            return NULL;
    }

    if (currentNode->data->id == id)
        return currentNode->data;
    else
        return this->get(id, currentNode->next);
    
}

void LinkedList::erase(std::string id, Node* currentNode) {

    if (!this->head)
        return;


    if (!currentNode)
        currentNode = this->head;

    // What if the data to erase is the head?

    if ((currentNode == this->head) && (currentNode->data->id == id)) {
        Node* nodeToDelete = this->head;
        this->head = this->head->next;
        delete nodeToDelete;
        return;
    }

    // 'cuz it's a simple linked list, I need to know the previous and the next of the deleting node
    if (currentNode->next->data->id == id) {
        Node* nodeToDelete = currentNode->next;

        currentNode->next = nodeToDelete->next;
        delete nodeToDelete;
        return;
    }

    return this->erase(id, currentNode->next);
}

bool LinkedList::exists(std::string id, Node* currentNode) {

    if (!this->head)
        return false;

    if (!currentNode)
        currentNode = this->head;

    if (currentNode->data->id == id)
        return true;

    if (currentNode->next)
        return this->exists(id, currentNode->next);

    return false;
}

int LinkedList::sizeOf(Node* currentNode, int currentLength) {

    if (!this->head)
        return currentLength;

    if (!currentNode)
        currentNode = this->head;

    if (currentNode->next)
        return this->sizeOf(currentNode->next, currentLength+1);
    else
        currentLength += 1; // the last one needs to be incremented manually 'cuz next will be NULL

    return currentLength;
}

void LinkedList::show() {
    
    std::string separator = "----------------------------------------------------";

    Node* currentNode = this->head;

    while (currentNode) {
        std::cout << "Modelo: " << currentNode->data->name << std::endl;
        std::cout << "Precio: " << currentNode->data->price << std::endl;
        std::cout << "ID: " << currentNode->data->id << std::endl;

        // Television?
        if (dynamic_cast<Television*>(currentNode->data)) {
            Television *tv = dynamic_cast<Television*>(currentNode->data);
            std::cout << "Resolución de pantalla: " << tv->screenResolution; 
        }

        //Computer?

        if (dynamic_cast<Computer*>(currentNode->data)) {
            Computer *pc = dynamic_cast<Computer*>(currentNode->data);
            std::cout << "Almacenamiento: " << pc->storageSize;
        }

        //SmartPhone?

        if (dynamic_cast<SmartPhone*>(currentNode->data)) {
            SmartPhone *sp = dynamic_cast<SmartPhone*>(currentNode->data);
            std::cout << "Almacenamiento: " << sp->cameraResolution;
        }
        
        std::cout << "\n" << separator << "\n" << std::endl;

        currentNode = currentNode->next;
    }

}