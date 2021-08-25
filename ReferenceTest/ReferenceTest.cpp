#include <iostream>
#include <stdio.h>
#include "MyHeader.h"
#include "Mylibrary.cpp"
using namespace std;

class Point
{
private:
    int x, y;

public:
    int X() { return x; }
    int Y() { return y; }
    void SetX(int x) { this->x; }
    void SetY(int y) { this->y; }
    /*Point()
    {
        x = 0;
        y = 0;
    }*/

    Point(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }

    //Point(int x, int y) : x(x), y(y);  위와 동일


    double dis(Point p)
    {
        int x2 = (x - p.x) * (x - p.x);
        int y2 = (y - p.y) * (x - p.y);
        double dist = sqrt(x2 + y2);
        return dist;
    }
};

class Point3D : public Point
{
private:
    int z;

public:
    Point3D(int x = 0, int y = 0, int z = 0) : Point(x, y)
    {
        this->z = z;
    }
    int  Z() { return z; }
    void SetZ(int z) { this->z; }
    double dis(Point3D p)
    {
        int x2 = (X() - p.X()) * (X() - p.X());
        int y2 = (Y() - p.Y()) * (Y() - p.Y());
        int z2 = (Z() - p.Z()) * (Z() - p.Z());
        return sqrt(x2 + y2 + z2);
    }
};

int main()
{
    //cout << "Hello C Plus Plus World!\n";
    //int a = 10, b = 20;
    //cout << "초기값은 a = " << a << ", b = " << b << endl;
    //swapValue(a, b);
    //cout << "swapValue(a, b)의 결과값값은 a = " << a << ", b = " << b << endl;
    //swapRef(a, b);
    //cout << "swapRef(a, b)의 결과값은 a = " << a << ", b = " << b << endl;
    //swapRef(&a, &b);
    //cout << "swapRef(&a, &b)의 결과값은 a = " << a << ", b = " << b << endl;

    Point p1;
    Point p2(10, 20);
    Point *p3 = new Point(30,40);
    cout << "두점 p1(" << p1.X() << "," << p1.Y() << "),p2(" << p2.X() << "," << p2.Y() << ")의 거리는 " << p1.dis(p2) << "입니다." << endl;
    cout << "Point Class 변수의 동적 할당  p3(" << p3->X() << "," << p3->Y() << ")" << endl;
    cout << "두점 p1(" << p1.X() << "," << p1.Y() << "),p3(" << p3->X() << "," << p3->Y() << ")의 거리는 " << p1.dis(*p3) << "입니다." << endl;



    Point3D p3D1;
    Point3D p3D2(10, 20, 30);
    Point3D * p3D3 = new Point3D(30, 50, 70);
    cout << "두점 p3D1(" << p3D1.X() << "," << p3D1.Y() << "," << p3D1.Z() << "),p3D2(" << p3D2.X() << "," << p3D2.Y() << "," << p3D2.Z() << ")의 거리는 " << p3D1.dis(p3D2) << "입니다." << endl;
    cout << "Point Class 변수의 동적 할당  p3(" << p3->X() << "," << p3->Y() << ")" << endl;
    cout << "두점 p3D1(" << p3D1.X() << "," << p3D1.Y() << "," << p3D1.Z() << "),p3D3(" << p3D3->X() << "," << p3D3->Y() << "," << p3D3->Z() << ")의 거리는 " << p3D1.dis(*p3D3) << "입니다." << endl;
}
