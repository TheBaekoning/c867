//
// Created by dbdev on 12/8/19.
//
#include "securityStudent.h"
#include <string>

SecurityStudent::SecurityStudent(string studentID, string firstName, string lastName, string emailAddress, int age,
                                 int daysInCourse1, int daysInCourse2,
                                 int daysInCourse3, Degree degreeType) : Student(studentID, firstName, lastName,
                                                                                 emailAddress,
                                                                                 age, daysInCourse1, daysInCourse2,
                                                                                 daysInCourse3,
                                                                                 degreeType) {
    degree = SECURITY;
}

string SecurityStudent::GetDegreeProgram() {
    string degreeString;
    switch (degree) {
        case NONE:
            degreeString = "NONE";
            break;
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
    return degreeString;
}