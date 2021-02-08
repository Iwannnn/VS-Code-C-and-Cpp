#include <stdlib.h>
#include <stdio.h>
struct road{
    int g[1300], money,all,now;
};
int main(int argc,char **argv){
    int n, m, q, i, j ,k,l,o;
    scanf("%d%d%d", &n, &m, &q);
    struct road *p =(struct road*)malloc(sizeof(struct road)*n);
    for (i = 0; i < n;i++)
        for (j = 0; j < m;j++){
            (p + i) ->now = 0;
            scanf("%d", &(p + i)->g[j]);
        }
    for (i = 0; i < n;i++)
        scanf("%d", &(p + i)->money);
    for (i = 0; i < n;i++){
        o = i;
        (p + i)->all = (p + i)->money;
        for (j = 0; j < m;j++){
            for (k = 0; k < n;k++){
                (p + k)->now += (p + k)->g[k];
            }
            for (k = 1; k <= q; k++){
                for (l = o; l <= k; l++){
                    (p + i)->all += (p + (l >= n ? l : l - n))->now;
                    (p + (l >= n ? l : l - n))->now = 0;
                }
            }
        }
    }
    free(p);
    system("pause");
}