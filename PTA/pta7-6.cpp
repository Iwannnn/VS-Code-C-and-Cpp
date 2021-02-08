#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Person{
protected:
    string name;
    int age;
public:
    Person(){}; 
    Person (string p_name, int p_age){
        name = p_name;
        age = p_age;
    }
    void display () {cout<<name<<":"<<age<<endl;}
};
class Student:public Person{
protected:
    int ID;//学号
    float cpp_score;//cpp上机成绩
    float cpp_count;//cpp上机考勤
    float cpp_grade;//cpp总评成绩
     //总评成绩计算规则：cpp_grade = cpp_score * 0.9 + cpp_count * 2;
public:
    Student(){};
    Student(string p_name, int p_ID, int p_age, float p_score, float p_count):Person(p_name,p_age){
        ID = p_ID;
        cpp_score = p_score;
        cpp_count = p_count;
        cpp_grade = cpp_score * 0.9 + cpp_count * 2;
    }
    void print(){
        cout<<ID<<" "<<name<<" "<<fixed<<setprecision(1)<<cpp_grade<<endl; 
    }
};
int main(){
    string name;
    int id, age;
    float cpp_score, cpp_count;
    Student st;
    cin >> name;
    while(name[0]!='0'){
        cin >> id >> age >> cpp_score >> cpp_count;
        Student stu(name, id, age, cpp_score, cpp_count);
        stu.print();
        cin >> name;
    }
}