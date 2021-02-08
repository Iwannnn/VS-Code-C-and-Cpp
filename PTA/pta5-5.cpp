#include<iostream>
using namespace std;
class Point{
    double x,y;
    static int num;
    //定义静态变量
public:
    Point(double a=0,double b=0):x(a),y(b){
        num++;
    }
    ~Point(){
        num--;
    }
    void show(){
        cout<<"the number of Point is "<<num<<endl;
    }
};
int Point::num(0);
int main(){
    Point p1;
    Point *p=new Point(1,2);
    p->show();
    delete p;
    p1.show();
    return 0;
}