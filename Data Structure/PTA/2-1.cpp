#include <bits/stdc++.h>
using namespace std;
int main() {
    stack<int> out, in;
    int item, temp, nmax, nmin;
    string ch;
    cin >> nmax >> nmin;
    if (nmin > nmax) {
        temp = nmax;
        nmax = nmin;
        nmin = temp;
    }
    cin >> ch;
    while (ch != "T") {
        if (ch == "A") {
            cin >> item;
            if (in.size() < nmin) {
                in.push(item);
            } else if (out.size() == 0 && in.size() == nmin) {
                while (in.size() != 0) {
                    temp = in.top();
                    in.pop();
                    out.push(temp);
                }
                in.push(item);
            } else if (out.size() != 0 && in.size() == nmin) {
                cout << "ERROR:Full" << endl;
            }

        } else if (ch == "D") {
            if (out.size() == 0 && in.size() > 0) {
                while (in.size() != 0) {
                    temp = in.top();
                    in.pop();
                    out.push(temp);
                }
                cout << out.top() << endl;
                out.pop();
            } else if (out.size() > 0) {
                cout << out.top() << endl;
                out.pop();
            } else if (out.size() == 0 && in.size() == 0) {
                cout << "ERROR:Empty" << endl;
            }
        }
        cin >> ch;
    }
    system("pause");
}