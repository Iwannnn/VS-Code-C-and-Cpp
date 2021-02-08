#include <stdio.h>
#include <string.h>
int main(void){
    int n;
    while (~scanf("%d", &n)) {
        getchar();
        char a[100][1000];
        int max = 0;
        for (int i = 0; i < n; i++){
          scanf("%s", a[i]);
          getchar();
        }
        for (int i = 1; i < n; i++){
            if (strlen(a[max])<strlen(a[i])){
                max = i;
            }
        }
    printf("%s\n", a[max]);
    }
    return 0;
}