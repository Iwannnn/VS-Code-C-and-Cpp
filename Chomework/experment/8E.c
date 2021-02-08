#include <stdio.h>
void swap(float *p1, float *p2);
int main(int argc,char *argv[]){
    float a[5];
    while(~scanf("%f%f%f%f%f",&a[0],&a[1],&a[2],&a[3],&a[4])){
        int i, j;
        float *p=NULL;
        p = a;
        for (i = 0; i < 5;i++){
            for (j = 4; j > i;j--){
                if(*(p + j)<*(p + j - 1)){
                    swap((p + j), (p + j - 1));
                }
            }
        }
            printf("%.1f %.1f %.1f %.1f %.1f\n", a[0], a[1], a[2], a[3], a[4]);
    }
}
void swap(float *p1, float *p2){
    float t;
    t = *p1;
    *p1 = *p2;
    *p2 = t;
}