#include <iostream>
using namespace std;
class complex {
public:
	complex(float r=0,float i=0);                   // 构造函数
	complex operator+(const complex &op2) const;    //重载运算符 +
	complex operator-(const complex &op2) const;    //重载运算符 -
	complex operator*(const complex &op2) const;    //重载运算符 *
	void display() const;                           // 按数学写法输出复数
private:
	float real;
	float imag;
};
complex::complex(float r,float i){
    real = r;
    imag = i;
}
complex complex::operator+(const complex &op2) const{
    complex t;
    t.imag = this->imag + op2.imag;
    t.real = this->real + op2.real;
    return t;
}
complex complex::operator-(const complex &op2) const{
    complex t;
    t.imag = this->imag - op2.imag;
    t.real = this->real - op2.real;
    return t;
}
complex complex::operator*(const complex &op2) const{
    complex t;
    t.imag = this->imag * op2.real+this->real*op2.imag;
    t.real = this->real * op2.real-this->imag*op2.imag;
    return t;
}
void complex::display() const {
	if(real&&imag)
		if(imag==1||imag==-1)
			cout<<real<<(imag>0?"+":"-")<<"i"<<endl;
		else
			cout<<real<<(imag>0?"+":"")<<imag<<"i"<<endl;
	else if(real)
		cout<<real<<endl;
	else if (imag)
		if(imag==1||imag==-1)
			cout<<(imag>0?"":"-")<<"i"<<endl;
		else
			cout<<imag<<"i"<<endl;
	else
		cout<<0<<endl;
}

int main() {
	double real,imag;
	complex c,d,e;

	cin>>real>>imag;
	complex c1(real,imag);
	cin>>real>>imag;
	complex c2(real,imag);

	c=c1+c2;
	d=c1-c2;
	e=c1*c2;
	c.display() ;
	d.display() ;
	e.display();

	return 0;
}