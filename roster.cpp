//
// Created by dbdev on 12/8/19.
//
#include <string>
#include <iostream>
#include "roster.h"

using namespace std;

const int SIZE = 5;
const string studentData[5] =
        {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
         "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
         "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
         "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
         "A5,Doug,Baek,dbaek1@wgu.edu,29,10.20,30,SOFTWARE"};

int main() {
    int i;
    Roster roster;
    for (i = 0; i < SIZE; i++) {
        roster.classRosterArray[i] = &studentData[i];
    }

    cout << *classRosterArray[4];
}


Roster::Roster(){
    classRosterArray[0] = &studentData[0];
}