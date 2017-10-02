#include <iostream>
#include <math.h>
using namespace std;


bool isInRange(double x, double y) {
	return pow(x, 2) + pow(y, 2) <= 1 &&
	       y >= -x + 1;
}


int main() {
	char command;
	double x, y;

	do {
		cout << "n - new calculation, q - exit"
		<< endl << "> ";
		cin >> command;

		switch (command) {
			case 'n':
				cout << "x = ";
				cin >> x;
				cout << "y = ";
				cin >> y;

				if (isInRange(x, y)) {
					cout << "Point ("
			     		<< x << ", "
		     			<< y << ") "
		     			<< "is in given range";
				} else {
					cout << "Point ("
			     		<< x << ", "
		     			<< y << ") "
		     			<< "isn't in given range";
				}

				cout << endl << endl;
				break;
			case 'q':
				cout << "Exiting..." << endl;
				return 0;
			default:
				cout << "Wrong input. Please retry." << endl;
				break;
		}
	} while (true);
}
