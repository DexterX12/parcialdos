#include <iostream>
#include "inventory.h"

void Inventory::show(){

    if (Inventory::inventory.sizeOf() < 1) {
        std::cout << "No existen elementos en el inventario" << std::endl;
        return;
    }

    Inventory::inventory.show();
}

void Inventory::add(Product* item) {
    Inventory::inventory.addAfter(item);
}

void Inventory::erase(std::string itemID) {

    if (!Inventory::inventory.exists(itemID)) {
        std::cout << "Ese elemento no existe en la lista" << std::endl;
        return;
    }

    Inventory::inventory.erase(itemID);
}