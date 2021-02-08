#include <stdio.h>
struct stu{
    char name[20];
    int height, number;
};
int main(void){
    int n,i;
    scanf("%d", &n);
    struct stu a[101];
    int min = 0;
    for (i = 0; i < n; i++){
        scanf("%s%d%d", a[i].name, &a[i].height, &a[i].number);
        if (a[min].height < a[i].height || ((a[min].height == a[i].height) && (a[min].number > a[i].number))){
            min = i;
        }
    }
    printf("%s %d %d\n", a[min].name, a[min].height, a[min].number);
}