/***************************
Wesly Maulsby
C++ Fall 2022
Lab 4
Temperature Output
Create a program that inputs temps from a file and outputs them into a graph
*****************************/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;



int main()
{
	ifstream inFile;
	inFile.open("inTemp.dat");
	if (!inFile)
		cout << "can't find file";

	int read;
	
	inFile >> read;

	while (inFile)
	{	
		cout << read << endl;
		inFile >> read;
		
	}


}