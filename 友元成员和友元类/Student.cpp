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

bool Student::disp_student()
{
        cout<<"sno: "<<sno<<endl<<"sname: "<<sname<<endl<<"sgrade: "<<sgrade<<endl;

        return 1;
}

Course::Course(int no,string name)
{
        cno=no;
        cname=name;
        cout<<"Assigning course  "<<cname<<endl;
}
Course::~Course()
{
        cout<<"Destructing course "<<cname<<endl;
}
bool Course::modify_cno(int x)
{
        cno=x;
        return 1;
}
bool Course::modify_cname(string x)
{
        cname=x;
        return 1;
}
bool Course::disp_course(Student &s)
{
        cout<<"sno:"<<s.sno<<endl;
        cout<<"sname:"<<s.sname<<endl;
        cout<<"grade:"<<s.sgrade<<endl;
        cout<<"cno:"<<cno<<endl<<"cname:"<<cname<<endl;
        return 1;
}

