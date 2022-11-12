#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	int choice;
	int id;
	int i = 0;
	string name;
	float price;
	char dn;
	menu:
	cout << "Store management system\nby Robert Novak\n\n\n";
	cout << "-------------------\nMain menu\n-------------------\n\n";
	cout << "1. Enter new item\n\n2. Update existing item - coming soon\n\n3. View selected item - coming soon\n\n0. Exit\n\n";
	cin >> choice;
	cout << "\n\n";
	do{
		switch (choice) {
		case 0:
			system("cls");
			cout << "Goodbye\n\n";
			i++;
			break;
		case 1:
			system("CLS");
			cout << "Information for new item required\n\n";
			cout << "Enter new item ID:\n";
			cin >> id;
			cout << "\n";
			cout << "Enter new item name: \n";
			cin >> name;
			cout << "\n";
			cout << "Enter new item price: \n\n";
			cin >> price;
			system("CLS");
			cout << "ITEM ADDED.\n\n";
			ofstream myFile(name + ".txt");
			myFile << "Item name: " << name << "\n" << "Item ID: " << id << "\n" << "Item price: " << price;
			myFile.close();
			cout << "Add another item?(y/n)\n";
			cin >> dn;
			if (dn == 'y') {
				system("cls");
			}
			else if( dn == 'n') {
				
				i++;
				system("cls");
				goto menu;
			}
			break;
		}
	} while (i == 0);
}
