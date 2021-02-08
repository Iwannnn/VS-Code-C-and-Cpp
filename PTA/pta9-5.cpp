#include<iostream>
using namespace std;

class Clock {
	public:
		Clock(int NewH=0, int NewM=0, int NewS=0);
		void ShowTime();
		friend Clock operator++(Clock& op);         //前置单目运算符重载
		friend Clock operator++(Clock& op,int);     //后置单目运算符重载
	private:
		int Hour, Minute, Second;
};
Clock operator++(Clock& op){
    op.Second++;
    if(op.Second==60){
        op.Minute++;
        op.Second = 0;
    }
    if(op.Minute==60){
        op.Hour++;
        op.Minute = 0;
    }
    if(op.Hour==24) op.Hour = 0;
    return op;
}
Clock operator++(Clock& op,int){
    Clock temp = op;
    op.Second++;
    if(op.Second==60){
        op.Minute++;
        op.Second = 0;
    }
    if(op.Minute==60){
        op.Hour++;
        op.Minute = 0;
    }
    if(op.Hour==24) op.Hour = 0;
    return temp;
}
Clock::Clock(int NewH, int NewM, int NewS) {
	Hour=NewH;
	Minute=NewM;
	Second=NewS;
}
void Clock::ShowTime() {
	cout<<Hour<<":"<<Minute<<":"<<Second<<endl;
}


int main() {
	int h, m, s;
	cin>>h>>m>>s;
	Clock a(h,m,s);

	(++a).ShowTime();
	(a++).ShowTime();
	a.ShowTime();

	return 0;
}