#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
    map<string, long> m;
    map<string, long>::iterator p;
    string w;
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        m.clear();
        for (int i = 0; i < n; i++){
            cin >> w;
            ++m[w];
        }
        for (p = m.begin(); p != m.end();p++){
            cout << (*p).first << " " << (*p).second << endl;
        }
    }
}