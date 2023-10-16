#include "hero.h"
#include "monster.h"
#include "villain.h"


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

    void AddEntity(Entity* entity) {
        if (current_size >= capacity) {
            expandCapacity();
        }
    }


private:
    void expandCapacity() {
        int newCapacity = capacity * 2 + 1;
        Entity** newEntity = new Entity * [newCapacity];

        // Копирование данных из старого массива в новый
        for (int i = 0; i < capacity; ++i) {
            newEntity[i] = entites[i];
        }

        // Удаление старого массива
        delete[] entites;

        // Переключение на новый массив и установка новой емкости
        entites = newEntity;
        capacity = newCapacity;
    }

    // Очищает память
    void clearGarage() {
        for (int i = 0; i < current_size; ++i) {
            delete entites[i];
        }
        delete[] entites;
    }



    Entity** entites = nullptr;

    int current_size = 0;
    int capacity = 0;
};