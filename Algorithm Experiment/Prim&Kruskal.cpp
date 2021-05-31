#include <bits/stdc++.h>
using namespace std;

struct primDot {
    int adjvex;
    int lowcost;
};

// lowcoat 0: 未被选中 -1 使用过了

int primNext(vector<primDot> primEdge) {
    int minIndex = -1;
    for (int i = 0; i < primEdge.size(); ++i) {
        if (primEdge[i].lowcost > 0) {
            if (minIndex >= 0) {
                minIndex = primEdge[i].lowcost > primEdge[minIndex].lowcost ? minIndex : i;
            } else {
                minIndex = i;
            }
        }
    }
    return minIndex;
}

void prim(vector<vector<int>> graph) {
    vector<primDot> primEdge;
    for (int i = 0; i < graph.size(); ++i) {
        if (i == 0)
            primEdge.push_back({0, -1});
        else
            primEdge.push_back({0, graph[i][0]});
    }
    for (int i = 1; i < graph.size(); ++i) {
        int minIndex = primNext(primEdge);
        cout << "from " << primEdge[minIndex].adjvex << " to " << minIndex << endl;
        primEdge[minIndex].lowcost = -1;
        for (int j = 0; j < graph.size(); ++j) {
            if (primEdge[j].lowcost == 0 && graph[minIndex][j] > 0) {
                primEdge[j] = {minIndex, graph[minIndex][j]};
            } else if (primEdge[j].lowcost > graph[minIndex][j] && primEdge[j].lowcost > 0 && graph[minIndex][j] > 0) {
                primEdge[j] = {minIndex, graph[minIndex][j]};
            }
        }
    }
}
int main() {
    vector<vector<int>> graph(6, vector<int>(6, 0));
    graph[0][1] = graph[1][0] = 6;
    graph[0][2] = graph[2][0] = 1;
    graph[0][3] = graph[3][0] = 5;
    graph[1][2] = graph[2][1] = 5;
    graph[1][4] = graph[4][1] = 3;
    graph[2][3] = graph[3][2] = 5;
    graph[2][4] = graph[4][2] = 6;
    graph[2][5] = graph[5][2] = 5;
    graph[3][5] = graph[5][3] = 2;
    graph[4][5] = graph[5][4] = 6;
    prim(graph);
    system("pause");
}