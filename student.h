//
// Created by dbdev on 12/8/19.
//

#include <string>
#include "degree.h"

#ifndef C867PA_STUDENT_H
#define C867PA_STUDENT_H
using namespace std;

class Student {
public:
    Student();

    void SetStudentId(string id);
    void SetFirstName(string name);
    void SetLastName(string lname);
    void SetEmailAddress(string email);
    void SetAge(int age);
    void SetDegree(Degree degreeType);
    void SetDaysLeft(int daysLeftList[]);

    string GetStudentId();
    string GetFirstName();
    string GetLastName();
    string GetEmailAddress();
    int GetAge();
    Degree GetDegree();
    int GetDaysLeft();


private:
    string studentId;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    Degree degree;
    int daysLeft[];
};

#endif //C867PA_STUDENT_H
