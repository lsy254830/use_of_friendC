#include<iostream>
#include<string>
#include"Student.h"

using namespace std;

Student::Student(int no,string name,int grade)
{
        sno=no;
        sname=name;
        sgrade=grade;
        cout<<"Assigning student  "<<sname<<endl;
}
Student::~Student()
{
        cout<<"Destructing student  "<<sname<<endl;
}
bool Student::modify_sno(int x)
{
        sno=x;
        return 1;
}
bool Student::modify_sname(string x)
{
        sname=x;
        return 1;
}
bool Student::modify_sgrade(int x)
{
        sgrade=x;
        return 1;
}

bool disp_student(Student &s)
{
        cout<<"sno: "<<s.sno<<endl;
        cout<<"sname: "<<s.sname<<endl;
        cout<<"sgrade: "<<s.sgrade<<endl;
        return 1;
}

