#include <stdio.h>
struct time{
    int h, m, s;
};
int main(void){
    int n;
    while(~scanf("%d",&n)){
        struct time homework[n];
        int i,hour=0,min=0,second=0,temp=0;
        for (i = 0; i < n;i++){
            scanf("%d%d%d", &homework[i].h, &homework[i].m, &homework[i].s);
            hour += homework[i].h;
            min += homework[i].m;
            second += homework[i].s;
        }
        temp = second / 60;
        second  %= 60;
        min += temp;
        temp = min / 60;
        min %= 60;
        hour += temp;
        printf("%dhour %dminute %dsecond\n", hour, min, second);
    }
}