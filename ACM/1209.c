#include <stdio.h>
struct a{
    int number, score;
};
int main(int agrc,char **argv){
    int n, m, i,j,k;
    scanf("%d%d", &n, &m);
    struct a a[n],temp;
    for (i = 0; i < n;i++)
        scanf("%d%d", &a[i].number, &a[i].score);
    for (i = 0; i < n;i++){
        for (j = n - 1; j > i;j--){
            if(a[j].score>a[j-1].score){
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }else if(a[j].score==a[j-1].score){
                if(a[j].number<a[j-1].number){
                    temp = a[j];
                    a[j] = a[j - 1];
                    a[j - 1] = temp;
                }
            }
        }
    }
    k = m * 1.5 ;
    for (i = k; i < n;i++)
        if(a[i].score == a[k-1].score)
            k++;      
    printf("%d %d\n", a[k-1].score, k);
    for (i = 0; i<k;i++)
        printf("%d %d\n", a[i].number, a[i].score);
    return 0;
}