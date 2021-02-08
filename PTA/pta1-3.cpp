#include <math.h>

#include <iostream>
using namespace std;
int main() {
    float a, s, l;
    cin >> a;
    s = a * a * sqrt(25 + 10 * sqrt(5)) / 4.0;
    l = 5 * a;
    cout << s << endl;
    cout << l << endl;
    return 0;
}