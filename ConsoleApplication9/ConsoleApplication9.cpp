// ConsoleApplication9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;


int main()
{
	const int buffer_size = 0x200;
	const static string file_name = "test.txt";

	ofstream out;
	out.open(file_name);
	out << "Hello world!" << endl;
	out << "Students" << endl;
	out.close();

	char first_str[buffer_size], second_str[buffer_size];
	*first_str = 0;

	ifstream in;
	in.open(file_name);
	if (!in.bad())
	{
		cout << in.rdbuf();
		in.close();
	}
    return 0;
}

