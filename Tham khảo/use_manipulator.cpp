#include <iostream>
#include <iomanip>
#include <bitset>
#include <string>

using namespace std;
void print_base(){
		int n = 127;
	//output in decimal base
	cout << n << " in decimal base:" << endl;
	cout << n << endl;
	cout << std::dec  << std::noshowbase << n << endl;
	cout << setbase(10) << n << endl;

	//output in binary base
	cout << n << " in binary base:" << endl;
	cout << std::bitset<8>(n) << endl;
	
	//output in octal base
	cout << n << " in octal base:" << endl;
	cout << std::oct << std::showbase << n << endl;
	cout << setbase(8) << n << endl;

	//output in hex base
	cout << n << " in hex base:" << endl;
	cout << std::hex << std::showbase << n << endl;
	cout << setbase(16) << n << endl;

}
/*
* INDEX: width = 8
* CODE: width = 10
* SURNAME: width = 20
* GIVEN NAME: width = 10
* SCORE 1: width = 8
* SCORE 2: width = 8
* SCORE 3: width = 8
* AVERAGE: width = 8
*/
void show_student_list(){
	string code, sname, gname;
	float score1, score2, score3, average;

	cout << "1234567890123456789012345678901234567890123456789012345678901234567890123456789" << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "|" << setw(3) << left << "IDX" <<
			"|" << setw(9)	<< left << "CODE"  <<
			"|" << setw(20)	<< left << "SURNAME" <<
			"|" << setw(10)	<< left << "G.NAME" << 
			"|" << setw(7)		<< left << "SCORE1" <<
			"|" << setw(7)		<< left << "SCORE2" <<
			"|" << setw(7)		<< left << "SCORE3" <<
			"|" << setw(7)		<< right << "AVERAGE" << 
			"|" << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	code = "1510062";
	sname = "Nguyen Do Duc";
	gname = "Anh"; 
	score1 = 9.0;
	score2 = 7.5;
	score3 = 8.5;
	average = (score1 + score2 + score3)/3;

	cout << "|" << setw(3) << left << "1." <<
			"|" << setw(9)	<< left << code  <<
			"|" << setw(20)	<< left << sname <<
			"|" << setw(10)	<< left << gname << 
			"|" << setw(7) << fixed << setprecision(2) << left << score1 <<
			"|" << setw(7) << fixed << setprecision(2) << left << score2 <<
			"|" << setw(7) << fixed << setprecision(2) << left << score3 <<
			"|" << setw(7) << fixed << setprecision(2) << right << average << 
			"|" << endl;

	code = "1510599";
	sname = "Nguyen Mau Quoc";
	gname = "Duong";
	score1 = 9.5;
	score2 = 8.5;
	score3 = 9.5;
	average = (score1 + score2 + score3)/3;

	cout << "|" << setw(3) << left << "2." <<
			"|" << setw(9)	<< left << code  <<
			"|" << setw(20)	<< left << sname <<
			"|" << setw(10)	<< left << gname << 
			"|" << setw(7) << fixed << setprecision(2) << left << score1 <<
			"|" << setw(7) << fixed << setprecision(2) << left << score2 <<
			"|" << setw(7) << fixed << setprecision(2) << left << score3 <<
			"|" << setw(7) << fixed << setprecision(2) << right << average << 
			"|" << endl;
	code = "1512261";
	sname = "Nguyen Dinh Thanh";
	gname = "Nhan";
	score1 = 7.5;
	score2 = 7.5;
	score3 = 8.5;
	average = (score1 + score2 + score3)/3;

	cout << "|" << setw(3) << left << "3." <<
			"|" << setw(9)	<< left << code  <<
			"|" << setw(20)	<< left << sname <<
			"|" << setw(10)	<< left << gname << 
			"|" << setw(7) << fixed << setprecision(2) << left << score1 <<
			"|" << setw(7) << fixed << setprecision(2) << left << score2 <<
			"|" << setw(7) << fixed << setprecision(2) << left << score3 <<
			"|" << setw(7) << fixed << setprecision(2) << right << average << 
			"|" << endl;
}

int main(){
	print_base();


	cout << endl << endl;
	system("pause");
	return 0;
}