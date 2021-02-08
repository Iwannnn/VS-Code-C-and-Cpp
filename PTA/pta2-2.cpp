#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    int repeat,i,h,m,s,n,t;
    char c1, c2;
    cin >> repeat;
    for (i = 1; i <= repeat;i++){
        cin >> h >> c1 >> m >> c2 >> s;
        cin >> n;
        s = s + n;
        if(s>59){
            t = s % 60;
            m += s/60;
            s = t;
        }
        if(m>59){
            t = m % 60;
            h += m / 60;
            m = t;
        }
        if(h>23){
            h=h%24;
        }
        printf("time: %d:%d:%d\n", h,m,s);
    }
}