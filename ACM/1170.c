#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct stu{
    char name[20];
    char sex[10];
    int year;
    float weight;
};
int main(void){
    struct stu a;
    char name[20], sex[10];
    int year;
    float weight;
    scanf("%s%s%d%f", name,sex,&year,&weight);
    strcpy( a.name,name );
    strcpy( a.sex,sex );
    a.year = year;
    a.weight = weight;
    printf("%s %s %d %.1f\n", a.name, a.sex, a.year, a.weight);
    system("pause");
}