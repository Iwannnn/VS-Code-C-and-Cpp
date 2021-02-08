#include <iostream>
#include <iomanip>
const double PI = 3.1415926;
using namespace std;
class CPoint{
protected:
    double x, y;
public:
    CPoint(double a,double b){
        x = a;
        y = b;
    }
    CPoint(const CPoint& p){
        x = p.x;
        y = p.y;
    }
    void print(){
        cout << "Center:(" << x << "," << y << ")" << endl;
    }
};
class Circle:public CPoint{
protected:
    double r;
public:
    Circle(double a,double b,double c):CPoint(a,b){
        r = c;
    }
    Circle(const Circle& p):CPoint(p){
        r = p.r;
    }
    double GetArea(){
        return PI*r*r;
    };
    double GetVolume();
    void print(){
        cout << "radius=" << r << endl;
    }
};
class Ccylinder:public Circle{
protected:
    double h;
public:
    Ccylinder(double a,double b,double c,double d):Circle(a,b,c){
        h = d;
    }
    Ccylinder(const Ccylinder& p):Circle(p){
        h = p.h;
    }
    double GetArea(){
        return 2 *Circle::GetArea() + 2 * PI * r * h;
    }
    double GetVolume(){
        return h*Circle::GetArea();
    }
    void print(){
        cout << "height:" << h << endl;
    }
};
int main(){
    double x, y, r, h;
    cin >> x >> y >> r >> h;
    CPoint a(x, y);
    Circle b(x, y, r);
    Ccylinder c(x, y, r, h);
    a.print();
    b.print();
    c.print();
    cout << "BasalArea:" << b.GetArea() << endl;
    cout << "SupfaceArea:" << c.GetArea() << endl;
    cout << "Volume:" << c.GetVolume() << endl;
    return 0;
}