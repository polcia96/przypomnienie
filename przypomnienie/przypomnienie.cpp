// przypomnienie.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	Student newStudent;
	newStudent.enterData();
	std::cout << newStudent;

	std::cin.sync(); //kasowanie zbędnych znaków z bufora
	getchar();

    return 0;
}

