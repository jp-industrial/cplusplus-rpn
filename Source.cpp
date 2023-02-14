#include "c:\Users\james\Desktop\std_lib_facilities.h"

int main()
{
	string operato = " ";
	double a = 0;
	double b = 0;

	cin >> operato >> a >> b; //input for these variables.
	
	if (operato == "+") //addition.
		cout << a + b << "\n";

	if (operato == "-") //subtraction.
		cout << a - b << "\n";

	if (operato == "*") //multiplication.
		cout << a * b << "\n";

	if (operato == "/") //division.
		cout << a / b << "\n";
}