// EX06_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;


int main()
{
	int chCount = 0;
	string fileName;
	char character;

	cout << "enter file name: " << endl; // Enter "Aesop.txt"
	getline(cin, fileName);
	ifstream file(fileName, ios::in | ios::out);

	while (!file.eof())
	{
		file >> character;
		chCount++;
	}

	cout << "number of chars in file is: " << chCount << endl;

    return 0;
}

