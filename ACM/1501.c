#include <stdio.h>
#include <string.h>
#define STACK_SIZE 260 //栈大小
#define TOP_OF_STACK -1//栈顶位置
int top = -1;  //栈顶位置
void stack_push(char *stack, char value);
void stack_pop(char *stack);
char stack_top(char *stack,int top);
int stack_is_empty(int top);
int stack_is_full(int top);
//入栈
void stack_push(char *stack, char value){
    top++;
    stack[top] = value;
}
//出栈
void stack_pop(char *stack){
    top--;
}
char stack_top(char *stack,int top){
    return stack[top];
}
int main() {
    char stack[260];
    char str[260];
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len;i++){
        char c = str[i];
        if(c=='('||c=='['){
            stack_push(stack, c);
        }else if(c==')'){
            if(stack_top(stack,top)=='('){
                stack_pop(stack);
            }else{
                printf("Wrong");
                return 0;
            }
        }else if(c==']'){
            if(stack_top(stack,top)=='['){
                stack_pop(stack);
            }else{
                printf("Wrong");
                return 0;
            }
        }
    }
    if (top == -1){
        printf("OK");
    }
    else{
        printf("Wrong");
    }
    return 0;
}