//Show some advanced features of std::string class.


#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str("\"Learning about strings\"");
	cout << str << " has " << str.length() << " bytes." << endl;

	str.clear();
	cout << str << "Empty string of " << str.length() << " characters." << endl;

	str = ("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	cout << str.at(25) << " is the 25th character in this string: " << "\"" << str << "\"" << " as " << str.at(0) << " starts at 0." << endl;

	str.assign("This is my new string.");
	cout << str << endl;

	str.insert(14, " inserted");
	cout << str << endl;

	str.replace(14, 9, " replaced");
	cout << str << endl;

	cout << "1st \"i\" in " << "\"" << str << "\"" << " can be found at position " << str.find("i") << "." << endl;


	string str1 = str.substr(0, 4);
	cout << "New substring str1: " << "\"" << str1 << "\"" << endl << endl;

	return 0;

}

