/*********************************************************************************************************
* Kyozho (Chase)
* 28/10/24
* Purpose: FizzBuzz Challenge of multiples of 3 & 5
* Note: *I had AI help me a tiny bit through making this program but the majority of it was made by me :3*
**********************************************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

void RegularIf(short n) {
	for (n; n <= 100; n++) {
		if (n % 3 == 0 && n % 5 == 0) {							 // AI told me to add this
			cout << "FizzBuzz" << endl;
		}
		else if (n % 3 == 0) {
			cout << "Fizz" << endl;
		}
		else if (n % 5 == 0) {
			cout << "Buzz" << endl;
		}
		else {
			cout << n << endl;
		}
	}
}

void Ternary(short n) {
	for (n; n <= 100; n++) {
		(n % 3 == 0 && n % 5 == 0) ? cout << "FizzBuzz" << endl : // AI told me to add this
		(n % 3 == 0) ? cout << "Fizz" << endl :
		(n % 5 == 0) ? cout << "Buzz" << endl :
		cout << n << endl;
	}
}

int main(short userInput) {
	const short REG = 1;
	const short TERN  = 2;
	const short EXIT  = 3;

	while (userInput != EXIT) {
		cout << "FizzBuzz Menu: " << endl
			 << setw(53) << "1. Regular FizzBuzz for and if statments (1-100) [1]" << endl
			 << setw(53) << "2. Ternary FizzBuzz for and if statments (1-100) [2]" << endl
			 << setw(53) << "3. Exit                                          [3]" << endl
			 << setw(135) << "*Both 1 & 2 have the exact same functionality, it's just to demonstrate my understanding of knowing if statements & ternary statement*" << endl;
		cout << "Input: ";
		cin >> userInput;
		cout << "\n";

		switch (userInput) {
		case REG: {
			RegularIf(0);
			break;
		}
		case TERN: {
			Ternary(0);
			break;
		}
		case EXIT: {
			exit(0);
			break;
		}
		default: {
			cout << "Please enter in the values 1-2" << endl
				 << "Press \"Enter\" to go back to menu";
			cin.get();
			continue;
		}
		}
		cin.ignore();
		cin.get();
		return 0;
	}
}