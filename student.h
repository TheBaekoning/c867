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
    Student(string studentID, string firstName, string lastName, string emailAddress
            , int age, int daysInCourse1, int daysInCourse2,
            int daysInCourse3);
    ~Student();

    virtual void print();

    void SetStudentId(string id);
    void SetFirstName(string name);
    void SetLastName(string lname);
    void SetEmailAddress(string email);
    void SetAge(int age);
    void SetDegree(Degree degreeType);
    void SetDaysLeft(int days, int index);

    string GetStudentId();
    string GetFirstName();
    string GetLastName();
    string GetEmailAddress();
    int GetAge();
    virtual Degree GetDegreeProgram();
    int GetDaysLeft(int index);
    Degree degree;


private:
    string studentId;
    string firstName;
    string lastName;
    string emailAddress;
    int age = 0;
    int days[3];
};

#endif //C867PA_STUDENT_H
