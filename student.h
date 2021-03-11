//
// Created by Nate on 3/9/2021.
//
#include <string>
#include "degree.h"
using namespace std;

#ifndef C867_STUDENT_H
#define C867_STUDENT_H


class Student {
public:
    Student();
    Student(string studID, string fName, string lName, string email, int studAge, int daysInCourse1, int dayInCourse2, int daysInCourse3, DegreeProgram program);
    string getStudentID() const;
    string getStudentFirstName() const;
    string getStudentLastName() const;
    string getStudentEmailAddress() const;
    int getStudentAge() const;
    int *getDaysToComplete();
    DegreeProgram getDegreeProgram() const;
    void setStudentID(string studID);
    void setStudentFirstName(string fName);
    void setStudentLastName(string lName);
    void setStudentEmailAddress(string email);
    void setStudentAge(int studAge);
    void setDaysToComplete(int daysInCourse1, int daysInCourse2, int daysInCourse3);
    void print();


private:
    static const int SIZE = 3;
    string studentID;
    string studentFirstName;
    string studentLastName;
    string studentEmailAddress;
    int studentAge;
    int daysToComplete[SIZE];
    DegreeProgram degreeProgram;



};


#endif //C867_STUDENT_H
