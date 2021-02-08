#include <bits/stdc++.h>
using namespace std;
#define maxnum 100
int vnum, arcnum;
struct arcnode {
    int adjvex;              //弧头的位置
    arcnode *nextarc = NULL; //下一条弧的指针
    //int info;         //弧的信息
};
struct vnode {
    string data;
    int degree = 0;
    int indegree = 0;
    arcnode *firstarc = new arcnode;
};
struct vgraph {
    vnode vlist[maxnum];
    int vnum, arcnum;
} ans_graph;
int locate(string data) { //定位坐标
    for (int i = 0; i < vnum; i++) {
        if (ans_graph.vlist[i].data == data)
            return i;
    }
    return -1;
}
void add_arc(int index_head, int index_tail) {
    arcnode *p = new arcnode;
    arcnode *q = ans_graph.vlist[index_tail].firstarc;
    ans_graph.vlist[index_tail].degree++;
    ans_graph.vlist[index_head].indegree++;
    p->adjvex = index_head;
    p->nextarc = NULL;
    while (q->nextarc != NULL) {
        q = q->nextarc;
    }
    q->nextarc = p;
}
void creat_vertex() {
    string data;
    for (int i = 0; i < vnum; i++) { //建立点
        cout << "请输入顶点数据(" << i + 1 << "/" << vnum << "):";
        cin >> data;
        ans_graph.vlist[i].data = data;
        ans_graph.vlist[i].firstarc->adjvex = i;
    }
}
void creat_arc(int flag) { //建立弧 0为无向图 1为有向图
    string v1, v2;
    int index_head, index_tail;
    for (int i = 0; i < arcnum; i++) {
        cout << "请输入弧所在的两个顶点，如果为有向图则先输入弧尾(" << i + 1 << "/" << arcnum << "):";
        cin >> v1 >> v2;
        index_head = locate(v2);
        index_tail = locate(v1);
        while (index_head == -1 || index_tail == -1) {
            cout << "输入错误！！！" << endl
                 << "请输入弧所在的两个顶点，如果为有向图则先输入弧尾(" << i + 1 << "/" << arcnum << "):";
            cin >> v1 >> v2;
            index_head = locate(v2);
            index_tail = locate(v1);
        }
        add_arc(index_head, index_tail);
        if (flag == 0) {
            add_arc(index_tail, index_head);
        }
    }
}
void creat_graph(int vnum, int arcnum, int flag) {
    ans_graph.vnum = vnum;
    ans_graph.arcnum = arcnum;
    creat_vertex();
    creat_arc(flag);
    for (int i = 0; i < vnum; i++) {
        arcnode *p = ans_graph.vlist[i].firstarc;
        cout << "头顶点地址：" << p->adjvex << "  头顶点数据:" << ans_graph.vlist[i].data;
        p = p->nextarc;
        while (p != NULL) {
            cout << "  --->"
                 << "  弧头地址：" << p->adjvex << "  弧头数据:" << ans_graph.vlist[p->adjvex].data;
            p = p->nextarc;
        }
        cout << endl;
    }
}
void showdegree(int flag) {
    for (int i = 0; i < vnum; i++) {
        if (flag == 0)
            cout << "顶点数据:" << ans_graph.vlist[i].data << "  度数:" << ans_graph.vlist[i].degree << endl;
        else if (flag == 1)
            cout << "顶点数据:" << ans_graph.vlist[i].data << "  出度:" << ans_graph.vlist[i].degree
                 << "  入度:" << ans_graph.vlist[i].indegree << endl;
    }
}
int judge(string tail, string head) {
    int i = locate(tail);
    if (i == -1) return 0;
    arcnode *p = ans_graph.vlist[i].firstarc;
    while (p != NULL) {
        if (ans_graph.vlist[p->adjvex].data == head) return 1;
        p = p->nextarc;
    }
    return 0;
}
void free() {
    for (int i = 0; i < vnum; i++) {
        arcnode *p = ans_graph.vlist[i].firstarc->nextarc;
        arcnode *q;
        ans_graph.vlist[i].firstarc->nextarc = NULL;
        ans_graph.vlist[i].degree = 0;
        while (p != NULL) {
            q = p;
            p = p->nextarc;
            delete q;
        }
    }
}
int main() {
    string flag;
    for (;;) {
        cout << "请选择构建有向图或者无向图" << endl
             << "1.无向图" << endl
             << "2.有向图" << endl
             << "3.退出" << endl;
        cin >> flag;
        while (flag != "1" && flag != "2" && flag != "3") {
            cout << "输入错误！！！" << endl
                 << "请重新输入:" << endl
                 << "1.无向图" << endl
                 << "2.有向图" << endl
                 << "3.退出" << endl;
            cin >> flag;
        }
        if (flag == "3") break;
        cout << "请输入顶点数和边数：";
        cin >> vnum >> arcnum;
        if (flag == "1") {
            creat_graph(vnum, arcnum, 0);
            showdegree(0);
        } else if (flag == "2") {
            creat_graph(vnum, arcnum, 1);
            showdegree(1);
        }
        for (;;) {
            string head, tail;
            cout << "是否需要判断边是否存在" << endl
                 << "1.是" << endl
                 << "2.否" << endl;
            cin >> flag;
            while (flag != "1" && flag != "2") {
                cout << "输入错误！！！" << endl
                     << "请重新输入:" << endl
                     << "1.是" << endl
                     << "2.否" << endl;
                cin >> flag;
            }
            if (flag == "2") break;
            cout << "请输入需要判断边的两个顶点有向图则先输入弧尾:";
            cin >> tail >> head;
            if (judge(tail, head))
                cout << "存在" << endl;
            else
                cout << "不存在" << endl;
        }
        free();
    }
    cout << "程序结束" << endl;
    system("pause");
}