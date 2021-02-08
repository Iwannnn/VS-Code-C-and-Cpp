#include <iostream>
#include<string>
using namespace std;

class Student{
public:                                
    Student(int n,string nam,char s ){
        num=n;
        name=nam;
        sex=s; 
    }
    ~Student( ) { }
protected:                               
    int num;
    string name;
    char sex ;                           
};
class Student1:public Student{
public:
    Student1(int n,string nam,char s ,int a,string ad):Student(n, nam, s){
        age = a;
        add = ad;
    }
    void show(){
        cout << "num: " << this->num << endl
             << "name: " << this->name << endl
             << "sex: " << this->sex << endl
             << "age: " << this->age << endl
             << "address: " << this->add << endl
             << endl;
    }
protected:
    int age;
    string add;
};
int main( ){
    Student1 stud1(10010,"Wang-li",'f',19,"115 Beijing Road,Shanghai");
    Student1 stud2(10011,"Zhang-fun",'m',21,"213 Shanghai Road,Beijing");
    stud1.show( );           
    stud2.show( );            
    return 0;
}
