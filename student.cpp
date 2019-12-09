#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"

using namespace std;

Student::Student(string studentID, string firstName, string lastName, string emailAddress
, int age, int daysInCourse1, int daysInCourse2,
int daysInCourse3, Degree degreeType) {
    SetStudentId(move(studentID));
    SetFirstName(move(firstName));
    SetLastName(move(lastName));
    SetEmailAddress(move(emailAddress));
    SetAge(age);
    SetDaysLeft(daysInCourse1, 0);
    SetDaysLeft(daysInCourse2, 1);
    SetDaysLeft(daysInCourse3, 2);
    SetDegree(degreeType);
}

void Student::print() {
    cout << "Student ID: " + GetStudentId() << "\t" << "First Name: "
    + GetFirstName() << "\t" << "Last Name: " + GetLastName() << "\t\t" << "Student Email: " + GetEmailAddress()
    << "\t" << "Student Age: " << GetAge() << "\t\t" << "Days in Course: { " << GetDaysLeft(0) << ", " <<
    GetDaysLeft(1) << ", " << GetDaysLeft(2) << "} \t\t" << "Degree Program: " << GetDegreeProgram() << endl << endl;
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
    daysLeft[index] = days;
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

string Student::GetDegreeProgram() {
    /*string degreeString;
    switch (degree) {
        case SOFTWARE:
            degreeString = "SOFTWARE";
            break;
        case NETWORKING:
            degreeString = "NETWORKING";
            break;
        case SECURITY:
            degreeString = "SECURITY";
            break;
    }
    return degreeString;*/
}

int Student::GetDaysLeft(int index) {
    return daysLeft[index];
}

Student::~Student(){
    studentId.clear();
    firstName.clear();
    lastName.clear();
    emailAddress.clear();
}


