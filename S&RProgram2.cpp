// S&RProgram2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program acts as a basic calculator. It takes two integers and a math operator as input
// and spits out the result, the input integers and the operator as the output.

#include <iostream>
using namespace std;


int main()
{
	float number1, number2, outputNumber ;
	int operatorNumber;
	string mathOperator;


	cout << "First Number: ";
	cin >> number1;

	cout << "Second Number: ";
	cin >> number2;

	cout << "Math Operator: ";
	cin >> mathOperator;

	while (mathOperator != "+" && mathOperator != "-" && mathOperator != "*" && mathOperator != "/") {
		cout << "Error: Unsupported Operator Type " << endl;
		cout << "Math operator: ";
		cin >> mathOperator;
	}

	if (mathOperator == "+")
		operatorNumber = 1;

	if (mathOperator == "-")
		operatorNumber = 2;

	if (mathOperator == "*")
		operatorNumber = 3;

	if (mathOperator == "/")
		operatorNumber = 4;

	if (mathOperator == "/" && number2 == 0)
		operatorNumber = 5;

	switch (operatorNumber) {
	case 1:
		outputNumber = number1 + number2;
		break;
	case 2:
		outputNumber = number1 - number2;
		break;
	case 3:
		outputNumber = number1 * number2;
		break;
	case 4:
		outputNumber = number1 / number2;
		break;
	case 5:
		cout << "Error: Divide by Zero" << endl;
		return 0;
	}


	cout << endl << "First Number: " << number1 << endl << "Operation Type: " << mathOperator << endl << "Second Number: " << number2 << endl << "Answer: " << outputNumber << endl;


	return 0;


}

