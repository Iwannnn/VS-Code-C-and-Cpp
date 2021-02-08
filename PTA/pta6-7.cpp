#include<iostream>
using namespace std;
enum COLOR{ WHITE, RED, BROWN, BLACK, KHAKI };
class Mammal{
public:
	//constructors
    Mammal() { itsAge = 0;itsWeight = 0; }
    Mammal(int age) { itsAge = age; }
    Mammal(int age,int weight){ itsAge = age;itsWeight = weight;}	
    int GetAge() const { return itsAge; }
    void SetAge(int age) { itsAge=age; }
    int GetWeight() const{return  itsWeight;}
    void SetWeight(int weight) { itsWeight = weight; }
    void Speak() const { cout << "Mammal is speaking..." << endl; }
    void Sleep() const { cout << "Mammal is sleeping..." << endl; }
protected:
	int itsAge;
	int itsWeight;
};
class Dog:public Mammal{
public:
    Dog():Mammal(){}
    Dog(int age):Mammal(age){}
    Dog(int age, int weight):Mammal(age,weight){}
    Dog(int age, COLOR color):Mammal(age){
        itscolor = color;
    }
    Dog(int age, int weight, COLOR color):Mammal(age,weight){
        itscolor = color;
    }
    void WagTail() { cout << "The dog is wagging its tail..." << endl; }
private:
    COLOR itscolor;
};
int main()
{
	Dog Fido;
	Dog Rover(5);
	Dog Buster(6, 8);
	Dog Yorkie(3, RED);
	Dog Dobbie(4, 20, KHAKI);
	Fido.Speak();
	Rover.WagTail();
	cout << "Yorkie is " << Yorkie.GetAge() << " years old." << endl;
	cout << "Dobbie	weighs " << Dobbie.GetWeight() << " pounds." << endl;   
	return 0;
}