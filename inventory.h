#include <iostream>
#include "linked_list.h"

class Inventory {
    public:
        static inline LinkedList inventory = LinkedList();

        static void showInventory();
        static void addInventoryItem(Product* item);
        static void deleteInventoryItem(std::string itemID);
};