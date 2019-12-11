//
// Created by dbdev on 12/8/19.
//
#include <string>
#include <iostream>
#include "roster.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"

using namespace std;

const int SIZE = 5;
const string studentData[5] =
        {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
         "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
         "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
         "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
         "A5,Douglas,Baek,dbaek1@wgu.edu,29,10,20,30,SOFTWARE"};

int main() {
    cout << "C867 " << "C++ " << " 000980076" << " DOUGLAS BAEK" << endl;

    Roster roster;

    for (int i = 0; i < 5; i++) {
        string parser;
        string id;
        string fname;
        string lname;
        string email;
        int age;
        int day1;
        int day2;
        int day3;
        Degree degree;

        parser = studentData[i];
        // Parser
        int start;
        int comma;

        comma = parser.find(",");
        id = parser.substr(0, comma);

        start = comma + 1;
        comma = parser.find(",", start);
        fname = parser.substr(start, comma - start);

        start = comma + 1;
        comma = parser.find(",", start);
        lname = parser.substr(start, comma - start);

        start = comma + 1;
        comma = parser.find(",", start);
        email = parser.substr(start, comma - start);

        start = comma + 1;
        comma = parser.find(",", start);
        age = stoi(parser.substr(start, comma - start));

        start = comma + 1;
        comma = parser.find(",", start);
        day1 = stoi(parser.substr(start, comma - start));

        start = comma + 1;
        comma = parser.find(",", start);
        day2 = stoi(parser.substr(start, comma - start));

        start = comma + 1;
        comma = parser.find(",", start);
        day3 = stoi(parser.substr(start, comma - start));

        start = comma + 1;
        comma = parser.find(",", start);
        degree = roster.convertDegree(parser.substr(start, comma - start));
        roster.add(id, fname, lname, email, age, day1, day2, day3, degree);
    }

    roster.printAll();
    roster.printInvalidEmails();

    for (int i = 0; i < roster.GetLastIndex(); i++) {
        roster.printDaysInCourse(roster.classRosterArray[i]->GetStudentId());
    }
    roster.printByDegreeProgram(SOFTWARE);
    roster.remove("A3");
    roster.remove("A3");

    return 0;
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1,
                 int daysInCourse2, int daysInCourse3, Degree degree) {
    switch (degree) {
        case SOFTWARE :
            classRosterArray[lastIndex] = new SoftwareStudent(studentID, firstName, lastName, emailAddress, age,
                                                              daysInCourse1, daysInCourse2, daysInCourse3);
            lastIndex++;
            break;
        case SECURITY :
            classRosterArray[lastIndex] = new SecurityStudent(studentID, firstName, lastName, emailAddress, age,
                                                              daysInCourse1, daysInCourse2, daysInCourse3);
            lastIndex++;
            break;
        case NETWORK :
            classRosterArray[lastIndex] = new NetworkStudent(studentID, firstName, lastName, emailAddress, age,
                                                             daysInCourse1, daysInCourse2, daysInCourse3);
            lastIndex++;
            break;
    }
}

int Roster::GetLastIndex() {
    return lastIndex;
}

Degree Roster::convertDegree(string degree) {
    if (degree == "SECURITY")
        return SECURITY;
    if (degree == "SOFTWARE")
        return SOFTWARE;
    if (degree == "NETWORK")
        return NETWORK;
}

void Roster::printDaysInCourse(string studentID) {
    bool found = false;
    for (int i = 0; i < lastIndex; i++) {
        if (classRosterArray[i]->GetStudentId() == studentID) {
            int average = classRosterArray[i]->GetDaysLeft(0) + classRosterArray[i]->GetDaysLeft(1) +
                          classRosterArray[i]->GetDaysLeft(2);
            found = true;
            cout << "Student " << studentID << " average days in courses: " << average / 3 << endl;
        }
    }
    if (found == false) {
        cout << "STUDENT ID NOT FOUND";
    }
}

void Roster::remove(string studentID) {
    bool found = false;
    for (int i = 0; i < lastIndex; i++) {

        if (classRosterArray[i]->GetStudentId() == studentID) {
            delete classRosterArray[i];
            classRosterArray[i] = classRosterArray[lastIndex - 1];
            lastIndex = lastIndex - 1;
            found = true;
        }
    }
    if (found == false) {
        cout << "ID NOT FOUND" << endl;
    }

}

void Roster::printByDegreeProgram(enum Degree degreeProgram) {
    for (int i = 0; i < lastIndex; i++) {
        if (classRosterArray[i]->GetDegreeProgram() == degreeProgram)
            classRosterArray[i]->print();
    }
}

void Roster::printInvalidEmails() {
    cout << "LIST OF INVALID EMAIL ADDRESSES:" << endl;
    for (int i = 0; i < lastIndex; i++) {
        bool error = false;
        bool hasAt = false;
        bool hasPeriod = false;

        for (int k = 0; k < classRosterArray[i]->GetEmailAddress().size(); k++) {
            if (classRosterArray[i]->GetEmailAddress().at(k) == ' ') {
                cout << classRosterArray[i]->GetEmailAddress() << endl;
                error = true;
            }
            if (!error && classRosterArray[i]->GetEmailAddress().at(k) == '@') {
                hasAt = true;
            }
            if (!error && classRosterArray[i]->GetEmailAddress().at(k) == '.') {
                hasPeriod = true;
            }
        }
        if (!error && !hasAt)
            cout << classRosterArray[i]->GetEmailAddress() << endl;
        if (!error && !hasPeriod)
            cout << classRosterArray[i]->GetEmailAddress() << endl;
    }
    cout << "END OF INVALID EMAIL LIST" << endl;
}

void Roster::printAll() {
    for (int i = 0; i < lastIndex; i++) {
        classRosterArray[i]->print();
    }
}

Roster::~Roster() {
    cout << "DECONSTRUCTING!" << endl;
}

