#include <iostream>
#include <string>
using namespace std;
class Animal{
private:
    int m_nWeightBase;
protected:
    int m_nAgeBase;
public:
    void set_weight(int w){
        m_nWeightBase = w;
    }
    int get_weight(){
        return m_nWeightBase;
    }
    void set_age(int a){
        m_nAgeBase = a;
    }
};
class Cat:public Animal{
private:
    string m_strName;
public:
    Cat(string n){
        m_strName = n;
    }
    void print_age(){
        cout << m_strName << ", age = " << m_nAgeBase<<endl;
    }
};
int main()
{
    Cat cat("Persian");   //定义派生类对象cat
    cat.set_age(5);       //派生类对象调用从基类继承的公有成员函数
    cat.set_weight(6);    //派生类对象调用从基类继承的公有成员函数
    cat.print_age();      //派生类对象调用自己的公有函数
    cout << "cat weight = " << cat.get_weight() << endl;
    return 0;
}