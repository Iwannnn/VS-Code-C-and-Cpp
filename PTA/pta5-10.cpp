#include <iostream>
using namespace std;
class Car{
private:
    int m_nWheels;
public:
    void disp_welcomemsg(){
        cout << "Welcome to the car world!" << endl;
    }
    void set_wheels(int n){
        m_nWheels = n;
    }
    int get_wheels(){
        return m_nWheels;
    }
};
int main()
{
    int n;
    cin >> n;
    Car myfstcar, myseccar;    //定义类对象
    myfstcar.disp_welcomemsg();//访问成员函数，显示欢迎信息
    myfstcar.set_wheels(n);    //访问成员函数，设置车轮数量
    myseccar.set_wheels(n+4);  //访问成员函数，设置车轮数量
    //访问成员函数，显示车轮数量
    cout << "my first car wheels num = " << myfstcar.get_wheels() << endl;
    cout << "my second car wheels num = " << myseccar.get_wheels() << endl;

    return 0;
}