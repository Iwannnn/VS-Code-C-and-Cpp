#include <stdio.h>
int main(){
    int n,a[150];
    while(~scanf("%d",&n)){
        int i,j,maxi,t,ans;
        for (i = 1; i <= n;i++)
            scanf("%d", &a[i]);
        scanf("%d", &ans);
        for (i = 1; i < n;i++){
            maxi = i;
            for (j = i + 1; j <= n;j++)
                maxi = a[maxi] > a[j] ? maxi : j;
            t = a[i];
            a[i] = a[maxi];
            a[maxi] = t;
        }
        for (i = 1; i <= n;i++){
            if(a[i]==ans){
                printf("%d\n", i);
                break;
            }
        }
    }
}