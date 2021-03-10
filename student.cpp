//
// Created by Nate on 3/9/2021.
//

#include <iostream>
#include <string>
using namespace std;
#include "student.h"
Student::Student(string studID, string fName, string lName, string email, int studAge, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram program) {
    studentID = studID;
    studentFirstName = fName;
    studentLastName = lName;
    studentEmailAddress = email;
    studentAge = studAge;
    daysToComplete[0] = daysInCourse1;
    daysToComplete[1] = daysInCourse2;
    daysToComplete[2] = daysInCourse3;
    degreeProgram = program;
}

void Student::setStudentID(string studID) {
    studentID = studID;
    return;
}
void Student::setStudentFirstName(string fName) {
    studentFirstName = fName;
    return;
}
void Student::setStudentLastName(string lName) {
    studentLastName = lName;
    return;
}
void Student::setStudentEmailAddress(string email) {
    studentEmailAddress = email;
    return;
}
void Student::setStudentAge(int studAge) {
    studentAge = studAge;
    return;
}
void Student::setDaysToComplete(int daysInCourse1, int daysInCourse2, int daysInCourse3) {
    daysToComplete[0] = daysInCourse1;
    daysToComplete[1] = daysInCourse2;
    daysToComplete[2] = daysInCourse3;
    return;
}
string Student::getStudentID() const {
    return studentID;
}
string Student::getStudentFirstName() const {
    return studentFirstName;
}
string Student::getStudentLastName() const {
    return studentLastName;
}
string Student::getStudentEmailAddress() const {
    return studentEmailAddress;
}
int Student::getStudentAge() const {
    return studentAge;
}
const int* Student::getDaysToComplete() const {
    return daysToComplete;
}
void Student::print() const {

}