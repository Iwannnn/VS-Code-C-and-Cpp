#include <iostream>
#include <math.h>
using namespace std;
class Complex{
protected:
    double a, b;
public:
    Complex(int aa,int bb){
        a = aa;
        b = bb;
    }
    friend double operator - (Complex A, Complex B){
        return sqrt(pow(A.a - B.a, 2) + pow(A.b - B.b, 2));
    }
};
template <class T>
double dist(T a, T b){
    return abs(a-b);
}
int main( )
{
    int ty;
    while(cin>>ty&&ty!=0){
        if(ty==1){
            int a, b;
            cin >> a >> b;
            cout<<dist(a,b)<<endl;
        }else if(ty==2){
            double a, b;
            cin >> a >> b;
            cout<<dist(a,b)<<endl;
        }else if(ty==3){
            double a1, a2, b1, b2;
            cin >> a1 >> b1 >> a2 >> b2;
            Complex A(a1,b1), B(a2,b2);
            cout<<dist(A,B)<<endl;
        }
    }
}
