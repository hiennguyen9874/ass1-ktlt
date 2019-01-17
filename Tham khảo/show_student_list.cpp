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
	//Define varibles to store student code, student name and scores.
	string code, sname, gname;
	float score1, score2, score3, average;

	//Show header
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
	
	//Show Information of Student 1510062
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

	//Show Information of Student 1510599
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
	
	//Show Information of Student 1512261
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

	//Make two empty lines and pause before quit
	cout << endl << endl;
	system("pause");
	return 0;
}