#include "charecter.h"

void Character::AddHero()
{
	Hero hero;
	std::string name;
	std::string weaponType;
	std::string skills;

	std::cout << "Enter name: ";
	std::cin >> name;
	std::cout << "Weapon type: ";
	std::cin >> weaponType;
	std::cout << "Skills: ";
	std::cin >> skills;

	hero.setName(name);
	hero.setWeaponType(weaponType);
	hero.setSkills(skills);

	heroes.push_back(hero);
}

void Character::DeleteHero()
{
	std::cout << "Heroes: ";
	for (int i = 0; i < heroes.size(); ++i) {
		std::cout << i + 1 << ") " << heroes[i].getName() << std::endl;
	}
	int index;
	std::cout << "Input index: ";
	std::cin >> index;
	heroes.remove(index);
}

void Character::EditHero()
{
	std::cout << "Heroes:\n";
	for (int i = 0; i < heroes.size(); ++i) {
		std::cout << i + 1 << ") " << heroes[i].getName() << std::endl;
	}
	int index;
	std::cout << "Input index: ";
	std::cin >> index;
	index--;

	std::cout << "1) Name: " << heroes[index].getName() << std::endl;
	std::cout << "2) Weapon type: " << heroes[index].getWeaponType() << std::endl;
	std::cout << "3) Skills: " << heroes[index].getSkills() << std::endl;
	std::cout << "Select attribute: ";
	int attribute;
	std::cin >> attribute;

	if (attribute == 1) {
		std::string name;
		std::cout << "Enter name: ";
		std::cin >> name;
		heroes[index].setName(name);
	}
	else if (attribute == 2) {
		std::string weapon;
		std::cout << "Enter weapon type: ";
		std::cin >> weapon;
		heroes[index].setWeaponType(weapon);
	}
	else if (attribute == 3) {
		std::string skills;
		std::cout << "Enter skills: ";
		std::cin >> skills;
		heroes[index].setSkills(skills);
	}
	else {
		return;
	}
}

void Character::AddMonster()
{
	Monster monster;
	std::string name;
	std::string description;

	std::cout << "Enter name: ";
	std::cin >> name;
	std::cout << "Description: ";
	std::cin >> description;

	monster.setName(name);
	monster.setDescription(description);

	monsters.push_back(monster);
}

void Character::DeleteMonster()
{
	std::cout << "Monster: ";
	for (int i = 0; i < monsters.size(); ++i) {
		std::cout << i + 1 << ") " << monsters[i].getName() << std::endl;
	}
	int index;
	std::cout << "Input index: ";
	std::cin >> index;

	monsters.remove(index);
}

void Character::EditMonster()
{
	std::cout << "Monsters:\n";
	for (int i = 0; i < monsters.size(); ++i) {
		std::cout << i + 1 << ") " << monsters[i].getName() << std::endl;
	}
	int index;
	std::cout << "Input index: ";
	std::cin >> index;
	index--;
	std::cout << "1) Name: " << monsters[index].getName() << std::endl;
	std::cout << "2) Description: " << monsters[index].getDescription() << std::endl;
	std::cout << "Select attribute: ";
	int attribute;
	std::cin >> attribute;

	if (attribute == 1) {
		std::string name;
		std::cout << "Enter name: ";
		std::cin >> name;
		monsters[index].setName(name);
	}
	else if (attribute == 2) {
		std::string desc;
		std::cout << "Enter description: ";
		std::cin >> desc;
		monsters[index].setDescription(desc);
	}
	else {
		return;
	}
}

void Character::AddVillain()
{
	Villain villain;
	std::string name;
	std::string weapon;
	std::string deed;
	std::string lair;
	std::string skills;

	std::cout << "Enter name: ";
	std::cin >> name;
	std::cout << "Weapon type: ";
	std::cin >> weapon;
	std::cout << "Evil deed: ";
	std::cin >> deed;
	std::cout << "Lair: ";
	std::cin >> lair;
	std::cout << "Skills: ";
	std::cin >> skills;

	villain.setName(name);
	villain.setWeaponType(weapon);
	villain.setEvilDeed(deed);
	villain.setLair(lair);
	villain.setSkills(skills);

	villains.push_back(villain);
}

void Character::DeleteVillain()
{
	std::cout << "Villain: ";
	for (int i = 0; i < villains.size(); ++i) {
		std::cout << i + 1 << ") " << villains[i].getName() << std::endl;
	}
	int index;
	std::cout << "Input index: ";
	std::cin >> index;

	villains.remove(index);
}

