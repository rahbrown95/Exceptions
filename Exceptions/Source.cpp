/*
Rahmir B.
5/23/2022
Exceptions
*/

#include <iostream>
#include <exception>
float myDivide(float num1, float num2) {			//defining "myDivide" to get sum
	return num1 / num2;
}
using namespace std;

int main() 
{
	char chr_in;
	int num_z_wrn = 1;	// Error 1
	int dbz_err = 0;	//Error 2
	float num1;		//Numerator
	float num2;		//Demoninator

Start: //Numerator Exception 1/2
	try {
		cout << "This is the Great Divider, take two numbers and makes 1" << endl;
		cout << "Please enter a numerator" << endl;
		cin >> num1;
		if (num1 == 0) {
			throw num_z_wrn;		// Exception 1 being called
		}
		cout << "Please enter a denominator" << endl;		//Demoniator Exception 1/2
		cin >> num2;
	}
	catch (int e) {
		cout << "The Numerator entered appears to be a zero or a char Program Terminating" << endl;  //Error handle for numerator
		return -1;
		
	}
	try {			
		if (num2 == 0) {
			throw dbz_err;		// Exeception 2 being called
		}
	}
	catch (int nyE) {
		if (nyE == dbz_err) {
			cout << "User attempted the impossible, by entering a zero" << endl;	// Error handler for demoninator
			num2 = 0.00000001;
		}
		return 0;
	}
	cout << "your answer is " << myDivide(num1, num2);  // Sum


}
