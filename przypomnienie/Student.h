#pragma once
#include "stdafx.h"

class Student
{
private:
	std::string firstName;
	std::string lastName;
	unsigned int indexNumber;


public:
	Student();
	~Student();

	std::string getFirstName();
	std::string getLastName();
	unsigned int getIndexNumber();

	void setFirstName(std::string name);
	void setLastName(std::string name);
	void setIndexNumber(unsigned int index);
	
	void enterData();

	//przekazuje przez referencje czyli orginalne obiekty a nie kopie,zwraca tez orginalny obiekt
	friend std::ostream& operator <<(std::ostream& stream,const Student& student);

};

