#include <stdio.h>
int main(){
    int t,i,diban[100],n;
    diban[1] = 1;
    diban[2] = 2;
    diban[3] = 4;
    for (i = 4; i <= 50;i++){
        diban[i] = diban[i - 1] + diban[i - 2] + diban[i - 3];
    }
    while(~scanf("%d", &t)){
    while(t--){
        scanf("%d", &n);
        printf("%d\n", diban[n]);
    }
}
}