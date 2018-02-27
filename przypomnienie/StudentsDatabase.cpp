#include "stdafx.h"
#include "StudentsDatabase.h"


bool StudentsDatabase::insertStudent(Student& newStudent) {
	//iterator musi miec konkretny typ,to jest szablon !
	std::pair<std::map<unsigned int,Student>::iterator, bool> returning;
	returning=database.emplace(newStudent.getIndexNumber(), newStudent);
	return returning.second;
}