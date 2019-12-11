//
// Created by dbdev on 12/8/19.
//
#include "securityStudent.h"
#include <string>
#include <iostream>

SecurityStudent::SecurityStudent() : Student(){
    degree = SECURITY;
}

SecurityStudent::SecurityStudent(string studentID, string firstName, string lastName, string emailAddress, int age,
                                 int daysInCourse1, int daysInCourse2,
                                 int daysInCourse3) : Student(studentID, firstName, lastName, emailAddress, age,
                                                              daysInCourse1, daysInCourse2, daysInCourse3) {
    degree = SECURITY;
}

Degree SecurityStudent::GetDegreeProgram() {
    return SECURITY;
}

void SecurityStudent::print() {
    this->Student::print();
    cout << "Software" << endl;
}

SecurityStudent::~SecurityStudent(){
 //   Student::~Student();
}