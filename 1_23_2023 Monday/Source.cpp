#include <iostream>
using namespace std;
int main() {
	int playerage;
	cout << "How old are you:" << endl;
	cin >> playerage;
	if (playerage < 13)
		cout << "You are too young to play this game" << endl;
	else if (playerage < 18)
		cout << "Please get parent permission to play this game";
	else
		cout << "Thanks!";

	cout << endl;
	cout << endl;

	char favanimal;
	cout << "what is you favorite animal?" << endl;
	cout << "Type 'd' for dog, 'c' for cat, 'b' for birb" << endl;
	cin >> favanimal;
	if (favanimal == 'd')
		cout << "woof woof bark" << endl;
	else if (favanimal == 'c')
		cout << "meow mrow miau" << endl;
	else if (favanimal == 'b')
		cout << "chirp tweet CAAAAAAW-CAAAAAAW" << endl;
	else
		cout << "Type 'd' for dog, 'c' for cat, 'b' for birb" << endl;
	
	// MEDIUM

}