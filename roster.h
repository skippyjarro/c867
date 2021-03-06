//
// Created by Nate on 3/9/2021.
//

#ifndef C867_ROSTER_H
#define C867_ROSTER_H
#include "student.h"

using namespace std;


class Roster {
public:
    void parse(string row);
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);
    ~Roster();

private:
    Student* classRosterArray[5];
    int rosterIndex = 0;

};


#endif //C867_ROSTER_H
