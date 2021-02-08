 #include <stdio.h>
 int main()
 {
    int a,b,c,p;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
    {
        p=a;
        a=b;
        b=p;
    }
    if(a<c)
    {
        p=a;
        a=c;
        c=p;  
    }
    if(b<c)
    {
        p=c;
        c=b;
        b=p;
    }
    printf("%d %d %d\n",a,b,c);  
    return 0;
}s