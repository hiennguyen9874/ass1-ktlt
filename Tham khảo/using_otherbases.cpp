#include <iostream>
#include <iomanip>
#include <bitset>
#include <string>

using namespace std;


int main(){
	int n = 127;
	/*
	OUTPUT NUMBERS IN DECIMAL FORMAT (BASE 10):
	Default base is decimal.
	Therefore, just use "cout << n", then n is in base 10.
	We can insert std::dec or setbase(10) into output stream (cout) to format numbers in base 10 too.
	*/
	cout << n << " in BASE 10:" << endl;
	cout << n << endl;
	cout << std::dec  << std::noshowbase << n << endl;
	cout << setbase(10) << n << endl << endl;
	
	/*
	OUTPUT NUMBERS IN OCTAL FORMAT (BASE 8):
	WHENEVER we insert std::dec or setbase(8) to output stream, the format is preserved until we change to other format.
	SO, we need to STORE current format and then RESTORE to previous format after using
	*/
	//Save current format (base 10)
	ios::fmtflags settings = cout.flags();

	cout << n << " in BASE 8:" << endl;
	cout << std::oct << std::showbase << n << endl;
	cout << setbase(8) << n << endl << endl;

	//Restore old format (base 10)
	cout.flags(settings);

	/*
	OUTPUT NUMBERS IN HEX FORMAT (BASE 16):
	WHENEVER we insert std::hex or setbase(16) to output stream, the format is preserved until change to other format.
	SO, we need to STORE current format and then RESTORE to previous format later
	*/
	//Save current format (base 10)
	settings = cout.flags();
	cout << n << " in BASE 16:" << endl;
	cout << std::hex << std::showbase << n << endl;
	cout << setbase(16) << n << endl << endl;

	//Restore old format (base 10)
	cout.flags(settings);


	/*
	INPUT & OUTPUT NUMBERS IN BINARY FORMAT (BASE 2):
	<iomanip> does not support base 2.
	In order to output numbers in base 2, use libary <bitset> by putting "#include <bitset>" at the begining of file.
	To convert number (called n) to base 2, use std::bitset<16>(n); here, <16> to specify using 16 bits.
	*/
	//From decimal to binary
	cout << n << " in BASE 2:" << endl;
	cout << "98765432109876543210" << endl;
	cout << setw(20) << right << std::bitset<16>(n) << endl << endl;
	
	//Read binary, convert to integer
	//1. Read a string representing the sequence of bits
	//2. Convert string to bitset (binary)
	//3. Use to_ulong() to convert to integer
	string bit_string;
	cout << "Pls enter bit sequence (e.g. 10011, i.e. 19 in decimal):";
	getline(cin, bit_string);
	bitset<16> bNum(bit_string); //convert to bitset
	cout << bNum.to_ulong() << " in BASE 2:" << endl; //to_ulong() convert binary to integer
	cout << "98765432109876543210" << endl;
	cout << setw(20) << right << bNum << endl << endl;
	cout << endl << endl;
	system("pause");
	return 0;
}