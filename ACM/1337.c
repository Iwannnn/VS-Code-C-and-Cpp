#include <stdio.h>
int main(){
    int n,pu[1000];
    pu[1] = 1;
    pu[2] = 2;
    pu[3] = 4;
    scanf("%d", &n);
    for (int i = 4; i <= n;i++)
        pu[i] = pu[i - 1] + pu[i - 2] + pu[i - 3];
    printf("%d\n", pu[n]);
}