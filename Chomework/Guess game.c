#include  <stdlib.h>
#include  <stdio.h>
#include  <time.h>
int main(void) { 
	int  magic,guess,counter;
    char f = 'y';
    srand(time(NULL));
    while(f=='y'||f=='Y'){
        magic = rand() % 100 + 1;
        counter = 0;
        do{
            printf("Please guess a magic number:");
            scanf("%d", &guess);
            counter++;
            if (guess > magic)
                printf("Wrong! Too high!\n");
            else if (guess < magic)
                printf("Wrong! Too low!\n");
	    }while (guess != magic&&counter<=10);
        if(counter<=10){
            printf("Right!\n");
            printf("counter = %d \n", counter);
        }else{
            printf("Sorry your chances have been exhausted\n.");
        }
        printf("Do you want to continue(Y/N or y/n)?\n");
        getchar();
        f = getchar();
    }
    printf("Thank you for your coming!");
    system("pause");
}