#pragma once
#include <string>
#include <iostream>

class Monster {
public:
    // Constructors
    Monster() {
        name = "Monster";
        description = "Ugly_creature";
        std::cout << "Monster Default Constructor called for: " << name << std::endl;
    }

    Monster(std::string n, std::string desc) : name(n), description(desc) {
        std::cout << "Monster Parameterized Constructor called for: " << name << std::endl;
    }

    Monster(const Monster& other) : name(other.name), description(other.description) {
        std::cout << "Monster Copy Constructor called for: " << name << std::endl;
    }

    // Destructor
    ~Monster() {
        std::cout << "Monster Destructor called for: " << name << std::endl;
    }

    // Getter methods
    std::string getName() const {
        return name;
    }

    std::string getDescription() const {
        return description;
    }

    // Setter methods
    void setName(std::string n) {
        name = n;
    }

    void setDescription(std::string desc) {
        description = desc;
    }

    void PrintMonster()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Description: " << description << std::endl;
    }

private:
    std::string name;
    std::string description;
};