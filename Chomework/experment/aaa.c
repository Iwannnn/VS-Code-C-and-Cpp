#include <stdio.h>
struct node{
    int num, previndex, nextindex;
}a[123];
int main(){
    int n,minindex,maxindex,sum=0,prev,next;
	scanf("%d", &n);
	int result = 0,i,t = n - 1;
	a[0].num = 12345;
	a[n + 1].num = 12345;
	a[0].nextindex = 1;
	a[n + 1].previndex = n;
	for (i = 1; i <= n; i++){
		scanf("%d", &a[i].num);
		a[i].previndex = i - 1;
		a[i].nextindex = i + 1;
	}
	while(t--){
    	for (int i = a[0].nextindex; ;i = a[i].nextindex)
        	if(a[a[i].previndex].num <= a[a[i].nextindex].num){
            	minindex = i;
            	break;
			}
    	sum = a[a[minindex].previndex].num + a[minindex].num;
    	for (int i = a[a[minindex].previndex].previndex;;i = a[i].previndex)
        	if (a[i].num > sum){
            	maxindex = i;
            	break;
        	}
		prev = a[a[minindex].previndex].previndex;
		next = a[minindex].nextindex;
		a[prev].nextindex = next;
		a[next].previndex = prev;
		a[minindex].num = sum;
    	a[minindex].previndex = maxindex;
		a[minindex].nextindex = a[maxindex].nextindex;
		a[a[maxindex].nextindex].previndex = minindex;
		a[maxindex].nextindex = minindex;
        result += sum;
	}
    printf("%d\n", result);
	return 0;
}