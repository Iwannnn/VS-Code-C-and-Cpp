#include <iostream>
using namespace std;
struct book{
    char name[100];
    float price;
}a[15];
int main(){
    int n,i,maxi=1,mini=1;
    cin >> n;
    for (i = 1; i <= n;i++){
        getchar();
        cin.getline(a[i].name,100);
        cin >> a[i].price;    
        if(a[maxi].price<a[i].price)
            maxi = i;
        if(a[mini].price>a[i].price)
            mini = i;
    }
    printf("highest price: %.1f, %s\n",a[maxi].price,a[maxi].name );
    printf("lowest price: %.1f, %s\n",a[mini].price,a[mini].name);
}