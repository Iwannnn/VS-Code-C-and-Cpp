#include <stdio.h>
struct stu
{
    char name[20];
    char sex[10];
    int year;
    int month;
}a[110];
int main(){
    struct stu a[110],temp;
    int n,i,j;
    while(scanf("%d",&n)!=EOF){
        for(i=0;i<n;i++){
            scanf("%s%s%d%d",a[i].name,a[i].sex,&a[i].year,&a[i].month);
        }
        for(i=0;i<n;i++){
            for(j=0;j<n-i;j++){
                if(a[j].year<a[j+1].year||(a[j].year==a[j+1].year&&a[j].month<a[j+1].month)){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        for(i=1;i<=n;i++){
            printf("%s %s %d %d\n",a[i].name,a[i].sex,a[i].year,a[i].month);
        }
    }
    return 0;
}