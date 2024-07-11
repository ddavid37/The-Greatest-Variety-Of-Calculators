#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double num1, num2;
	char operation;

	cout << "------------\nCalculator:\n------------\n\nEnter the first number, operation, and than the second number:\n";
	cout << "At the end, press enter\n";

	cin >> num1 >> operation >> num2;

	switch (operation) {

	case '+': cout << "\n" << "The resuilt is: " << num1 + num2 << endl; break;
	case '-': cout << "\n" << "The resuilt is: " << num1 - num2 << endl; break;
	case '*': cout << "\n" << "The resuilt is: " << num1 * num2 << endl; break;
	case '/': cout << "\n" << "The resuilt is: " << num1 / num2 << endl; break;
	case '%': cout << "\n" << "The resuilt is: " << static_cast<int>(num1) % static_cast<int>(num2); break;


	default:cout << "Not valid operation!" << endl;
		cout << endl;
	}
	system("pause");
	return 0;
}
