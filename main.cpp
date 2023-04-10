#include <iostream>
#include "system.h"

int main () {
    System sys;

    int tv = 1; // Television
    int pc = 2; // Computer
    int sp = 3; // SmartPhone
    
    sys.addProductToInventory(1);
    sys.addProductToInventory(1);
    sys.addProductToInventory(1);

    sys.addProductToInventory(2);
    sys.addProductToInventory(3);
    sys.addProductToInventory(1);

    sys.showInventory();

    // Deletes by ID
    sys.deleteProductFromInventory("TV6");
    sys.deleteProductFromInventory("PC4");

    std::cout << "\n\n\n\n\n\n" << std::endl;

    sys.showInventory();
}