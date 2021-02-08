#include <stdio.h>
#include <math.h>
struct chuangkou{
    int x1,x2,y1,y2;
};
int main(void){
    struct chuangkou a,b,c;
    while(~scanf("%d%d%d%d%d%d%d%d",&a.x1,&a.y1,&a.x2,&a.y2,&b.x1,&b.y1,&b.x2,&b.y2)){
        if(a.x1>b.x1) c.x1 = a.x1;
        else c.x1 = b.x1;
        if(a.x2<b.x2) c.x2 = a.x2;
        else c.x2 = b.x2;
        if(a.y1>b.y1) c.y1 = a.y1;
        else c.y1 = b.y1;
        if(a.y2<b.y2) c.y2 = a.y2;
        else c.y2 = b.y2;
        if(c.y2<=c.y1||c.x2<=c.x1){
            printf("0\n");
        }else{
            printf("%d\n", (c.y2 - c.y1) * (c.x2 - c.x1));
        }
    }
}