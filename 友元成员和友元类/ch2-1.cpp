#include <iostream>
#include<string>
#include"Student.h"

using namespace std;

int main()
{
    Student s(11,"lisiyi",16);
    s.modify_sno(44);
    s.modify_sname("wang feifei ");
    s.modify_sgrade(55);
    Course cc(123,"jizu");
    cc.disp_course(s);
    return 0;
}
