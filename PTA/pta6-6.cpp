#include <iostream>
#include<iomanip>
using namespace std;
class Point{
private:
    float x, y;
public:
    Point(float a,float b){
        cout << "Point constructor called" << endl;
        x = a;
        y = b;
    }
    ~Point() { cout << "Point destructor called" << endl; }
};
class Circle:public Point{
private:
    float r;
public:
    Circle(float a,float b,float c):Point(a,b){
        cout << "Circle constructor called" << endl;
        r = c;
    }
    float getCircumference(){
        return 2 * 3.14 * r;
    }
    ~Circle() { cout << "Circle destructor called" << endl; }
};
int main(){
    float x,y,r;
    cin>>x>>y>>r;
    Circle c(x,y,r);
    cout<<fixed<<setprecision(2)<<c.getCircumference()<<endl;
    return 0;
}