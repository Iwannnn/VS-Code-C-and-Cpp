#include <stdlib.h>
#include <stdio.h>
struct s{
    int num,fenshu, shili;
}temp;
void paixv(int m, struct s *p);
int main(int argc,char **argv){
    int i,j,n,r,q,num=1;
    scanf("%d%d%d", &n, &r, &q);
    struct s *p = (struct s *)malloc(sizeof(struct s) * 2 * n),*t=p;
    for (p=t; p <p+ 2 * n;p++){
        p->num = num++;
        scanf("%d", &p->fenshu);
    }
    for (p = t; p < p + 2 * n;p++)
        scanf("%d", &p->shili);
    for (i = 1; i <= r;i++){
        paixv(2 * n, t);
        for (p = t; p<p+ 2*n;p+=2){
            if(p->shili>(p+1)->shili)p->fenshu++;
            else(p + 1)->fenshu++;
        }       
    }
    paixv(2 * n, t);
}
void paixv(int m, struct s *p){
    int i,j;
    for (i = 0; i < m;i++)
        for (j = m - 1; j >= i;j--)
            if((p+j)->fenshu>(p+j-1)->fenshu){
                temp = *(p + j);
                *(p + j) = *(p + j - 1);
                *(p + j - 1) = temp;
            }
}
