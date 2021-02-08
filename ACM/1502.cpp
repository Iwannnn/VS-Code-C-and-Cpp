#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        bool flag = true;
        string str;
        cin >> str;
        stack<char> s;
        if(!s.empty()){
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