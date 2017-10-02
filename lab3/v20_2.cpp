#include <iostream>
#include <math.h>
using namespace std;


void solveEquation(double a, double b, double c, double &x1, double &x2) {
    double d = pow(b, 2) - 4 * a * c;
    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
    } else if (d == 0) {
        cout << "D = 0, only x1 exists" << endl;
        x1 = -b / (2 * a);
        x2 = 0;
    } else {
        cout << "D < 0, no roots" << endl;
        x1 = x2 = 0;
    }
}


int main() {
	char command;
	double a, b, c, x1, x2;

	do {
		cout << "n - new calculation, q - exit"
		<< endl << "> ";
		cin >> command;

		switch (command) {
			case 'n':
				cout << "a = ";
				cin >> a;
				cout << "b = ";
				cin >> b;
				cout << "c = ";
				cin >> c;

				solveEquation(a, b, c, x1, x2);

                if (x1 != 0) {
                    cout << "x1 = " << x1;
                }
                if (x2 != 0) {
                    cout << ", x2 = " << x2 << endl;
                }
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
