#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector<int> sieve(int n); //函数声明,求n以内的质数
int main(int argc, char const *argv[]){
    int n;
    cin >> n;
    vector<int> ans = sieve(n);
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];
        if (i < ans.size() - 1)cout << " ";
    }
    cout << endl;
    return 0;
}
int num[100111]={0};
vector<int> sieve(int n){
    vector<int> temp;
    for(int i=2; i*i<=n; i++) {
		if(num[i]==1)
		    continue;
        for (int t = 2; t * i <= n;t++)
            num[t*i]=1;
    }
    for(int i=2;i<=n;i++){
    	if(num[i]==0)
    	    temp.push_back(i);
	}
	return temp;
}