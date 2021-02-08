#include<iostream>
#include<numeric>
#include<string>
using namespace std;
class Student{
protected:
    string name;
    string num;
public:
    static double prize;
    Student(string nu,string nam){
        num = nu;
        name = nam;
    }
    virtual double average() = 0;
    virtual void display() = 0;
};
double Student::prize = 0;
class GroupA:public Student{
private:
    int s1, s2;
public:
    GroupA(string nu,string nam,int ss1,int ss2):Student(nu, nam){
        s1 = ss1;
        s2 = ss2;
        if(average()>Student::prize){
            Student::prize = average();
        }
    }
    virtual double average(){
        return (s1 + s2) / 2;
    }
    virtual void display(){
        if(average()==Student::prize){
            cout << num << " " << name << endl;
        }
    }
};
class GroupB:public Student{
private:
    int s1, s2;
    char gs;
public:
    GroupB(string nu,string nam,int ss1,int ss2,char gss3):Student(nu, nam){
        s1 = ss1;
        s2 = ss2;
        gs = gss3;
        if(average()>Student::prize)
            Student::prize = average();
    }
    virtual double average(){
        return (s1 + s2) / 2;
    }
    virtual void display(){
        if(average()==Student::prize){
            cout << num << " " << name << endl;
        }else if(average()>=Student::prize*0.7&&gs=='A'){
            cout << num << " " << name << endl;
        }
    }
};
class GroupC:public Student{
private:
    int s1,s2,s3,s4,s5;
public:
    GroupC(string nu,string nam,int ss1,int ss2,int ss3,int ss4,int ss5):Student(nu, nam){
        s1 = ss1;
        s2 = ss2;
        s3 = ss3;
        s4 = ss4;
        s5 = ss5;
    }
    virtual double average(){
        return (s1+s2+s3+s4+s5)/5;
    }
    virtual void display(){
        if(average()>=Student::prize*0.9){
            cout << num << " " << name << endl;
        }
    }
};
int main()
{
    const int Size=50;
    string num, name;
    int i,ty,s1,s2,s3,s4,s5;
    char gs;
    Student *pS[Size];
    int count=0;
    for (i = 0; i < Size;i++){
        cin >> ty;
        if(ty==0)
            break;
        cin >> num >> name >> s1 >> s2;
        switch(ty){
            case 1:pS[count++]=new GroupA(num, name, s1, s2);
                break;
            case 2:cin>>gs; pS[count++]=new GroupB(num, name, s1,s2, gs);
                break;
            case 3:cin>>s3>>s4>>s5; pS[count++]=new GroupC(num, name, s1,s2,s3,s4,s5);
                break; 
        }
    }
    for (i = 0; i < count;i++){
        pS[i]->display();
        delete pS[i];
    }
    return 0;
}