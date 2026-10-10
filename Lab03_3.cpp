// Lab_03_3.cpp
// Боднар Роман
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 2

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x, R, y;

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	if (x <= -8)
		y = -R;
	else
		if (-8 < x && x <= -R)
			y = R / (8 - R) * (x + R);
		else
			if (-R < x && x <= R)
				y = -sqrt(R * R - x * x);
			else
				if (R < x && x <= 5)
					y = 2.0 / (5 - R) * (x - R);
				else
					y = 3;
	cout << endl;
	cout << "y = " << y << endl;


		return 0;
}