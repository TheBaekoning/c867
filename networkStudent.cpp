//
// Created by dbdev on 12/8/19.
//
#include "networkStudent.h"
#include <string>
#include <iostream>

NetworkStudent::NetworkStudent() : Student() {
    degree = NETWORK;
}
NetworkStudent::NetworkStudent(string studentID, string firstName, string lastName, string emailAddress, int age,
                                 int daysInCourse1, int daysInCourse2,
                                 int daysInCourse3) : Student(studentID, firstName, lastName, emailAddress, age,
                                                              daysInCourse1, daysInCourse2, daysInCourse3) {
    degree = NETWORK;
}

Degree NetworkStudent::GetDegreeProgram() {
    return NETWORK;
}

void NetworkStudent::print() {
    this->Student::print();
    cout << "Network" << endl;
}

NetworkStudent::~NetworkStudent(){
//    Student::~Student();
}