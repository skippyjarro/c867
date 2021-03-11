#include "roster.h"
#include <iostream>
#include <string>
#include "degree.h"
using namespace std;

int main() {
    const string studentData[] =
            {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
             "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
             "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
             "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
             "A5,Nate,Sukhtipyaroge,nsukhti@wgu.edu,38,21,3,5,SOFTWARE"};
    const int STUDENT_DATA_SIZE = 5;

    cout << "C867 Scripting and Programming: Applications" << endl;
    cout << "C++" << endl;
    cout << "Student ID: 000264559" << endl;
    cout << "Nate Sukhtipyaroge" << endl;
    cout << endl;


    Roster classRoster;

    for (int i=0;i<STUDENT_DATA_SIZE;i++) {
        classRoster.parse(studentData[i]);
    }

    cout << "Function: classRoster.printAll();"<< endl;
    classRoster.printAll();

    cout << "Function: classRoster.printInvalidEmails();" << endl;
    classRoster.printInvalidEmails();

    cout << "//loop through classRosterArray and for each element:" << endl;
    cout << "Function: classRoster.printAverageDaysInCourse(/*current_object's student id*/);" << endl;
    for (int i=1; i<=STUDENT_DATA_SIZE; i++) {
        classRoster.printAverageDaysInCourse("A" + to_string(i));
    }

    cout << "Function: classRoster.printByDegreeProgram(SOFTWARE);" << endl;
    classRoster.printByDegreeProgram(SOFTWARE);

    cout << "Function: classRoster.remove(\"A3\");" << endl;
    classRoster.remove("A3");

    cout << "Function: classRoster.printAll()" << endl;
    classRoster.printAll();

    cout << "Function: classRoster.remove(\"A3\");\n"
            "//expected: the above line should print a message saying such a student with this ID was not found." << endl;
    classRoster.remove("A3");

    return 0;
}
