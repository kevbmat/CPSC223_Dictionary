// Clientprogram.cpp

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Dictionary.h"
#include "Item.h"

using namespace std;

void openInputFile(ifstream& infile);

int main()
{
	Item anItem;
	bool isFull;
	Dictionary mine;

	cout << "Enter an item -> ";
	cin >> anItem;

	mine.insert(anItem, isFull);

	return 0;
}

void openInputFile(ifstream& infile)
{
	infile.open("Input.dat");
	if (infile.fail())
	{
		cout << "ERROR in opening Input.dat !!!" << endl;
		exit(1);
	}
}
