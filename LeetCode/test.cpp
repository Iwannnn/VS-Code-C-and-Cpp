#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<char> s;
	char k[260];
	cin>>k;
	int len = strlen(k);
	for(int i = 0;i<len;i++){
		char c = k[i];
		if( c == '(' || c == '['){
			s.push(c);
		}else if( c == ')'){
			if(s.top() == '('){
				s.pop();
			}else{
				cout<<"Wrong";
				return 0;
			}
		}else if( c == ']'){
			if(s.top() == '['){
				s.pop();
			}else{
				cout<<"Wrong";
				return 0;
			}
		}
	}
	if(s.size()== 0){
		cout <<"OK";
	}else{
		cout<<"Wrong";
	}
	system("pause");
	return 0;
}