#include <stdio.h>
#include <math.h>
struct boy{
    int x, y;
};
struct girl{
    int a, b;
};
int main(){
    int n, m,i,j,min,s;
    while(~scanf("%d", &n)){
    struct boy b[n];
    for (i = 0; i<n;i++)
        scanf("%d%d", &b[i].x, &b[i].y);
    scanf("%d", &m);
    struct girl g[m];
    for (i = 0; i<m;i++)
        scanf("%d%d", &g[i].a, &g[i].b);
    for (i = 0; i < n;i++){
        for (j = 0; j < m;j++){
            s = abs(b[i].x - g[j].a) + abs(b[i].y - g[j].b);
            if(j==0){
                min = s;
            }else if(min>s){
                min = s;
            }
        }
        printf("%d\n", min);
    }
    }
}