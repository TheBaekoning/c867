//
// Created by dbdev on 12/8/19.
//

#ifndef C867PA_SECURITYSTUDENT_H
#define C867PA_SECURITYSTUDENT_H

#include "student.h"

using namespace std;

class SecurityStudent : public Student {
public:
    SecurityStudent();
    SecurityStudent(string studentID, string firstName, string lastName, string emailAddress, int age,
                    int daysInCourse1, int daysInCourse2,
                    int daysInCourse3);
    ~SecurityStudent();

    Degree GetDegreeProgram();
    void print();

};



#endif //C867PA_SECURITYSTUDENT_H
