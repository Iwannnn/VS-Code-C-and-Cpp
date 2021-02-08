#include<stdio.h>
#include<string.h>
int main(){
    int n,p,i;
    char a[200];
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++){
        scanf("%s",a);
        p=strlen(a);
        if((a[p-1]=='s')||(a[p-1]=='x')||(a[p-2]=='c'&&a[p-1]=='h')||(a[p-2]=='s'&&a[p-1]=='h')||(a[p-1]=='y')||(a[p-1]=='o')){
            printf("%ses\n",a);
        }else{
        printf("%ss\n",a);
        }
    }
return 0;
}
