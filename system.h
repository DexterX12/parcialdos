#include "inventory.h"

class System {
    public:
        
        void menu();
        void showInventory();
        void addProductToInventory(int type);
        void deleteProductFromInventory(std::string id);
};