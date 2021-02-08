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
int stack_is_empty(int top){
	if(top==-1)
		return 1;
	else
		return 0;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int flag = 1;
        char str[260];
		scanf("%s", str);
		char s[260];
        if(stack_is_empty()){
            s.pop();
        }
        for (int i = 0; str[i]; i++){
            if(str[i]=='<'){
                s.push(str[i]);
            }else if(str[i]=='('){
                if(!s.empty()){
                    if(s.top()=='<'){
                        flag = false;
                    }else{
                        s.push(str[i]);
                    }
                }else{
                    s.push(str[i]);
                }
            }else if(str[i]=='['){
                if(!s.empty()){
                    if(s.top()=='<'||s.top()=='('){
                        flag = false;
                    }else{
                        s.push(str[i]);
                    }
                }else{
                    s.push(str[i]);
                }
            }else if(str[i]=='{'){
                if(!s.empty()){
                    if(s.top()=='<'||s.top()=='('||s.top()=='['){
                        flag = false;
                    }else{
                        s.push(str[i]);
                    }
                }else{
                    s.push(str[i]);
                }
            }else if(str[i]=='>'){
                if(!s.empty()){
                    if(s.top()=='<'){
                        s.pop();
                    }
                }else{
                    flag = false;
                }
            }else if(str[i]==')'){
                if(!s.empty()){
                    if(s.top()=='('){
                        s.pop();
                    }
                }else{
                    flag = false;
                }
            }else if(str[i]==']'){
                if(!s.empty()){
                    if(s.top()=='['){
                        s.pop();
                    }
                }else{
                    flag = false;
                }
            }else if(str[i]=='}'){
                if(!s.empty()){
                    if(s.top()=='{'){
                        s.pop();
                    }
                }else{
                    flag = false;
                }
            }
        }
        if(flag==true&&s.empty()){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}