#include<iostream>
using namespace std; 
class Vehicle { 
protected: 
	int wheels; 
	float weight; 
public: 
	Vehicle(int wheels,float weight); 
	int get_wheels(); 
	float get_weight(); 
	float wheel_load(); 
	void show(); 
};
Vehicle::Vehicle(int wheels,float weight){
    Vehicle::wheels = wheels;
    Vehicle::weight = weight;
}
int Vehicle::get_wheels(){
    return wheels;
}
float Vehicle::get_weight(){
    return weight;
} 
void Vehicle::show(){
    cout << "Type:Vehicle" << endl
         << "Wheel:" << get_wheels() << endl
         << "Weight:" << get_weight() << "kg" << endl;
}
class Car:public Vehicle{
protected:
    int passenger_load;
public:
    Car(int wheels,float weight,int passenger):Vehicle(wheels, weight){
        passenger_load = passenger;
    }
    int get_passenger_load(){
        return passenger_load;
    }
    void show(){
        cout << "Type:Car" << endl;
        Vehicle::show();
        cout << "Load:" << get_passenger_load() << " persons" << endl;
    }
};
int main () { 
	Vehicle v(4,1000);
	v.show(); 
	Car car1(4,2000,5);  
	car1.show (); 
	return 0;
}