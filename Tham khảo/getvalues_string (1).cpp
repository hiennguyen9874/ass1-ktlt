#include <iostream>
#include <string>
#include <sstream>
using namespace std;

/*
* This program is an example for getting somes values of different fundamental data types
* Students will learn the following techniques in this program:
* 1. Before using "cin" should use "cout" to give guideline for users
* 2. How to use CONVERT string to stream, then READ values from stream
*/


int main(){
	//Declare some values of data types
	int intValue;
	unsigned short shortValue;
	char aChar;
	float floatValue;
	double doubleValue;
	bool booleanValue;
	string aString;
	
	//Declare a temporary string, we get all values AS STRING (store to this temporary string).
	//We convert string to a Stream and read values from the converted stream
	string inputString;
	
	//Get values from users: USE "cout" to output guidline before using "cin"
	cout << "Please Enter an 'integer': ";
	getline(cin, inputString); //enter an integer and press "ENTER"
	stringstream(inputString) >> intValue;

	cout << "Please Enter an 'unsigned short' value: ";
	getline(cin, inputString); //enter an unsigned short value and press "ENTER"
	stringstream(inputString) >> shortValue;


	cout << "Please Enter a character: ";
	getline(cin, inputString); //enter a character and press "ENTER"
	stringstream(inputString) >> aChar;

	cout << "Please Enter a 'float': ";
	getline(cin, inputString); //enter a float value, for examples, 123.33 and press "ENTER"
	stringstream(inputString) >> floatValue;

	cout << "Please Enter a 'double': ";
	getline(cin, inputString); //enter a float value, for examples, 123.33 and press "ENTER"
	stringstream(inputString) >> doubleValue;


	//For boolean values: please enter 0 for false, and 1 for true
	cout << "Please Enter a boolean (0=false or 1=true): ";
	getline(cin, inputString); //enter 0 or 1 and press "ENTER"
	stringstream(inputString) >> booleanValue;

	//User "cin.clear(); cin.sync();" to clear current characters in input stream
	//DO NOT use them getline return immedidately in this example.
	cin.clear(); cin.sync();
	cout << "Please Enter a string: ";
	getline(cin, aString); //enter a string which including many words, for example "Programming Language", and press "ENTER"

	cout << "intValue \t="		<< intValue << endl;
	cout << "shortValue \t="	<< shortValue << endl;
	cout << "aChar \t="			<< aChar << endl;
	cout << "floatValue \t="	<< floatValue << endl;
	cout << "doubleValue \t="	<< doubleValue << endl;
	cout << "booleanValue \t="	<< (booleanValue? "true": "false") << endl;
	cout << "aString \t="		<< aString << endl;


	//Make two empty lines and pause before quit
	cout << endl << endl;
	system("pause");
	return 0;
}