// Class_Amphibians.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Animal {
    string name;
public:
    Animal(string name) {
        std::cout << "It's an Animal" << std::endl;
    }

};

class Land_Animal:virtual public Animal {
    string name;
public:
    Land_Animal(string name) :Animal(name) {
        std::cout << "It's a Land_Animal" << std::endl;
    }

};

class Water_Animal:virtual public Animal {
    string name;
public:
    Water_Animal(string name) :Animal(name) {
        std::cout << "It's a Water_Animal" << std::endl;
    }

};

class Amphibian:public Land_Animal, public Water_Animal {
    string name;
public:
    Amphibian(string name) :Land_Animal(name), Water_Animal(name), Animal(name){
        std::cout << "It's an Amphibian" << std::endl;
    }

};

int main()
{
    Animal* crocodile = new Amphibian("Aligator");

    return 0;
}
