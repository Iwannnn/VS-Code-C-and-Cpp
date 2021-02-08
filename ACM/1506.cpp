#include <iostream>
#include <stack>
using namespace std;
int main(){
    char ch;
    stack<char> s;
    char str[1000];
    ch = getchar();
    while(ch!=EOF){
        while(ch!=EOF&&ch!='\n'){
                if(ch=='#') s.pop();
                else if(ch=='@') {
                    while (!s.empty()){
                        s.pop();
                    }
                }else{
                    s.push(ch);
                }
            ch = getchar();
        }
        int i = 1;
        while(!s.empty()){
            str[i++] = s.top();
            s.pop();
        }
        for (int j = i - 1; j >= 1;j--){
            cout << str[j];
        }
        while (!s.empty()){
            s.pop();
        }
        if(ch!=EOF)
            ch = getchar();
    }
}