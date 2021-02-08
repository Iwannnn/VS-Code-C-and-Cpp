#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    double s;
    char x[10000],m[100];
    int count=0,sum=0,l,boy=0,girl=0;
    for(i=0; i<n; i++){
        scanf("%s",&x[i]);
        if(x[i]=='i'){
            count++;
            scanf("%s",m);
            l = strlen(m);
            if((m[l-2]-'0')%2==1){
                boy++;
            }else{
                girl++;
            }
        }else{
            scanf("%lf",&s);
            sum+=s;
        }
    }
    printf("%d %d %d\n",boy,girl,sum/(n-count));
    system("pause");
    return 0;
}