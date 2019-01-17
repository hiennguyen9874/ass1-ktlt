#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
 
using namespace std;
 
int main(){
	string str;
	string str_value;
	double param;
	double x, y;

	getline(cin, str); //skip ---: read form file or console
	getline(cin, str); 	stringstream scin1(str);
	scin1 >> str_value; scin1 >> param; //get a parameter
	getline(cin, str); //skip ---

	getline(cin, str); stringstream scin2(str);
	scin2 >> x; scin2 >> y;

	//Output to file or console: param  x   y
	cout << left << fixed << setw(10) << setprecision(2) << param;
	cout << left << fixed << setw(10) << setprecision(2) << x;
	cout << left << fixed << setw(10) << setprecision(2) << y;

	return 0;
}