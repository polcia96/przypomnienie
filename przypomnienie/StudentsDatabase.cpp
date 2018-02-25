#include "stdafx.h"
#include "StudentsDatabase.h"


bool StudentsDatabase::insertStudent(Student& newStudent) {
	return database.emplace(newStudent.getIndexNumber, newStudent);
}