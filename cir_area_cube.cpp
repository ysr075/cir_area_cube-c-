#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int choose;
	do {
		cout << "\n1.circumference or 2.area: "; cin >> choose;
		if (choose == 1) {
			int line1;
			cout << "\n~~ in cm ~~";
			cout << "\n\nline1: "; cin >> line1;
			cout << "\ncircumference of your 2D cube is " << line1 * 4 << " cm.\n";
		} else if (choose == 2) {
			int base; int height;
			cout << "\n~~ in cm ~~";
			cout << "\n\nbase: "; cin >> base;
			cout << "\nheight: "; cin >> height;
			cout << "\narea of your 2D cube is " << base * height << " cm.\n";
		} else {
			exit(0);
		}
	} while (true);
	return 0;
}
