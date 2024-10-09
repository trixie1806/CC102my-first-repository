#include <iostream>

using namespace std;

int main() {

	int num1, num2;
	
	cout << "Enter the First number: ";
	cin >> num1;
	cout << "Enter the Second number : ";
	cin >> num2;
	
	int sum = num1 + num2;
	int difference = num1 - num2;
	int product = num1 * num2;
	int quotient = num1 / num2;
	int remainder = num1 % num2;
	
	cout << "Sum: " << sum;
	cout << "Difference: " << difference;
	cout << "Product: " << product;
	cout << "Quotient: " << quotient;
	cout << "Remainder: " << remainder;
	
	return 0;
}