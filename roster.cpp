//
// Created by Nate on 3/9/2021.
//

#include "roster.h"
#include <iostream>
#include <string>
#include <iomanip>
#include "student.h"

using namespace std;

//Function to parse student data table
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

//Function to add new students to array
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1,
                 int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
    classRosterArray[rosterIndex] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1,
                                                daysInCourse2, daysInCourse3, degreeProgram);
    rosterIndex++;
}

//Function to remove student by student ID
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
        for (int j = i; j < 5; j++) {
            if (j < 4) {
                classRosterArray[j] = classRosterArray[j + 1];
            } else if (j == 4) {
                classRosterArray[j] = new Student();
            }
        }
        cout << "Student ID " << studentID << " successfully removed." << endl;
    } else if (!idFound) {
        cout << "Student ID " << studentID << " Not Found" << endl;
    }
    cout << endl;
}

//Function to print all student information
void Roster::printAll() {
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i]->getStudentID() != "") {
            classRosterArray[i]->print();
        }
    }
    cout << endl;
}

//Function to print average days in course
void Roster::printAverageDaysInCourse(string studentID) {
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i]->getStudentID() == studentID) {
            int *days = classRosterArray[i]->getDaysToComplete();
            double totalDays = 0.0;
            for (int j = 0; j < 3; j++) {
                totalDays += (double) days[j];
            }
            cout << "Student ID: " << studentID;
            cout << fixed << setprecision(1);
            cout << "\tAverage Days to Complete Course: " << totalDays / 3 << endl;
        }
    }
    cout << endl;
}

//Function to print all Invalid emails
void Roster::printInvalidEmails() {
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i]->getStudentEmailAddress().find(' ') != string::npos ||
            classRosterArray[i]->getStudentEmailAddress().find('@') == string::npos ||
            classRosterArray[i]->getStudentEmailAddress().find('.') == string::npos) {
            cout << classRosterArray[i]->getStudentEmailAddress() << endl;
        }
    }
    cout << endl;
}

//Function to Print students with matching degree program
void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i]->getDegreeProgram() == degreeProgram) {
            classRosterArray[i]->print();
        }
    }
    cout << endl;
}

//Destructor
Roster::~Roster() {}
