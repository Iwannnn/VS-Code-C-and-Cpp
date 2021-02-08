 #include <stdio.h>
 int main()
 {
    int m,n,i=0,j;
    scanf("%d%d",&n,&m);
    if(m%2==1 || m<2*n)
    {
        printf("No\n");
        return 0;
    }
    i=(4*n-m)/2;
    j=n-i;
    if(i>=0 && j>=0)
    {
        printf("%d %d\n",i,j);
    }
    else
    {
        printf("No\n");
    }    
    return 0;
}