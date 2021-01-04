#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include<string>

using namespace std;

class Student;
class Course
{
    public:
        Course(int no=0,string name="no name");
        ~Course();
        bool modify_cno(int x);//�޸ĺ���
        bool modify_cname(string x);
        bool disp_course(Student &s);
    private:
        int cno;
        string cname;
};

class Student
{
    public:
        friend bool Course::disp_course(Student &s);
        Student(int no=0,string name="no name",int grade=0);
        ~Student ();
        bool modify_sno(int x);//�޸ĺ���
        bool modify_sname(string x);
        bool modify_sgrade(int x);
        bool disp_student();
    private:
        int sno;//int���͵����ݿ��Դ�ſγ̺�10λ����
        string sname;
        int sgrade;
};



#endif // STUDENT_H_INCLUDED
