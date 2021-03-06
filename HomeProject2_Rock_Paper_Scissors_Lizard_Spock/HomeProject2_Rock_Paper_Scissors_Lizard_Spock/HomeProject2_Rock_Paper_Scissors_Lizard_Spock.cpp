// HomeProject2_Rock_Paper_Scissors_Lizard_Spock.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
string ToString(int a) {
	switch(a)
	{
		case 0: return "rock";
		case 1: return "spock";
		case 2: return "paper";
		case 3: return "lizard";
		case 4: return "scissors";
		default: return 0;
		
	}
}
int ToInt(string a) {
	if (a == "rock") {
		return 0;
	}
	else if (a == "spock") {
		return 1;
	}
	else if (a == "paper") {
		return 2;
	}
	else if (a == "lizard") {
		return 3;
	}
	else if (a == "scissors") {
		return 4;
	}
	else {
		return 5;
	}
}

int main()
{
	string input;
	int x, y, a, b;
	cout << "Welcome to the game!" << endl;
	cout << "Please enter your turn:" << endl;
	cout << "scissors , lizard , paper , spock , rock" << endl;
	cout << "enter stop to finish the game" << endl;
	a = 0;
	b = 0;
	while (1) {
		cout << "Current score is:" << endl;
		cout << "Player : " << a << "  Computer : " << b << endl;
		cin >> input;
		x = ToInt(input);
		if (input == "stop") {
			break;
		}
		if (x == 5) {
			cout << "bad turn input error" << endl;
			continue;
		}
		
		srand(time(0));
		y = rand() % 5;
		cout << "Player puts " << input << " VS Computer puts " << ToString(y) << endl;
		if (x > y) {
			if (x - y <= 2) {
				cout << "Player wins" << endl;
				a++;
			}
			else {
				cout << "Computer wins" << endl;
				b++;
			}
		}
		else if (x < y) {
			if (y - x <= 2) {
				cout << "Computer wins!" << endl;
				b++;
			}
			else {
				cout << "Player wins!" << endl;
				a++;
			}
				
		}
		else {
			cout << "It is draw!" << endl;
		}
		continue;
	}
	cout << "The game finishes with score:" << endl;
	cout << "Player : " << a << "  Computer : " << b << endl;
	cout << "Goodbye!";
	return 0;
}
