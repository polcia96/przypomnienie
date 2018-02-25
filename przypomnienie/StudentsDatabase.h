#pragma once
class StudentsDatabase
{
private:
	std:: map<unsigned int, Student> database;

public:
	StudentsDatabase() {};
	~StudentsDatabase() {};

	//funkcja dodaje nowego studenta do mapy,je¿eli dodawanie sie powiodlo zwraca true,w przeciwnym razie false
	bool insertStudent(Student& newStudent);
};

