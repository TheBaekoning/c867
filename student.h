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
            int daysInCourse3, Degree degreeType);
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
    virtual string GetDegreeProgram();
    int GetDaysLeft(int index);


private:
    string studentId;
    string firstName;
    string lastName;
    string emailAddress;
    int age = 0;
    int daysLeft[3];
protected:
    Degree degree = NONE;
};

#endif //C867PA_STUDENT_H
