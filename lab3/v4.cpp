#include <iostream>
using namespace std;


bool isInRange(double x, double y) {
	return (y >= x && y >= -x && y <= 1) ||
	       (y <= x && y <= -x && y >= -1);
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
