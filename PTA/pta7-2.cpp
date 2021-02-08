#include <iostream>
#include <string>
using namespace std;
class Teacher{
public:                                 
    Teacher(string nam,int a,string t){
        name=nam;
        age=a;
        title=t;
        }
    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"age"<<age<<endl;
        cout<<"title:"<<title<<endl;
    }
protected:                          
    string name;
    int age;
    string title;                      
};
class Student{
public:
    Student(string nam,char s,float sco){
        name1=nam;
        sex=s;
        score=sco;
    }                        
    void display1(){
        cout<<"name:"<<name1<<endl;
        cout<<"sex:"<<sex<<endl;
        cout<<"score:"<<score<<endl;
    }
protected:                             
   string name1;
   char sex;
   float score;                           
};
class Graduate:public Teacher,public Student{
public:
    Graduate(string nam,int a,char s,string t,float sco,float w):Teacher(nam, a, t),Student(nam, s, sco){
        wages = w;
    }
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
    Graduate grad1("Wang-li",24,'f',"assistant",89.5,1234.5);
    grad1.show( );
    return 0;
}