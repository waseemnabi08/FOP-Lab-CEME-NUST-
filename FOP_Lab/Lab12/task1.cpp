#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct student{
    string name;
    long roll;
    int marks;
};

student store();
void display(student s2);

int main()
{
    student s;
    s = store();

    display(s);
}

student store()
{
    student s1;
    cout <<"Enter student name:";
    cin >> s1.name;

    cout <<"Enter roll number: ";
    cin >> s1.roll;

    cout <<"Enter marks: ";
    cin >> s1.marks;

    return s1;
}

void display(student s2)
{

 cout << "Name " << setw(10) << "roll number " << setw(10) << "Marks" << endl;
 cout << s2.name << setw(10) << s2.roll << setw(10) << s2.marks << endl;
}