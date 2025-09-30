Practical 3
Topic: Educational Institution System
Name: Kolhe Mayur Navnath
PRN: B24CE1100
Code:
// Design an educational Institution that maintains a database of all staff members.
//Kolhe Mayur (B24CE1100)
#include <iostream>
using namespace std;
// Base Class
class Staff {
protected:
string name, dept;
int id;
public:
void accept() {
cout << "Enter Name: ";
cin >> name;
cout << "Enter Department: ";
cin >> dept;
cout << "Enter ID: ";
cin >> id;
}
};
// Derived Class: Teacher
class Teacher : public Staff {
string subject;
float experience;
public:
void accept() {
Staff::accept();
cout << "Enter Subject: ";
cin >> subject;
cout << "Enter Experience (in years): ";
cin >> experience;
}
void display() {
cout << "Name\tDepartment\tID\tSubject\tExperience\n";
cout << name << "\t" << dept << "\t\t" << id << "\t" << subject << "\t" <<
experience << "\n";
}
};
// Derived Class: SupportStaff
class SupportStaff : public Staff {
string areaOfSupport;
public:
void accept() {
Staff::accept();
cout << "Enter Area of Support: ";
cin >> areaOfSupport;
}
void display() {
cout << "Name\tDepartment\tID\tArea of Support\n";
cout << name << "\t" << dept << "\t\t" << id << "\t" << areaOfSupport << "\n";
}
};
int main() {
int t, s;
cout << "Enter number of Teachers: ";
cin >> t;
Teacher teachers[t];
cout << "Enter number of Support Staff: ";
cin >> s;
SupportStaff supports[s];
cout << "\nEnter Teacher Details\n";
for (int i = 0; i < t; i++) {
cout << "\nTeacher " << i + 1 << ":\n";
teachers[i].accept();
}
cout << "\nEnter Support Staff Details\n";
for (int i = 0; i < s; i++) {
cout << "\nSupport Staff " << i + 1 << ":\n";
supports[i].accept();
}
cout << "\n\nDisplaying Teachers\n";
for (int i = 0; i < t; i++) {
teachers[i].display();
cout << "\n";
}
cout << "\nDisplaying Support Staff\n";
for (int i = 0; i < s; i++) {
supports[i].display();
cout << "\n";
}
return 0;
}
Output:
Enter number of Teachers: 2
Enter number of Support Staff: 2
Enter Teacher Details
Teacher 1:
Enter Name: ASS
Enter Department: Comp
Enter ID: 1
Enter Subject: OOP
Enter Experience (in years): 18
Teacher 2:
Enter Name: RMD
Enter Department: Comp
Enter ID: 2
Enter Subject: DECO
Enter Experience (in years): 15
Enter Support Staff Details
Support Staff 1:
Enter Name: KSD
Enter Department: Comp
Enter ID: 3
Enter Area of Support: Librarian
Support Staff 2:
Enter Name: JSM
Enter Department: Comp
Enter ID: 4
Enter Area of Support: Clerk
Displaying Teachers
Name Department ID Subject Experience
ASS Comp 1 OOP 18
Name Department ID Subject Experience
RMD Comp 2 DECO 15
Displaying Support Staff
Name Department ID Area of Support
KSD Comp 3 Librarian
Name Department ID Area of Support
JSM Comp 4 Clerk
