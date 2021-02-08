#include <iostream>
using namespace std;
class Animal{
public:
    Animal(){
        cout << "Animal" << endl;
    }
};
class Dog:public Animal{
public:
    Dog(){
        cout << "Dog" << endl;
    }
};
int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n;i++){
        Animal a;
        Dog d;
    }
}