// Lab_3_4.cpp
// Козубенко Андрій
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою
// Варіант 10
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	double x; // вхідний аргумент
	double y; // вхідний аргумент
	double a; // вхідний параметр
	double b; // вхідний параметр
	double R; // вхідний параметр

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if ((x <= 0 && y <= 0 && y >= -b && y >= -sqrt(R * R - x * x) && x >= -R) || (y >= 0 && y <= b && x <= a && x >= sqrt(R * R - y * y)))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	cin.get();
	return 0;
}