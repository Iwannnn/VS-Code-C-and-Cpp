#include <stdio.h>
#include <stdlib.h>
void sort(int *a, int n){
    int i,j,mini,temp;
    for (i = 0; i < n-1;i++){
        mini = i;
        for (j = i + 1; j < n;j++){
            if(a[j]<a[mini])
                mini = j;
        }
        temp = a[i];
        a[i] = a[mini];
        a[mini] = temp;
    }
}
int main(){
    int x[10500],y[10500],midx,midy;
    int n,ans=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d%d", x + i, y + i);
    sort(x, n);
    sort(y, n);
    for (int i = 0; i < n; i++)
        x[i] -= i;
    sort(x, n);
    midx = x[(n - 1) / 2];
    midy = y[(n - 1) / 2];
    for (int i = 0; i < n; i++){
        ans += abs(x[i] - midx);
        ans += abs(y[i] - midy);
    }
    printf("%d",ans);
    return 0;
}