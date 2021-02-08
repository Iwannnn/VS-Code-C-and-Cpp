#include <iostream>
using namespace std;

int add(int x,int y=20,int z=30){
    return x + y + z;
}

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    cout << add(a) << endl;
    cout << add(a, b) << endl;
    cout << add(a, b, c) << endl;

    return 0;
}