#include <iostream>
#include "system.h"

int index = 1;

void System::showInventory() {
    Inventory::show();
}

void System::addProductToInventory(int type) {

    switch (type) {
        case 1: {
            Product *product = new Television("LG TV 2022", "TV" + std::to_string(index), 32000, "1980p");
            Inventory::inventory.addAfter(product);
            break;
        }
        case 2: {
            Product *product = new Computer("Laptop MSI Ryzen 7 7700H", "PC" + std::to_string(index), 21000, 400);
            Inventory::inventory.addAfter(product);
            break;
        }
        case 3: {
            Product *product = new SmartPhone("Google Pixel", "SP" + std::to_string(index), 17000, "120MP");
            Inventory::inventory.addAfter(product);
            break;
        }
        default:
            std::cout << "Se ha especificado un tipo que no existe" << std::endl;
    }

    index++;
}

void System::deleteProductFromInventory(std::string id) {
    Inventory::erase(id);
}