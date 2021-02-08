#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
struct book{
	char name[31];
	float price;
}aaa[100];
bool cmp(book a,book b){
	return a.price<b.price;
}
int main(){
	int n ; cin>>n;
    for (int i = 1; i <= n;i++){
        getchar();
		cin.getline(aaa[i].name,31);
		cin>>aaa[i].price;
    }
    sort(aaa,aaa+n+1,cmp);
    for (int i = 1; i <= n; i++){
        printf("%s %.1f\n",aaa[i].name,aaa[i].price);
    }
    return 0;
}