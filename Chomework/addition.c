#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int AddTest(int a, int b);
void print(int flag);
int main(void){
    int error, score, i, a, b, answer,k;
    srand(time(NULL));
    error = 0;
    score = 0;
    for (i=0; i<10; i++){ 
        a = rand()%10 + 1;
        b = rand()%10 + 1;
        for (k = 0; k<3;k++){
            answer = AddTest(a, b);
            print(answer);
            if (answer == 1&&k==0){
                score = score + 10;
                break;
            }else if(answer == 1){
                break;
            }
            else
                error++;
        }           
    }
    printf("%d", score);
    system("pause");
}
int  AddTest(int a, int b){
	int  answer;
	printf("%d+%d=", a, b);
	scanf("%d", &answer);
	if (a+b == answer) 
		return 1;
	else 
		return 0;
}
void print(int flag){
    if(flag)
        printf("Right!\n");
    else
        printf("Not correct!\n");
}