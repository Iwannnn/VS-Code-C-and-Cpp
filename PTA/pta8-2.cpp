#include <iostream>
#include <cstring>
using namespace std;
class Base1 {
public:
    virtual void Show()=0;
};
class Base2 {
protected:
    char * _p;
    Base2(const char *s){
        _p = new char[strlen(s) + 1];
        strcpy(_p,s);
    }
    ~Base2() { delete [] _p; }
};
class Derived:public Base1,private Base2{
public:
    Derived(const char *s) : Base2(s){}
    void Show(){ cout << _p << endl; }
};

int main()
{
  Base1 *pb = new Derived("I'm a derived class.");
  pb->Show();
  delete pb;
  return 0;
}