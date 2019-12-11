//
// Created by dbdev on 12/8/19.
//

#ifndef C867PA_ROSTER_H
#define C867PA_ROSTER_H

#include "student.h"

using namespace std;

class Roster{
public:
    ~Roster();
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree);
    void remove(string studentID);
    void printAll();
    void printDaysInCourse(string studentID); // average days in course
    void printInvalidEmails();
    void printByDegreeProgram(Degree degreeProgram);
    Degree convertDegree(string degree);
    Student* classRosterArray[5];
    int GetLastIndex();
private:

    int lastIndex = 0;

};

#endif //C867PA_ROSTER_H
