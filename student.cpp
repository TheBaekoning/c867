#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"

#

using namespace std;

Student::Student() {
    studentId = "";
    firstName = "";
    lastName = "";
    emailAddress = "";
    age = 0;
    degree = NONE;
    daysLeft[3] = {0};
}

void Student::SetStudentId(string id) {

}

void Student::SetFirstName(string name) {

}

void Student::SetLastName(string lname) {

}

void Student::SetEmailAddress(string email) {

}

void Student::SetAge(int age) {

}

void Student::SetDegree(enum Degree degreeType) {

}

void Student::SetDaysLeft(int * daysLeftList) {

}

string Student::GetStudentId() {

}

string Student::GetFirstName() {

}

string Student::GetLastName() {

}

string Student::GetEmailAddress() {

}

int Student::GetAge() {

}

Degree Student::GetDegree() {

}

int Student::GetDaysLeft() {

}
