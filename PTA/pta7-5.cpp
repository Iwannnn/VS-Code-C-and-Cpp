#include <iostream>
#include <string>
using namespace std;
//定义公共基类Person
class Person{
public:
    Person(string nam,char s,int a){name=nam;sex=s;age=a;}
protected:                              
    string name;
    char sex;
    int age;
};
//定义类Teacher
class Teacher:virtual public Person{
public:                                 
    Teacher(string nam,char s,int a,string t):Person(nam,s,a){title=t;}
protected:                                   
    string title;                                
};
//定义类Student
class Student:virtual public Person{
public:
    Student(string nam,char s,int a,float sco):Person(nam,s,a),score(sco){}              
protected:                                     
    float score;                               
};
class Graduate:public Teacher,public Student,virtual public Person{
public:
    Graduate(string nam,char s,int a,string t,float sco,float wa):Person(nam,s,a),Teacher(nam,s,a,t),Student(nam,s,a,sco){wages=wa;}
    void show(){
        cout << "name:" << name << endl
             << "age:" << age << endl
             << "sex:" << sex << endl
             << "score:" << score << endl
             << "title:" << title << endl
             << "wages:" << wages << endl;
    }
protected:
    float wages;
};
int main( ){
    Graduate grad1("Wang-li",'f',24,"assistant",89.5,1234.5);
    grad1.show( );
    return 0;
}