#ifndef COURSE_H
#define COURSE_H
#include <vector>
#include <iostream>
#include <string>
using namespace std;


class Course {
public:
	Course(const string& courseName, int capacity) {
		numberOfStudents = 0;
		this->courseName = courseName;
		this->capacity = capacity;
		students = new vector<string>(capacity);
	}~Course() {
		delete[] students;
	}Course(const Course& course) {
		courseName = course.courseName;
		numberOfStudents = course.numberOfStudents;
		capacity = course.capacity;
		students = new vector<string>(capacity);
		this->students = students;
	}string getCourseName()const {
		return courseName;
	}void addStudent(const string& name) {
		if (numberOfStudents >= capacity) {
			cout << "The maximum size of array exceeded" << endl;
			cout << "Program terminates now"<<endl;
			exit(0);
		}
		students[numberOfStudents].push_back(name);
		numberOfStudents++;
	}void dropStudent(const string& name); 
	vector<string>* getStudents() const {
		return students;
	}int getNumberOfStudents()const {
		return numberOfStudents;
	}
private:
	string courseName;
	vector<string> *students;
	int numberOfStudents;
	int capacity;
};
void Course::dropStudent(const string& name) {
	for (int i = 0; i<numberOfStudents; i++) {
		if (students[i] == name)
			for (int k = i; k<numberOfStudents - 1; k++) {
				students[k] = students[k + 1];
			}
		numberOfStudents--;
		break;
	}
}
#endif