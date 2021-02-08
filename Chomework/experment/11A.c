#include <stdio.h>
void hanio(int n, char a, char b, char c){  
    if(n == 1) 
        printf("%c->%c\n", a, b);
    else{
       hanio(n-1, a, c, b);
       printf("%c->%c\n", a, b);
       hanio(n-1, c, b, a);
    }
}
int main(void)
{    
    int n;
    while(~scanf("%d", &n)){
        hanio(n, 'a', 'c', 'b');
    } 
    return 0;
}
