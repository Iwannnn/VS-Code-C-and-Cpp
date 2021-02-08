#include <stdio.h>
#include <string.h>
int main(int argc, char * argv[]){
    char s[100];
    while (~scanf("%s",s)){
        int left=0,right, l = strlen(s),flag=1;
        right = l-1;
        while(left<=right){
            if(s[left]==s[right]){
                left++;
                right--;
            }else{
                flag = 0;
                break;
            }
        }
        if(flag==1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}