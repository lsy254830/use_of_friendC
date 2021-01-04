#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include<string>

using namespace std;

class Student
{
    public:
        friend bool disp_student(Student &s);
        Student(int no=0,string name="no name",int grade=0);
        ~Student ();
        bool modify_sno(int x);//修改函数
        bool modify_sname(string x);
        bool modify_sgrade(int x);

    private:
        int sno;//int类型的数据可以存放课程号10位以内
        string sname;
        int sgrade;
};



#endif // STUDENT_H_INCLUDED

