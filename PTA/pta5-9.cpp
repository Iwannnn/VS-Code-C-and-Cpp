#include<iostream>
#include <pthread.h>
using namespace std;
class Point{
private:
    int x, y;
public:
    static int num;
    Point(int a = 0, int b = 0) : x(a), y(b) { num++; };
    Point(Point &a):x(a.getX()),y(a.getY()){ num++; };
    static int showCount(){
        cout << num << endl;
        return num;
    }
    ~Point(){};
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
};
int Point::num(0);
int main(){
    int x,y;
    cin>>x>>y;
    Point::showCount();
    Point a(x,y);
    cout<<"Point A: "<<a.getX()<<","<<a.getY()<<endl;
    Point::showCount();
    Point b(a);
    cout<<"Point B: "<<b.getX()<<","<<b.getY()<<endl;
    Point::showCount();
    Point c;
    cout<<"Point C: "<<c.getX()<<","<<c.getY()<<endl;
    Point::showCount();
    Point d(x);
    cout<<"Point D: "<<d.getX()<<","<<d.getY()<<endl;
    Point::showCount();
    return 0;
}