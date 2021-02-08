#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct daodan{
    int x, y;
}*a,*b;
typedef struct daodan xy;
double r(xy *p, xy*q);
int main(int argc,char **argv){
    int n;
    double R, ra[109999],rb[109999];
    scanf("%d%d%d%d%d", &a->x, &a->y, &b->x, &b->y,&n);
    xy*p = (xy*)malloc(sizeof(xy) * n),*t=p;
    for (p = t; p <= p + n;p++)
        scanf("%d%d", &p->x, &p->y);
    R = r(a, b);
    
}
double r(xy *p, xy*q){
    int dx, dy;
    dx = p->x - q->x;
    dy = p->y - q->y;
    return sqrt(dx * dx + dy * dy);
}