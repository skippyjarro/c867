//
// Created by Nate on 3/9/2021.
//

#include "roster.h"
#include <iostream>
#include <string>
#include "student.h"

using namespace std;

void Roster::parse(string row) {
    string newStudentID;
    string newStudentFirstName;
    string newStudentLastName;
    string newStudentEmailAddress;
    int newStudentAge;
    int newDaysInCourse1;
    int newDaysInCourse2;
    int newDaysInCourse3;
    string degree;
    DegreeProgram newDegreeProgram;

    int rhs = row.find(',');
    int lhs;

    newStudentID = row.substr(0, rhs);

    lhs = rhs + 1;
    rhs = row.find(',', lhs);
    newStudentFirstName = row.substr(lhs, rhs - lhs);

    lhs = rhs + 1;
    rhs = row.find(',', lhs);
    newStudentLastName = row.substr(lhs, rhs - lhs);

    lhs = rhs + 1;
    rhs = row.find(',', lhs);
    newStudentEmailAddress = row.substr(lhs, rhs - lhs);

    lhs = rhs + 1;
    rhs = row.find(',', lhs);
    newStudentAge = stoi(row.substr(lhs, rhs - lhs));

    lhs = rhs + 1;
    rhs = row.find(',', lhs);
    newDaysInCourse1 = stoi(row.substr(lhs, rhs - lhs));

    lhs = rhs + 1;
    rhs = row.find(',', lhs);
    newDaysInCourse2 = stoi(row.substr(lhs, rhs - lhs));

    lhs = rhs + 1;
    rhs = row.find(',', lhs);
    newDaysInCourse3 = stoi(row.substr(lhs, rhs - lhs));

    lhs = rhs + 1;
    rhs = row.find(',', lhs);
    degree = row.substr(lhs, rhs - lhs);
    if (degree == "SECURITY") {
        newDegreeProgram = DegreeProgram::SECURITY;
    } else if (degree == "NETWORK") {
        newDegreeProgram = DegreeProgram::NETWORK;
    } else if (degree == "SOFTWARE") {
        newDegreeProgram = DegreeProgram::SOFTWARE;
    }

    this->add(newStudentID, newStudentFirstName, newStudentLastName, newStudentEmailAddress, newStudentAge,
              newDaysInCourse1, newDaysInCourse2, newDaysInCourse3, newDegreeProgram);
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1,
                 int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {
    //for (int i = 0; i < 5; i++) {
    classRosterArray[rosterIndex] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1,
                                                daysInCourse2, daysInCourse3, degreeprogram);
    rosterIndex++;
    //}
}

void Roster::remove(string studentID) {
    bool idFound = false;
    int i;
    for (i = 0; i < 5; i++) {
        if (classRosterArray[i]->getStudentID() == studentID) {
            idFound = true;
            break;
        }
    }
    if (idFound) {
        delete classRosterArray[i];
    } else if (!idFound) {
        cout << "Student ID Not Found" << endl;
    }
}

void Roster::printAll() {
    for (int i = 0; i < 5; i++) {
        classRosterArray[i]->print();
    }
}

void Roster::printAverageDaysInCourse(string studentID) {

}

void Roster::printInvalidEmails() {

}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {

}
