/*
Steve Wang 9/21/17 Period 3
Assignment Name : DisplayText
Create a New Project to display your Full Name, your period stored as a variable, and “Hello World”, without the quotations. You will make sure that it prints to the console in a readable format, and pauses before the console exits so the user can actually read what is displayed.
*/
// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
#include <ctime>
#include <cstdlib>
#include <cmath>
// Namespaces
using namespace std; //*
// Functions() 
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// MAIN
void main() {
	srand((unsigned)time(0));
	int x = rand();
	int randomNumber = x % 100;
	cout << "How much do you want to bet in dollars?";
	int bettingAmount;
	cin >> bettingAmount;
	cout << "Enter a number: " << endl;
	int amountOwed;
	int guess;
	cin >> guess;
	int difference = abs(randomNumber - guess);
	if (difference <= 10)
	{
		int k = 1;
		if (difference == 0)
		{
			k = 2;
			difference = 1;
		}
		amountOwed = k*bettingAmount / difference;
		cout << "I owe you" << amountOwed << endl;
	}
	else
	{
		amountOwed = bettingAmount*difference / 1.5;
		cout << "You owe me" << amountOwed << endl;
	}
	// Define and Assign your variable(s)
	// Display Text
	int period = 3;
	cout << "Steve Wang Period " << period << " Hello World!" << endl;
	pause(); // pauses to see the displayed text
}