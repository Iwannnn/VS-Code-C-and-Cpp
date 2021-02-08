#include <stdio.h>
#include <stdlib.h>
#include <math.h>
# define DOUBLE_EPS 1e-15
int main() {
    double v1,v2,r;
    char op;
    char f='y';
    while(f=='y'||f=='Y'){
        printf("Type in an expression: ");
        scanf("%lf %c%lf",&v1,&op,&v2);
        switch (op) {
        case '+':
            r = v1 + v2;
            printf("%lf %c %lf = %lf\n",v1,op,v2,r);
            break;
        case '-':
            r = v1 - v2;
            printf("%lf %c %lf = %lf\n",v1,op,v2,r);
            break;
        case '*':
            r = v1 * v2;
            printf("%lf %c %lf = %lf\n",v1,op,v2,r);
            break;
        case '/':
            if (fabs(v2-0)<=DOUBLE_EPS) {
            printf("Unknown operator\n");
            } else {
                r = v1 / v2;
                printf("%lf %c %lf = %lf\n",v1,op,v2,r);
            }
                break;
            default:
            printf("Divisor can not be 0!\n\n");
            break;
        }
        printf("Do you want to continue(Y/N or y/n)?\n");
        getchar();
        f=getchar();
    }
    printf("Goode Bye!\n");
    system("pause");
    return 0;
}