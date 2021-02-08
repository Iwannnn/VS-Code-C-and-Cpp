#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, v0, vi, vo;
    double c0, ci, co;
    char ch;
    stack<int> v;
    stack<double> c;
    cin >> v0 >> c0 >> n;
    vo = v0;
    co = c0;
    for (int i = 1; i <= n;i++){
        cin >> ch;
        if(ch=='Z'){
            if(v.empty()==1){
                printf("%d %.5lf\n",v0,c0);
                continue;
            }else{
                vi = v.top();
                ci = c.top();
                v.pop();
                c.pop();
                co = (vo * co - vi * ci) / (vo - vi);
                vo -= vi;
                printf("%d %.5lf\n",vo, co);
            }
        }else if(ch=='P'){
            cin >> vi >> ci;
            v.push(vi);
            c.push(ci);
            co = (vo * co + vi * ci) / (vo+vi);
            vo += vi;
            printf("%d %.5lf\n", vo, co);
        }
    }
    return 0;
}