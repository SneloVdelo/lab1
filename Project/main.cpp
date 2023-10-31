#include "charecter.h"

int main() {
	std::string path("date.txt");

	bool run = true;

	Character character;

	while (run) {
		system("cls");
		std::cout << "1. Read From File\n";
		std::cout << "2. Save To File\n";
		std::cout << "3. Print characters\n";
		std::cout << "4. Add character\n";
		std::cout << "5. Edit character\n";
		std::cout << "6. Delete character\n";
		std::cout << "7. Exit\n";
		
		int index;
		std::cout << "Input index: ";
		std::cin >> index;

		if (index == 1) {
			system("cls");
			character.ReadFromFile(path);
			system("pause");
		}
		else if (index == 2) {
			system("cls");
			character.SaveToFile(path);
			system("pause");
		}
		else if (index == 3) {
			system("cls");
			character.Print();
			system("pause");
		}
		else if (index == 4) {
			system("cls");
			std::cout << "1. Add Hero\n";
			std::cout << "2. Add Villian\n";
			std::cout << "3. Add Monster\n";

			int input;
			std::cout << "Input index: ";
			std::cin >> input;
			if (input == 1) {
				character.AddHero();
			}
			else if (input == 2) {
				character.AddVillain();
			}
			else if (input == 3) {
				character.AddMonster();
			}
			else {
				std::cout << "Unknown index\n";
			}
			system("pause");
		}
		else if (index == 5) {
			system("cls");
			std::cout << "1. Edit Hero\n";
			std::cout << "2. Edit Villian\n";
			std::cout << "3. Edit Monster\n";

			int input;
			std::cout << "Input index: ";
			std::cin >> input;
			if (input == 1) {
				character.EditHero();
			}
			else if (input == 2) {
				character.EditVillain();
			}
			else if (input == 3) {
				character.EditMonster();
			}
			else {
				std::cout << "Unknown index\n";
			}
			system("pause");
		}
		else if (index == 6) {
			system("cls");
			std::cout << "1. Delete Hero\n";
			std::cout << "2. Delete Villian\n";
			std::cout << "3. Delete Monster\n";

			int input;
			std::cout << "Input index: ";
			std::cin >> input;
			if (input == 1) {
				character.DeleteHero();
			}
			else if (input == 2) {
				character.DeleteVillain();
			}
			else if (input == 3) {
				character.DeleteMonster();
			}
			else {
				std::cout << "Unknown index\n";
			}
			system("pause");
		}
		else if (index == 7) {
			run = false;
		}
		else {
			std::cout << "Unknown inxex\n";
		}
	}


	return 0;
}