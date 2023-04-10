
#include <iostream>

class Product {
    public:
        std::string name;
        std::string id;
        double price;

        virtual ~Product() {}; //polymorphic class
};

class Television: public Product {
    public:
        std::string screenResolution;
        Television (std::string name, std::string id, double price, std::string screenResolution);
};

class Computer: public Product {
    public:
        int storageSize;
        Computer (std::string name, std::string id, double price, int storageSize);
};

class SmartPhone: public Product {
    public:
        std::string cameraResolution;
        SmartPhone (std::string name, std::string id, double price, std::string cameraResolution);
};