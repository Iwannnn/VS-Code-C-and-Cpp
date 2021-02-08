#include <stdio.h>
int n, k, t=0, a[1234];
void dfs(int nowindex, int sum){
    if(nowindex>n)
        return;
    if(sum+a[nowindex]==k)
        t++;
    dfs(nowindex + 1, sum + a[nowindex]);
    dfs(nowindex + 1, sum);
}
int main(){
    while(scanf("%d%d",&n,&k)!=EOF){
        int i,sum=0;
        for (i = 1; i <=n;i++){
            scanf("%d", &a[i]);
            sum += a[i];
        }
        t = 0;
        dfs(1, 0);
        printf("%d\n", t);
    }
}