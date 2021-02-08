#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct stu{
    int month, day;
    char name[20];
} a[200],temp;
int l[181];
int dic(int i, int j){
    int k;
    for (k = 0; k < strlen(a[i].name); k++){
        if (a[i].name[k] > a[j].name[k]){
            return 1;
        }
        else if (a[i].name[k] < a[j].name[k]){
            return 0;
        }
    }
    return 0;
}
void change(i, j){
    struct stu temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
int main(void){
    int n, i, j;
    while(~scanf("%d", &n)){
        int l[n],count,key=0;
        for (i = 0; i < n; i++){
            scanf("%s%d%d", a[i].name, &a[i].month, &a[i].day);
            l[i] = strlen(a[i].name);
        }
        for (i=0; i < n-1 ; i++){
            for (j = i+1; j <n; j++){
                if (a[i].month > a[j].month){
                    change(i, j);
                }else if (a[i].month == a[j].month){
                    if (a[i].day > a[j].day){
                        change(i, j);
                    }else if (a[i].day == a[j].day){
                        if (strlen(a[i].name) > strlen(a[j].name)){
                            change(i, j);
                        }else if (strlen(a[i].name) == strlen(a[j].name)){
                            if (dic(i,j)==1){
                                change(i, j);
                            }
                        }
                    }
                }
            }
        }
        for (i = 0; i < n;){
            count = 0;
            for (j = i + 1; j < n; j++){
                if (a[i].month == a[j].month && a[i].day == a[j].day){
                    key++;
                    count++;
                }else{
                    break;
                }
            }
            if (count){
                printf("%d %d ", a[i].month, a[i].day);
                for (; i < j - 1; i++){
                   printf("%s ", a[i].name);
                }   
                printf("%s\n", a[i++].name);
            }else{
                i++;
            }
        }
        if(key==0){
        printf("None\n");
        }
    }
    return 0;
}