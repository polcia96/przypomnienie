// przypomnienie.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	Student newStudent;
	newStudent.enterData();
	std::cout << newStudent;

	std::cin.sync(); //kasowanie zbędnych znaków z bufora
	std::cin.get(); //oczekiwanie na wciśnięcie klawisza


    return 0;
}

