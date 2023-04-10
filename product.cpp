#include <iostream>
#include "product.h"

Television::Television (std::string name, std::string id, double price, std::string screenResolution) {
    this->name = name;
    this->id = id;
    this->price = price;
    this->screenResolution = screenResolution;
}

Computer::Computer (std::string name, std::string id, double price, int storageSize) {
    this->name = name;
    this->id = id;
    this->price = price;
    this->storageSize = storageSize;
}

SmartPhone::SmartPhone (std::string name, std::string id, double price, std::string cameraResolution) {
    this->name = name;
    this->id = id;
    this->price = price;
    this->cameraResolution = cameraResolution;
}