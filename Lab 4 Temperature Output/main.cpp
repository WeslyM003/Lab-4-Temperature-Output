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

//variable initialization
string line;
string star;
int space;
int stars;

bool neg;

// function prototypes
void graphTemps();

//main function that calls the graph function
int main()
{
	graphTemps();
}

// inputs the temps from the file then outputs them as a graph
void graphTemps()
{
	cout << "Temperatures for 24 hours:" << endl << "   -30         0         30        60        90         120" << endl << endl;

	ifstream inFile;
	inFile.open("inTemp.dat");
	if (!inFile)
		cout << "can't find file";

	int read;
	
	inFile >> read;


	while (inFile)
	{
		string spaces = "";
		space = 10;
		line = '|';
		if (read >= -30 || read <= 120)
		{
			
			if (read < 0)
			{
				read = read * -1;
				neg = true;
			}

			int x = read / 3;

			for (int i = 0; i < x; i++)
			{


				star = star + '*';
				stars = stars + 1;
			}
			if (read % 3 > 1)
			{
				star = star + '*';
				stars = stars + 1;
			}


			if (neg == false && read < 100 && read >= 10)
				cout << read << "             " << line << star << endl;
			else if (neg == false && read < 10)
				cout << read << "              " << line << star << endl;
			else if (neg == false << read >= 100)
				cout << read << "            " << line << star << endl;
			else if (neg == true && read >= 10)
			{
				int y = 1;
				for (int y = 1; y <= stars; y++)
				{
					space = space - 1;
				}
				for (int y = 0; y < space; y++)
					spaces = spaces + " ";

				cout << "-" << read << "  " << spaces << star << line << endl;


			}
			else if (neg == true && read < 10)
			{
				int y = 1;
				for (int y = 1; y <= stars; y++)
				{
					space = space - 1;
				}
				for (int y = 0; y < space; y++)
					spaces = spaces + " ";

				cout << "-" << read << "   " << spaces << star << line << endl;


			}
			
			star = "";
			stars = 0;
			neg = false;
		}
		inFile >> read;
	}
}