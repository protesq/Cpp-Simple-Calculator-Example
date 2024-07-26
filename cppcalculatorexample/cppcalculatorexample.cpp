// cppcalculatorexample.cpp : This project simple calculator example.

#include <iostream>
using namespace std;

int main()
{
	double number1, number2;
	double addition, subtraction, division, multiplication;
	int action;

	cout << "You should write two numbers" << endl;
	cout << "Number 1: ";
	cin >> number1;
	cout << "Number 2: ";
	cin >> number2;
	cout << "Which math operation do you want to do ?"  << endl;
	cout << "1: Addition 2: Subtraction 3: Division 4: Multiplication" << endl;

	cin >> action;
	switch (action)
	{
	case 1:
		addition = number1 + number2;
		cout << "Result: " << addition << endl;
		break;
	case 2:
		subtraction = number1 - number2;
		cout << "Result: " << subtraction << endl;
		break;
	case 3:
		division = number1 / number2;
		cout << "Result: " << division << endl;
		break;
	case 4:
		multiplication = number1 * number2;
		cout << "Result: " << multiplication << endl;
		break;
	default:
		cout << "You should choose operation !" << endl;
		break;
	}
} 

