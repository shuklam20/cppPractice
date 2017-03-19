#include "stdafx.h"
#include <iostream>
#include<ctime> // time
#include<cstdlib> // srand() and rand()

using namespace std;

bool playAgain()
{
	char choice;
	cout << "Would you like to play again (y/n)? ";
	cin >> choice;
	if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') playAgain();
	else return (choice == 'y' || choice == 'Y');
}


int randomNumberOutput(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	srand(static_cast<unsigned int>(time(0)));
	return (int)(rand() * fraction * (max - min + 1) + min);
}



int main()
{
	int n, m, flag = 0; const int numGuess = 7;
	cout << "Let's play a game.  I'm thinking of a number.  You have " << numGuess << " tries to guess what it is." << endl;

	do {
		m = randomNumberOutput(1, 100);
		for (int i = 0; i < numGuess; i++)
		{
			cout << "Guess #" << i + 1 << ": ";
			cin >> n;
			int d = n - m;
			if (d > 10) cout << "Your guess is too high." << endl;
			else if (d > 0 && d < 10) cout << "Your guess is close but bit high." << endl;
			else if (d<0 && d > -10) cout << "Your guess is close but bit low." << endl;
			else if (d < -10) cout << "Your guess is too low." << endl;
			else { cout << "Correct!  You win!\n" << endl; flag = 1; break; }
		}
		if (flag==0) cout << "Sorry, you lost. The correct number was " << m << endl;
	} while (playAgain());

	cout << "Thank you for playing" << endl;
    return 0;
}

