//
// Created by dbdev on 12/8/19.
//

#include <iostream>
#include "softwareStudent.h"

SoftwareStudent::SoftwareStudent() : Student(){
    degree = SOFTWARE;
};

SoftwareStudent::SoftwareStudent(string studentID, string firstName, string lastName, string emailAddress, int age,
                                 int daysInCourse1, int daysInCourse2,
                                 int daysInCourse3) : Student(studentID, firstName, lastName, emailAddress, age,
                                         daysInCourse1, daysInCourse2, daysInCourse3) {
    degree = SOFTWARE;
}

Degree SoftwareStudent::GetDegreeProgram(){
    return SOFTWARE;
}

void SoftwareStudent::print() {
    this->Student::print();
    cout << "Software" << endl;
}

SoftwareStudent::~SoftwareStudent(){
 //   Student::~Student();
}

