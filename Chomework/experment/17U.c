#include <stdio.h>
struct node{
    int num, previndex, nextindex;
}a[123];
void delnode(int minindex){
	int prev = a[a[minindex].previndex].previndex;
	int next = a[minindex].nextindex;
	a[prev].nextindex = next;
	a[next].previndex = prev;
}
void insertnode(int minindex, int maxindex){
	a[minindex].previndex = maxindex;
	a[minindex].nextindex = a[maxindex].nextindex;
	a[a[maxindex].nextindex].previndex = minindex;
	a[maxindex].nextindex = minindex;
}
int main(){
    int n;
	scanf("%d", &n);
	int result = 0, i, t = n - 1;
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
        int minindex,maxindex,sum=0;
    	for (i = a[0].nextindex; ; i = a[i].nextindex)
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
        delnode(minindex);
        a[minindex].num = sum;
        insertnode(minindex, maxindex);
        result += sum;
    }
    printf("%d\n", result);
	return 0;
}