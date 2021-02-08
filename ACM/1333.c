#include <stdio.h>
void hanoi(int n, char from, char help, char to){
    if(n==1){
        printf("%d %c %c\n", n, from, to);
    }else{
        hanoi(n - 1, from, to, help);
        printf("%d %c %c\n", n, from, to);
        hanoi(n - 1, help, from, to);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    hanoi(n, 'A', 'C', 'B');
    return 0;
}