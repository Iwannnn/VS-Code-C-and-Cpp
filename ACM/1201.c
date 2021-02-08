#include <stdio.h>
long int p[30001];
void jh(int x,int y)
{
    int m=p[x];
    p[x]=p[y];
    p[y]=m;
}
int p1(int ks,int js)
{
    int max=p[ks];
    int i1=ks;
    int j1=js+1;
    while(1)
    {
        while(p[++i1]>max&&i1<js);
        while(p[--j1]<max);
        if(i1>=j1)break;
        jh(i1,j1);
    }
    jh(ks,j1);
    return j1;
}
void q(int ks,int js)
{
    int r;
    if(ks<js)
    {
        r=p1(ks,js);
        q(ks,r-1);
        q(r+1,js);
    }
}
int main()
{
    long int n,w,i,j,sum;
    while(scanf("%ld%ld",&w,&n)!=EOF){
        sum=0;
        for(i=0;i<n;i++){
            scanf("%ld",&p[i]);
            if(w-p[i]<5){i--;n--;sum++;}
        }
        q(0,n-1);
        for (i = 0; i < n;i++)
            printf("%ld ", p[i]);
        for(i=0;i<n;i++)
        if((p[i]+p[n-1])>w&&i!=n-1)
            sum++;
        else
            sum++,n--;
        for (i = 0; i < n;i++)
            printf("%ld ", p[i]);
        printf("%ld\n", sum);
    }
    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
int main() {
	int w, n;
	scanf("%d %d", &w, &n);
	int a[30500],temp;
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
    for (int i = 0; i < n;i++){
        for (int j = n - 1; j > i;j--){
            if(a[j]<a[j-1]){
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
    int i = 0, j = n - 1, cnt = 0;
	while(i <= j) {
		if(a[i] + a[j] <= w) {
			i++;
		}
		cnt++;
		j--;
	}
    printf("%d\n", cnt);
    system("pause");
    return 0;
}*/