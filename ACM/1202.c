#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[]){
    long long int m, s, t,flag=0;
    scanf("%lld%lld%lld", &m, &s, &t);
    long long int meter=0,time=0;
    while(m>=10){
        m -= 10;
        time++;
        meter += 60;
        if(meter>=s&&t>=time){
            printf("Yes\n%lld\n",meter);
            flag = 1;
            return 0;
        }
        if(time>t){
            time--;
            meter -= 60;
            m += 10;
            break;
        }
    }
    while(m-meter>199){
        time += 7;
        meter += 120;
        if(time>=t){
            if(m>=2){
                time -= 7;
                meter -= 120;
            }
            break;
        }
    }
    if(meter>=s&&t>=time){
        printf("Yes\n%lld\n",meter);
        flag = 1;
        return 0;
    }
    while(m-meter>=34&&m>=6&&m<10&&t-time>=2){
        time += 2;
        meter += 60;
        m -= 6;
    }
    if(meter>=s&&t>=time){
        printf("Yes\n%lld\n",meter);
        flag = 1;
        return 0;
    }
    while(m-meter>=51&&m>=2&&m<6&&t-time>=3){
        time += 3;
        meter += 60;
        m -= 2;
    }
    if(meter>=s&&t>=time){
        printf("Yes\n%lld\n",meter);
        flag = 1;
        return 0;
    }
    for (;;){
        time++;
        meter += 17;
        if(meter>=s&&t>=time){
            printf("Yes\n%lld\n",meter);
            flag = 1;
            return 0;
        }
        if(time>t&&flag==0){
            time--;
            meter -= 17;
            break;
        }
    }
    if(flag==0){
        printf("No\n%lld\n", meter);
    }
    system("pause");
    return 0;
}