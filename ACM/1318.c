#include <stdio.h>
int main(){
    int n,i,j,k,l,t,mini;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n;i++)
        scanf("%d", &a[i]);
    scanf("%d", &k);
    for (i = 0; i < n;i++){
        mini = i;
        for (j = i; j < n; j++){
            if(a[j]<a[mini]){
                mini = j;
            }
        }
        t = a[i];
        a[i] = a[mini];
        a[mini] = t;
    }
    while (k--){
        scanf("%d", &l);
        printf("%d\n", a[l - 1]);
    }
}