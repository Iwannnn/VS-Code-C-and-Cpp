#include<iostream>
using namespace std;
class CPU{
    int rank,frequency,voltage;
public:
    CPU(){
        rank = 1;
        frequency = 2;
        voltage = 100;
        cout << "create a CPU!" << endl;
    }
    CPU(int r,int f,int v){
        rank = r;
        frequency = f;
        voltage = v;
        cout << "create a CPU!" << endl;
    }
    CPU(CPU& p){
        rank = p.rank;
        frequency = p.frequency;
        voltage = p.voltage;
        cout << "create a CPU by copy!" << endl;
    }
    ~CPU(){
        cout << "desturct a CPU!" << endl;
    }
    void showcpu(){
        cout << "cpu parameter:" << endl
             << "rank:" << rank << endl
             << "frequency:" << frequency << endl
             << "voltage:" << voltage << endl;
    }
};
class RAM{
    int volumn;
public:
    RAM(){
        volumn = 1;
        cout << "create a RAM!" << endl;
    }
    RAM(int v){
        volumn = v;
        cout << "create a RAM!" << endl;
    }
    RAM(RAM& p){
        volumn = p.volumn;
        cout << "create a RAM by copy!" << endl;
    }
    ~RAM(){
        cout << "desturct a RAM!" << endl;
    }
    void showram(){
        cout << "ram parameter:" << endl
             << "volumn:" << volumn << " GB" << endl;
    }
};
class CDROM{
    int speed;
public:
    CDROM(){
        speed = 16;
        cout << "create a CDROM!" << endl;
    }
    CDROM(int s){
        speed = s;
        cout << "create a CDROM!" << endl;
    }
    CDROM(CDROM& p){
        speed = p.speed;
        cout << "create a CDROM by copy!" << endl;
    }
    ~CDROM(){
        cout << "destruct a CDROM!" << endl;
    }
    void showcdrom(){
        cout << "cdrom parameter:" << endl
             << "speed:" << speed << endl;
    }
};
class COMPUTER
{
    CPU cpu;
    RAM ram;
    CDROM cdrom;
public:
    COMPUTER(){
        cout << "no para to create a COMPUTER!" << endl;
    }
    COMPUTER(int a,double b,int c,int d,int e):cpu(a,b,c),ram(d),cdrom(e){
        cout << "create a COMPUTER with para!" << endl;
    }
    COMPUTER(COMPUTER& p):cpu(p.cpu),ram(p.ram),cdrom(p.cdrom){
        cout << "create a COMPUTER by copy!" << endl;
    }
    ~COMPUTER(){
        cout << "destruct a COMPUTER!" << endl;
    }
    void showinfo(){
        cpu.showcpu();
        ram.showram();
        cdrom.showcdrom();
    }
};
int main(){
	COMPUTER cpt1(6,4.0,200,60,32);  //测试带参数构造
	cout<<"cpt1's parameter:"<<endl;
	cpt1.showinfo();
	cout<<"------------------------------"<<endl;
	COMPUTER cpt2; //测试不带参数构造
	cout<<"cpt2's parameter:"<<endl;
	cpt2.showinfo();
	cout<<"------------------------------"<<endl;
    COMPUTER cpt3(cpt1); //测试复制构造
	cout<<"cpt3's parameter:"<<endl;
	cpt3.showinfo();
	cout<<"------------------------------"<<endl;
    return 0;
}

