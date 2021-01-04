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
        bool modify_sno(int x);//�޸ĺ���
        bool modify_sname(string x);
        bool modify_sgrade(int x);

    private:
        int sno;//int���͵����ݿ��Դ�ſγ̺�10λ����
        string sname;
        int sgrade;
};



#endif // STUDENT_H_INCLUDED

