#include <iostream>
#include <string>
using namespace std;
class Animal{
protected:
    int age;
public:
    Animal(int a){
        age = a;
    }
    int getAge(){
        return age;
    }
};
class Dog:public Animal{
protected:
    string color;
public:
    Dog(int a,string c):Animal(a){
        color = c;
    }
    void showInfor(){
        cout << "age:" << getAge() << endl
             << "color:" << color << endl;
    }
};
int main(){
	Animal ani(5);
	cout<<"age of ani:"<<ani.getAge()<<endl;
	Dog dog(5,"black");
	cout<<"infor of dog:"<<endl;
	dog.showInfor();
}