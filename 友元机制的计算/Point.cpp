#include<iostream>
#include<cmath>
#include"Point.h"
using namespace std;

Point::Point(int a,int b)
{
        x=a;
        y=b;
}
bool Point::display_Point()
{
        cout<<"x:"<<x<<endl;
        cout<<"y:"<<y<<endl;
        cout<<endl;
        return 1;
}
double distancee(Point &a,Point &b)
{
        double temp;
        temp=pow((double )abs(a.x-b.x),2)+pow((double )abs(a.y-b.y),2);
        temp=sqrt(temp);
        return temp;
}

