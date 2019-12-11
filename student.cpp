#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"

using namespace std;
Student::Student(){
    studentId = "";
    firstName = "";
    lastName = "";
    emailAddress = "";
}

Student::Student(string studentID, string firstName, string lastName, string emailAddress
, int age, int daysInCourse1, int daysInCourse2,
int daysInCourse3) {
    studentId = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    days[0] = daysInCourse1;
    days[1] = daysInCourse2;
    days[2] = daysInCourse3;
}

void Student::print() {
    cout << "Student ID: " + GetStudentId() << "\t" << "First Name: "
    + GetFirstName() << "\t" << "Last Name: " + GetLastName() << "\t" << "Student Email: " + GetEmailAddress()
    << "\t" << "Student Age: " << GetAge() << "\t" << "Days in Course: { " << GetDaysLeft(0) << ", " <<
    GetDaysLeft(1) << ", " << GetDaysLeft(2) << " } \t" << "Degree Program: ";
}



void Student::SetStudentId(string id) {
    studentId = id;
}

void Student::SetFirstName(string name) {
    firstName = name;
}

void Student::SetLastName(string lname) {
    lastName = lname;
}

void Student::SetEmailAddress(string email) {
    emailAddress = email;
}

void Student::SetAge(int age) {
    this->age = age;
}

void Student::SetDegree(enum Degree degreeType) {
    degree = degreeType;
}

void Student::SetDaysLeft(int days, int index) {
    this->days[index] = days;
}

string Student::GetStudentId() {
    return studentId;
}

string Student::GetFirstName() {
    return firstName;
}

string Student::GetLastName() {
    return lastName;
}

string Student::GetEmailAddress() {
    return emailAddress;
}

int Student::GetAge() {
    return age;
}

Degree Student::GetDegreeProgram() {

}

int Student::GetDaysLeft(int index) {
    return days[index];
}

Student::~Student(){
}


