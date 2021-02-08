#include <iostream>
using namespace std;
struct stu{
    int num, score;
};
int main(){
    struct stu a[1234];
    int n,i;
    cin >> n;
    for (i = 1; i <= n;i++)
        cin >> a[i].num >> a[i].score;
    for (i = 1; i <= n;i++)
        cout << a[i].num << " " << a[i].score << endl;
}