void Character::EditVillain()
{
	std::cout << "Villains: \n";
	for (int i = 0; i < villains.size(); ++i) {
		std::cout << i + 1 << ") " << villains[i].getName() << std::endl;
	}
	int index;
	std::cout << "Input index: ";
	std::cin >> index;
	index--;
	std::cout << "1) Name: " << villains[index].getName() << std::endl;
	std::cout << "2) Weapon type: " << villains[index].getWeaponType() << std::endl;
	std::cout << "3) Evil deed: " << villains[index].getEvilDeed() << std::endl;
	std::cout << "4) Lair: " << villains[index].getLair() << std::endl;
	std::cout << "5) Skills: " << villains[index].getSkills() << std::endl;
	std::cout << "Select attribute: ";
	int attribute;
	std::cin >> attribute;

	if (attribute == 1) {
		std::string name;
		std::cout << "Enter name: ";
		std::cin >> name;
		villains[index].setName(name);
	}
	else if (attribute == 2) {
		std::string weapon;
		std::cout << "Enter weapon: ";
		std::cin >> weapon;
		villains[index].setWeaponType(weapon);
	}
	else if (attribute == 3) {
		std::string deed;
		std::cout << "Evil deed: ";
		std::cin >> deed;
		villains[index].setEvilDeed(deed);
	}
	else if (attribute == 4) {
		std::string lair;
		std::cout << "Evil lair: ";
		std::cin >> lair;
		villains[index].setLair(lair);
	}
	else if (attribute == 5) {
		std::string skills;
		std::cout << "Evil skills: ";
		std::cin >> skills;
		villains[index].setSkills(skills);
	}
	else {
		return;
	}
}

void Character::Print()
{
	std::cout << "////////////////////////////\n";
	std::cout << "\nHeroes:\n";
	for (int i = 0; i < heroes.size(); ++i) {
		std::cout << i + 1 << ")\n";
		heroes[i].PrintHero();
	}
	std::cout << "\nVillains:\n";
	std::cout << "----------------------------\n";
	for (int i = 0; i < villains.size(); ++i) {
		std::cout << i + 1 << ")\n";
		villains[i].PrintVillain();
	}
	std::cout << "\nMonsters:\n";
	std::cout << "----------------------------\n";
	for (int i = 0; i < monsters.size(); ++i) {
		std::cout << i + 1 << ")\n";
		monsters[i].PrintMonster();
	}
	std::cout << "////////////////////////////\n";
}

void Character::SaveToFile(std::string& path)
{
	std::ofstream out(path);
	if (!out.is_open()) {
		std::cout << "Invalid path to file";
		return;
	}
	for (int i = 0; i < heroes.size(); ++i) {
		out << "hero: ";
		out << heroes[i].getName() << " ";
		out << heroes[i].getWeaponType() << " ";
		out << heroes[i].getSkills() << "\n";
	}
	for (int i = 0; i < villains.size(); ++i) {
		out << "villain: ";
		out << villains[i].getName() << " ";
		out << villains[i].getWeaponType() << " ";
		out << villains[i].getEvilDeed() << " ";
		out << villains[i].getLair() << " ";
		out << villains[i].getSkills() << "\n";
	}
	for (int i = 0; i < monsters.size(); ++i) {
		out << "monster: ";
		out << monsters[i].getName() << " ";
		out << monsters[i].getDescription() << "\n";
	}
	out.close();
	std::cout << "Is done\n";
}

void Character::ReadFromFile(std::string& path)
{
	std::ifstream in(path);
	if (!in.is_open()) {
		std::cout << "Invalid path to file";
		return;
	}
	std::string str;
	std::string type;
	std::stringstream ss;
	while (in >> str) {
		if (str == "hero:") {
			std::string name;
			std::string weapon;
			std::string skills;
			in >> name >> weapon >> skills;
			Hero hero(name, weapon, skills);
			heroes.push_back(hero);
		}
		if (str == "villain:") {
			std::string name;
			std::string weapon;
			std::string deed;
			std::string lair;
			std::string skills;
			in >> name >> weapon >> deed >> lair >> skills;
			Villain v(name, weapon, deed, lair, skills);
			villains.push_back(v);
		}
		if (str == "monster:") {
			std::string name;
			std::string desc;
			in >> name >> desc;
			Monster m(name, desc);
			monsters.push_back(m);
		}
	}
	std::cout << "Is done\n";
	in.close();
}
