#include <stdio.h>
long long int sum=0;
void find(long long int n){
	sum++;
	for(int i=1;i<=n/2;i++)
	    find(i);
}
int main(){
    long long int n;
    scanf("%lld", &n);
    find(n);
    printf("%lld\n", sum);
}