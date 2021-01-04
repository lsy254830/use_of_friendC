#include <iostream>
#include"Point.h"
using namespace std;

int main()
{
        Point a(3,3);
        a.display_Point();
        Point b(4,4);
        b.display_Point();
        cout<<"distance is:"<<distancee(a,b)<<endl;
        return 0;
}
