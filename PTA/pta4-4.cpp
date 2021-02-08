#include<iostream>
using namespace std;
class A{
    int data;
public:
    A(int k=0){
        data=k;
    }
    void show(){
        cout<<"data="<<data<<endl;
    }
};
int main(){
    A da[3]{
        A(0),
        A(0),
        A(0)
    };
    A db[3]{
        A(1),
        A(0),
        A(0)
    };
    A dc[3]{
        A(1),
        A(2),
        A(3)
    };
    da[0].show();
    da[1].show();
    da[2].show();
    cout << endl;
    db[0].show();
    db[1].show();
    db[2].show();
    cout << endl;
    dc[0].show();
    dc[1].show();
    dc[2].show();
}