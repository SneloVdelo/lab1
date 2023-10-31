#pragma once
#include <string>
#include <iostream>

class Villain {
public:
    // Constructors
    Villain() {
        name = "Default_Villain";
        weaponType = "Dark_Magic";
        evilDeed = "None";
        lair = "Cave";
        skills = "Cunning";
        std::cout << "Villain Default Constructor called for: " << name << std::endl;
    }

    Villain(std::string n, std::string w, std::string deed, std::string l, std::string s) :
        name(n), weaponType(w), evilDeed(deed), lair(l), skills(s) {
        std::cout << "Villain Parameterized Constructor called for: " << name << std::endl;
    }

    Villain(const Villain& other) : name(other.name), weaponType(other.weaponType),
        evilDeed(other.evilDeed), lair(other.lair), skills(other.skills) {
        std::cout << "Villain Copy Constructor called for: " << name << std::endl;
    }

    // Destructor
    ~Villain() {
        std::cout << "Villain Destructor called for: " << name << std::endl;
    }

    std::string getName() const {
        return name;
    }

    std::string getWeaponType() const {
        return weaponType;
    }

    std::string getEvilDeed() const {
        return evilDeed;
    }

    std::string getLair() const {
        return lair;
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

    void setEvilDeed(std::string deed) {
        evilDeed = deed;
    }

    void setLair(std::string l) {
        lair = l;
    }

    void setSkills(std::string s) {
        skills = s;
    }

    void PrintVillain()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Weapon type: " << weaponType << std::endl;
        std::cout << "Evil deed: " << evilDeed << std::endl;
        std::cout << "Lair: " << lair << std::endl;
        std::cout << "Skills: " << skills << std::endl;
    }

private:
    std::string name;
    std::string weaponType;
    std::string evilDeed;
    std::string lair;
    std::string skills;
};