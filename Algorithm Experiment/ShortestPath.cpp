#include <bits/stdc++.h>
using namespace std;

struct Node {
  public:
    Node(int i, int w) : index(i), weight(w) {
    }
    Node() : index(0), weight(0) {
    }
    Node(const Node &ni) : index(ni.index), weight(ni.weight) {
    }

    friend bool operator<(const Node &l, const Node &r) {
        return l.weight > r.weight; // 为了实现从小到大的顺序
    }

  public:
    int index;  // 结点位置
    int weight; // 权值
};

struct Path {
  public:
    Path() : frontIndex(0), weight(INT_MAX) {
    }

  public:
    int frontIndex;
    int weight;
};

// single source shortest paths
class ShortPath {

  public:
    ShortPath(const vector<vector<int>> &g, int endLocation) : noEgde(-1), endNode(endLocation), nodeCount(g.size()), graph(g) {
    }

    // 打印最短路径
    void printPath() const {
        cout << "min weight : " << shortestIndex << endl;
        cout << "path: ";
        copy(res.rbegin(), res.rend(), ostream_iterator<int>(cout, " "));
        cout << endl;
    }

    // 求最短路径
    void getShortestPath() {
        vector<Path> path(nodeCount);
        priority_queue<Node, vector<Node>> min_heap;
        min_heap.push(Node(0, 0)); // 将起始结点入队

        while (true) {
            Node top = min_heap.top(); // 取出最大值
            min_heap.pop();
            if (top.index == endNode) {
                break;
            }
            for (int i = 0; i < nodeCount; ++i) {
                if (graph[top.index][i] != noEgde && (top.weight + graph[top.index][i]) < path[i].weight) {
                    min_heap.push(Node(i, top.weight + graph[top.index][i]));
                    path[i].frontIndex = top.index;
                    path[i].weight = top.weight + graph[top.index][i];
                }
            }
            if (min_heap.empty()) {
                break;
            }
        }
        shortestIndex = path[endNode].weight;
        int index = endNode;
        res.push_back(index);
        while (true) {
            index = path[index].frontIndex;
            res.push_back(index);
            if (index == 0) {
                break;
            }
        }
    }

  private:
    vector<vector<int>> graph; // 图的数组表示
    int nodeCount;             // 结点个数
    const int noEgde;          // 无通路
    const int endNode;         // 目的结点
    vector<int> res;           // 最短路径
    int shortestIndex;         // 最短路径
};

int main() {
    vector<vector<int>> graph(11, vector<int>(11, -1));
    graph[0][1] = 2;
    graph[0][2] = 3;
    graph[0][3] = 4;
    graph[1][2] = 3;
    graph[1][5] = 2;
    graph[1][4] = 7;
    graph[2][5] = 9;
    graph[2][6] = 2;
    graph[3][6] = 2;
    graph[4][7] = 3;
    graph[4][8] = 3;
    graph[5][6] = 1;
    graph[5][8] = 3;
    graph[6][9] = 1;
    graph[6][8] = 5;
    graph[7][10] = 3;
    graph[8][10] = 2;
    graph[9][8] = 2;
    graph[9][10] = 2;

    ShortPath shortPath(graph, 10);
    shortPath.getShortestPath();
    shortPath.printPath();
    system("pause");
    return 0;
}