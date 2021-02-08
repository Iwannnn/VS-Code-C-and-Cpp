#include <iostream>
#include <limits>
using namespace std;
char min(char c1, char c2){
    return c1 > c2 ? c2 : c1;
}
char min(char c1,char c2,char c3){
    return c1 > min(c2,c3) ? min(c2,c3) : c1;
}
int min(int i1,int i2){
    return i1 > i2 ? i2 : i1;
}
int min(int i1,int i2,int i3){
    return i1 < min(i2,i3) ? i1 : min(i2,i3);
}
int main(){
    cout << min('[', 'N') << " "
         << min('G', '9', '*') << " "
         << min(-42, 0) << " "
         << min(-42, 0, numeric_limits<int>::min());
    return 0;
}
