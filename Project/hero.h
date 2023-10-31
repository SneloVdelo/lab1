#pragma once

#include <iostream>
#include <string>

class Hero {
public:
    // Constructors
    Hero() {
        name = "Hero";
        weaponType = "Sword";
        skills = "None";
        std::cout << "Hero Default Constructor called for: " << name << std::endl;
    }

    Hero(std::string n, std::string w, std::string s) : name(n), weaponType(w), skills(s) {
        std::cout << "Hero Parameterized Constructor called for: " << name << std::endl;
    }

    Hero(const Hero& other) : name(other.name), weaponType(other.weaponType), skills(other.skills) {
        std::cout << "Hero Copy Constructor called for: " << name << std::endl;
    }

    // Destructor
    ~Hero() {
        std::cout << "Hero Destructor called for: " << name << std::endl;
    }

    std::string getName() const {
        return name;
    }

    std::string getWeaponType() const {
        return weaponType;
    }

    std::string getSkills() const {
        return skills;
    }

    // Setter methods
    void setName(std::string n) {
        name = n;
    }

    void setWeaponType(std::string w) {
        weaponType = w;
    }

    void setSkills(std::string s) {
        skills = s;
    }
    
    void PrintHero()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Weapon type: " << weaponType << std::endl;
        std::cout << "Skills: " << skills << std::endl;
    }

private:
    std::string name;
    std::string weaponType;
    std::string skills;
};
