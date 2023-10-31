#include "hero.h"
#include "monster.h"
#include "villain.h"

#include "my_vector.h"

#include <fstream>
#include <sstream>


class Character {
public:
    // Constructors
    Character() {
        std::cout << "Character constructor called." << std::endl;
    }

    // Destructor
    ~Character() {
        std::cout << "Character destructor called." << std::endl;
    }
    
    void AddHero();
    void DeleteHero();
    void EditHero();

    void AddMonster();
    void DeleteMonster();
    void EditMonster();
    
    void AddVillain();
    void DeleteVillain();
    void EditVillain();

    void Print();

    void SaveToFile(std::string& path);
    void ReadFromFile(std::string& path);

private:
    MyVector<Hero> heroes;
    MyVector<Villain> villains;
    MyVector<Monster> monsters;
};