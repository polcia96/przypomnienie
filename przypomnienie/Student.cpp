#include "stdafx.h"



Student::Student(){

	firstName = "0";
	lastName = "0";
	indexNumber = 0;
}


Student::~Student(){}
std::string Student::getFirstName() { return firstName; }
std::string Student::getLastName() { return lastName; }
unsigned int Student:: getIndexNumber() { return indexNumber; }

void Student::setFirstName(std::string name) {
	firstName = name;
}

void Student::setLastName(std::string name) {
	lastName = name;
}
void Student::setIndexNumber(unsigned int index) {
	indexNumber = index;
}

void Student::enterData() {
	std::cout << "imie: ";
	std::cin >> firstName;

	std::cout << std::endl<< "nazwisko: ";
	std::cin >> lastName;

	std::cout << std::endl << "numer indeksu: ";
	std::cin >> indexNumber;

	std::cout << "dane zostaly poprawnie wprowadzone" << std::endl;

	
}


std::ostream& operator <<(std::ostream& stream,const Student& student) {
	stream << student.firstName << " ";
	stream << student.lastName << std::endl;
	stream <<"Numer indeksu: "<<student.indexNumber << std::endl;

	return stream;
}
