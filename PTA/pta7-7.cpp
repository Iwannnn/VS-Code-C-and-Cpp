#include <iostream>
using namespace std;
class polygon{
protected:
   int number;//边数，最多不超过100条边
private:
   int side_length[100];//边长数组
public:
    void setside(int i,int k){//构造函数根据需要重载
        side_length[i]=k;
        number=i;
    }
    int perimeter(){//计算多边形边长
        int sum = 0;
        for (int i = 1; i <=number;i++){
            sum += side_length[i];
        }
        return sum;
    }
    void display(){//输出多边形边数和周长
        cout << number << " " << perimeter() << endl;
    }
};
class rectangle:public polygon{
protected:
    int height;
    int width;
public:
    rectangle(int h,int w){
        number = 4;
        height = h;
        width = w;
    }
    int perimeter(){
        return (height+width)*2;
    }
    void display(){
        cout << number << " " << perimeter() << endl;
    }
};
class equal_polygon:polygon{
protected:
    int side_len;
public:
    equal_polygon(){};
    equal_polygon(int num,int len){
        number = num;
        side_len = len;
    }
    int perimeter(){
        return number * side_len;
    }
    void display(){
        cout << number << " " << perimeter() << endl;
    }
};
int main(){
    int n, m, flag;
    cin >> n;
    while(n--){
        cin >> flag;
        if(flag==0){
            int t = 1,f;
            polygon p;
            while(cin>>f){
                if(f==-1)
                    break;
                p.setside(t, f);
                t++;
            }
            p.display();
        }else if(flag==1){
            int h, w;
            cin >> h >> w;
            rectangle r(h, w);
            r.display();
        }else if(flag==2){
            int s;
            cin >> m>>s;
            equal_polygon eq(m, s);
            eq.display();
        }
    }
}