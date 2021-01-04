#include <iostream>
#include<string>
#include"Student.h"

using namespace std;

int main()
{
    Student s(19216211,"lisiyi",162);
    s.modify_sno(19216110);
    string name;
    int no,grade;
    cout<<"Input your no,name,grade:"<<endl;
    cin>>no>>name>>grade;
    s.modify_sno(no);
    s.modify_sname(name);
    s.modify_sgrade(grade);
    disp_student(s);
    return 0;
}
