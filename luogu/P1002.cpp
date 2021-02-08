#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int map[30][30] = {{0}};
    long long int soldier[30][30]={{0}};
    soldier[0][0] = 1;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    map[x2][y2] = 1;
    if(x2+2>=0&&y2+1>=0)map[x2 + 2][y2 + 1] = 1;
    if(x2+1>=0&&y2+2>=0)map[x2 + 1][y2 + 2] = 1;
    if(x2-1>=0&&y2+2>=0)map[x2 - 1][y2 + 2] = 1;
    if(x2-2>=0&&y2+1>=0)map[x2 - 2][y2 + 1] = 1;
    if(x2-2>=0&&y2-1>=0)map[x2 - 2][y2 - 1] = 1;
    if(x2-1>=0&&y2-2>=0)map[x2 - 1][y2 - 2] = 1;
    if(x2+1>=0&&y2-2>=0)map[x2 + 1][y2 - 2] = 1;
    if(x2+2>=0&&y2-1>=0)map[x2 + 2][y2 - 1] = 1;
    for (int i = 1; i <= x1;i++)
        if(map[i][0]==0) soldier[i][0] = 1;
        else break;
    for (int j = 1; j <= y1;j++)
        if(map[0][j]==0) soldier[0][j] = 1;
        else break;
    for (int i = 1; i <= x1;i++){
        for (int j = 1; j <= y1;j++){
            if(map[i][j]==0)
                soldier[i][j] = soldier[i - 1][j] + soldier[i][j - 1];
            else
                soldier[i][j] = 0;
        }
    }
    cout << soldier[x1][y1] << endl;
}