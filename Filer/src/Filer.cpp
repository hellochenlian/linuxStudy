//============================================================================
// Name        : Filer.cpp
// Author      : cl
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <string>

#include "CFileWL.h"
int main() {

	CFileWL fl;
	std::string str = "helllo world";
	fl.WriteStringToFile(str);

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
