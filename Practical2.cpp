Practical 2
Topic: Employee Information System
Name: Kolhe Mayur Navnath
PRN: B24CE1100
Code:
// Develop a program to create a database of an employee's information system
// Kolhe Mayur (B24CE1100)
#include <iostream>
using namespace std;
class employee {
string name, dep, address;
int emp_id, contact;
string date;
static int count;
public:
void display();
static void showcount();
// Inline
inline void title() {
cout << "Welcome to the Employee Information System!\n";
}
// Default Constructor
employee() {
name = "Uday";
dep = "Computer";
address = "Mumbai";
emp_id = 1088;
contact = 172123314;
date = "15-04-25";
count++;
}
// Parameterized Constructor
employee(string n, string de, string a, int id, int c, string d) {
name = n;
dep = de;
address = a;
emp_id = id;
contact = c;
date = d;
count++;
}
// Copy Constructor
employee(employee &x) {
name = x.name;
dep = x.dep;
address = x.address;
emp_id = x.emp_id;
contact = x.contact;
date = x.date;
count++;
}
// Destructor
~employee() {
count--;
cout << "Total no. of objects destroyed: " << count << "\n";
}
};
int employee::count = 0;
void employee::display() {
cout << "Name\tDepartment\tAddress\tEmployee ID\tContact no.\tDate of joining\n";
cout << name << "\t" << dep << "\t" << address << "\t" << emp_id
<< "\t\t" << contact << "\t" << date << "\n";
}
void employee::showcount() {
cout << "Total no. of objects created: " << count << "\n";
}
int main() {
employee emp1;
emp1.title();
emp1.display();
employee::showcount();
employee emp2("Mandar", "Computer", "Pune", 1104, 123456789, "12-05-25");
emp2.title();
emp2.display();
employee::showcount();
employee emp3(emp2);
emp3.title();
emp3.display();
employee::showcount();
// Dynamic allocation
employee* ptr = new employee("Mandar", "Computer", "Pune", 1104, 123456789,
"12-05-25");
ptr->display();
employee::showcount();
delete ptr;
return 0;
}
Output:
You are in the Default Constructor!
Welcome to the Employee Information System!
Name Department Address Employee ID Contact no. Date of joining
Uday Computer Mumbai 1088 172123314 15-04-25
You are in the Parameter Constructor!
Welcome to the Employee Information System!
Name Department Address Employee ID Contact no. Date of joining
Mandar Computer Pune 1104 123456789 12-05-25
You are in the Copy Constructor!
Welcome to the Employee Information System!
Name Department Address Employee ID Contact no. Date of joining
Mandar Computer Pune 1104 123456789 12-05-25
You are in the Parameter Constructor!
Name Department Address Employee ID Contact no. Date of joining
Mandar Computer Pune 1104 123456789 12-05-25
Destructor for Employee: Mandar
No. of object destroyed: 3
Destructor for Employee: Mandar
No. of object destroyed: 2
Destructor for Employee: Mandar
No. of object destroyed: 1
Destructor for Employee: Uday
No. of object destroyed: 0
