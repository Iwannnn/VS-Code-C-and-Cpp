#include <ctime>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

typedef int ElemType;

int Partition(vector<ElemType> &list, int l, int r) //交换元素
{
    ElemType key;
    key = list[l];
    while (l < r) {
        while (l < r && list[r] >= key)
            --r;
        list[l] = list[r];
        while (l < r && list[l] <= key)
            ++l;
        list[r] = list[l];
    }
    list[l] = key;
    return l;
}

void Quick_Sort(vector<ElemType> &list, int l, int r) //递归排序
{
    int m;
    if (l < r) {
        m = Partition(list, l, r);
        Quick_Sort(list, l, m - 1);
        Quick_Sort(list, m + 1, r);
    }
    return;
}

void input_fromfile(vector<ElemType> &list, int n) {
    ifstream in;
    clock_t starttime, endtime;
    ElemType t;
    in.open("input.txt");
    if (n == 0)
        return;
    starttime = clock();
    for (int i = 0; i < n; i++) {
        in >> t;
        list.push_back(t);
    }
    endtime = clock();
    cout << "输入时间：" << (endtime - starttime) << endl;
    return;
}

void input_data(vector<ElemType> &list, int n) {
    ElemType t;
    clock_t starttime, endtime;

    if (n == 0)
        return;
    starttime = clock();
    for (int i = 0; i < n; i++) {
        t = rand();
        list.push_back(t);
    }
    endtime = clock();
    cout << "输入时间：" << (endtime - starttime) << endl;
    return;
}

int main(void) {
    int op, n;
    clock_t starttime, endtime;
    vector<ElemType> list;
    while (1) {
        cout << "1.从文件input中读入" << endl
             << "2.手动输入" << endl;
        cin >> op;
        cout << "请输入数据数量：（输入0结束程序）";
        cin >> n;
        if (op == 1)
            input_fromfile(list, n);
        else if (op == 2)
            input_data(list, n);

        starttime = clock();
        Quick_Sort(list, 0, list.size() - 1); //进行快速排序
        endtime = clock();
        cout << "排序时间：" << (endtime - starttime) << endl;
        cout << "排序后：" << endl;
        // for (int i = 0; i < n; i++)
        //     cout << list[i] << " ";
        cout << endl;
    }
    return 0;
}