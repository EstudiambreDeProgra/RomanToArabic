#include "RomanNumber.h"
#include<map>
#include<iostream>
using namespace std;


void RomanNumber::menu() {

	cout << "\nWelcome, in this program you can write roman numbers\nand they will be decimal\n\n";
	cout << "To continue press number 1\n";
	cout << "\nTo exit press number 2\n";
	cin >> option;

	switch(option){
		case 1: comparation();
			break;
		case 2: EXIT_SUCCESS;
			break;
		default:
			menu();
			break;
	}

}

map<char, int> mapa;
int rom_to_dec(string rom) {
	int res = 0;
	int num = rom.length();
	for (int i = 0; i < num; i++) {
		if (i + 1 < num && mapa[rom[i]] < mapa[rom[i + 1]]) {
			res += (mapa[rom[i + 1]] - mapa[rom[i]]);
			i++;
		}
		else {
			res += mapa[rom[i]];
		}
	}
	return res;
}

void RomanNumber::comparation(){

	cout << "\nNow write the roman numbers in capital letters:\n";

	mapa['I'] = 1;
	mapa['V'] = 5;
	mapa['X'] = 10;
	mapa['L'] = 50;
	mapa['C'] = 100;
	mapa['D'] = 500;
	mapa['M'] = 1000;

	string rom;
	
		cin >> rom;
		cout << rom_to_dec(rom) << "\n";


		cout << "\n\nTo continue in roman to arabic, press number 1\n";
		cout << "\nTo return to menu, press number 2\n";
		cout << "\nTo exit, press number 3\n";
		cin >> option;
		system("cls");
	switch (option) {
		case 1: comparation();
			break;
		case 2: menu();
			break;
		case 3: EXIT_SUCCESS;
			break;
		}

}