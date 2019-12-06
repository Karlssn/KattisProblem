// Autori.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <regex>

using namespace std;
int main()
{
	string a;
	regex b ("\\b[a-zA-Z]");
	cin >> a;
	sregex_iterator next(a.begin(), a.end(), b);
	sregex_iterator end;
	while (next != end) {
		smatch match = *next;
		cout << match.str();
		next++;
	}
}

