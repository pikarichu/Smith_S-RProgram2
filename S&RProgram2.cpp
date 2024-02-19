// S&RProgram1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program acts as a basic calculator. It takes two integers and a math operator as input
// and spits out the result, the input integers and the operator as the output.

#include <iostream>
using namespace std;


int main()
{
	float number1, number2, outputNumber;
	string mathOperator;

	cout << "First Number: ";
	cin >> number1;

	cout << "Second Number: ";
	cin >> number2;

	cout << "Math Operator: ";
	cin >> mathOperator;

	//if (mathOperator != "+" || "-" || "*" || "/") {
		//cout << "Error: Unsupported Operator Type " << endl;
		//cout << "Math operator: ";
		//cin >> mathOperator;
	//}

	if (mathOperator != "+") {
		if (mathOperator != "-") {
			if (mathOperator != "*") {
				if (mathOperator == "/" && number2 != 0) {
					outputNumber = number1 / number2;
				}
				else
					cout << "Error, division by 0";
					return 0;
			}
			else
				outputNumber = number1 * number2;
		}
		else
			outputNumber = number1 - number2;
	}
	else
		outputNumber = number1 + number2;
	
	cout << "Answer: " << outputNumber;


	return 0;


}


