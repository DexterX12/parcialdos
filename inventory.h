#include <iostream>
#include "linked_list.h"

class Inventory {
    public:
        static inline LinkedList inventory = LinkedList();

        static void show();
        static void add(Product* item);
        static void erase(std::string itemID);
};