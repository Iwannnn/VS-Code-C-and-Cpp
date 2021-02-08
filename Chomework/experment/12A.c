#include <stdio.h>
int f(int s, int y);
int main(){
    int t;
    scanf("%d", &t);
    while(t>0){
        int s, y;
        scanf("%d%d", &s, &y);
        printf("%d\n", f(s, y));
        t--;
    }
}
int f(int s, int y){
    int geshu;
    if(s==0)
        geshu = y + 1;
    else
        geshu = 2 * f(s - 1, y);
    return geshu;
}