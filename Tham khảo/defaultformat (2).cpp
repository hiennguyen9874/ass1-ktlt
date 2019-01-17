#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*
* This program shows a table of students with their scores.
* Students will learn the following techniques in this program:
* 1. Specify the width of output
* 2. Specify the fixed floating-point format for numbers and their precision
* 3. Align outputs: left, right
* 4. Make a professional table containning multiple rows and columns.
*/

int main(){
	/*Default format for printing integers:
	* - Use base 10
	* - Do not use leading zeros
	* - Preceed with "-" for negative integers
	*/
	cout << "Default format for printing integers:" << endl;
	cout << "123456789 is showed as it is: " << 123456789 << endl;
	cout << "-123456789 is showed as it is: " << -123456789 << endl;
	cout << endl;
	
	/*Default format for printing doubles(float and double):
	* - Be printed with 6 SIGNIFICANT DIGITS,  i.e., DEFAULT PRECISION IS 6.
	* - CHANGE THE DEFAULT PRECISION BY USING MANIPULATOR: setprecision(size)
	* - Doubles having less than 6 digits will be printed as they are
	*/
	cout << "Default format for printing double:" << endl;
	cout << "CASE I: Total digit in the input is less 6 --> showed as it is: " << endl;
	cout << "1234.56 is showed as: " << 1234.56 << endl;
	cout << "-1234.56 is showed as: " << -1234.56 << endl;
	cout << endl;

	/*Default format for printing doubles:
	* - Be printed with 6 SIGNIFICANT DIGITS
	* - If doubles have more than 6 digits, they are rounded in output
	*/
	cout << "CASE II: Left of . less than 6 digits, total digit larger than 6 --> rounded:" << endl;
	cout << "1234.56789 is showed as: " << 1234.56789 << endl;
	cout << "-1234.56789 is showed as: " << -1234.56789 << endl;
	cout << endl;

	/*Default format for printing doubles:
	* - Be printed with 6 SIGNIFICANT DIGITS
	* - If doubles have more than 6 digits, they are rounded in output
	*/
	cout << "CASE III: Left of . is 6 digits, rounded possible to 6 digits --> rounded:" << endl;
	cout << "123456.789 is showed as: " << 123456.789 << endl;
	cout << "-123456.789 is showed as: " << -123456.789 << endl;
	cout << endl;

	/*Default format for printing doubles:
	* - Be printed with 6 SIGNIFICANT DIGITS
	* - If doubles cannot be expressed in 6 digits for the part on the left of decimal point, they are outputed using the exponential notation.
	*/
	cout << "CASE IV: Left of . more than 6 digits --> exponential notation:" << endl;
	cout << "1234567.89 is showed as: " << 1234567.89 << endl;
	cout << "-1234567.89 is showed as: " << -1234567.89 << endl;
	cout << endl;

	//Make two empty lines and pause before quit
	cout << endl << endl;
	system("pause");
	return 0;
}