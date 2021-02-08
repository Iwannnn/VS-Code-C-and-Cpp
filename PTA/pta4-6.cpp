#include <iostream>
using namespace std;
class Car{
public:
    void disp_welcomemsg();
    int get_wheels();
    void set_wheels(int);
private:
    int m_nWheels;
};
void Car::disp_welcomemsg(){
    cout << "Welcome to the car world!" << endl;
}
int Car::get_wheels(){
    return m_nWheels;
}
void Car::set_wheels(int n){
    m_nWheels = n;
}
int main()
{
    int n;
    cin >> n;
    Car mycar;     //定义类对象mycar
    mycar.disp_welcomemsg();  //访问成员函数，显示欢迎信息
    mycar.set_wheels(n);      //访问成员函数，设置车轮数量
    //访问成员函数，显示车轮数量
    cout << "wheels = " << mycar.get_wheels() << endl;
    return 0;
}