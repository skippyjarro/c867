//
// Created by Nate on 3/9/2021.
//

#ifndef C867_ROSTER_H
#define C867_ROSTER_H
#include "student.h"


class Roster {
public:
    void parse(string inputString);
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);

private:
    Student* classRosterArray[];

};


#endif //C867_ROSTER_H
