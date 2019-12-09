//
// Created by dbdev on 12/8/19.
//

#ifndef C867PA_SOFTWARESTUDENT_H
#define C867PA_SOFTWARESTUDENT_H

#include "student.h"

using namespace std;

class SoftwareStudent : public Student {
public:
    SoftwareStudent(string studentID, string firstName, string lastName, string emailAddress, int age,
                    int daysInCourse1, int daysInCourse2,
                    int daysInCourse3, Degree degreeType);

    string GetDegreeProgram();
};


#endif //C867PA_SOFTWARESTUDENT_H
