#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point
{
    public:
        Point(int a=0,int b=0);//带默认参数值的构造函数
        bool display_Point();
        friend double distancee(Point &a,Point &b);
    private:
        int x;
        int y;
};


#endif // POINT_H_INCLUDED
