#include <bits/stdc++.h>
#include <chrono>
int num[88888888];
int test1[188888888], test2[188888888];
using namespace std;
int quick_sort(int v[], int low, int high, int flag) {
    int min_index = low;
    int key = v[min_index];
    int temp;
    while (low < high) {
        while (low < high && v[high] >= key)
            high--;
        if (flag == 1) {
            temp = v[low];
            v[low] = v[high];
            v[high] = temp;
        } else
            v[low] = v[high];
        while (low < high && v[low] <= key)
            low++;
        if (flag == 1) {
            temp = v[low];
            v[low] = v[high];
            v[high] = temp;
        } else {
            v[high] = v[low];
        }
    }
    if (flag == 2)
        v[low] = key;
    return low;
}
void Sort(int v[], int low, int high, int flag) {
    if (low < high) {
        int pos = quick_sort(v, low, high, flag);
        Sort(v, low, pos - 1, flag);
        Sort(v, pos + 1, high, flag);
    }
}
int main() {
    string flag;
    do {
        int index = 0;
        char c;
        cout << "请选择快速排序的方式" << endl
             << "1.交换位置" << endl
             << "2.赋值" << endl
             << "3.比较算法" << endl
             << "4.结束" << endl;
        cin >> flag;
        while (flag != "1" && flag != "2" && flag != "3" && flag != "4") {
            cout << "输入错误！！！" << endl
                 << "请重新输入:" << endl
                 << "1.交换位置" << endl
                 << "2.赋值" << endl
                 << "3.比较算法" << endl
                 << "4.结束" << endl;
            cin >> flag;
        }
        c = getchar();
        if (flag == "3") {
            cout << "请输入需要比较的个数:";
            cin >> index;
            int temp;
            srand(time(NULL));
            for (int i = 0; i < index; i++) {
                temp = rand();
                test1[i] = temp;
                test2[i] = temp;
            }
            cout << "随机数生成完成" << endl;
            auto start1 = std::chrono::system_clock::now();
            Sort(test1, 0, index - 1, 1);
            auto end1 = std::chrono::system_clock::now();
            auto elapsed1 = std::chrono::duration_cast<std::chrono::milliseconds>(end1 - start1);
            cout << "交换位置耗时:" << elapsed1.count() << "ms" << endl;
            auto start2 = std::chrono::system_clock::now();
            Sort(test2, 0, index - 1, 2);
            auto end2 = std::chrono::system_clock::now();
            auto elapsed2 = std::chrono::duration_cast<std::chrono::milliseconds>(end2 - start2);
            cout << "赋值耗时:" << elapsed2.count() << "ms" << endl;
        } else {
            cout << "请输入一个无序序列:";
            while ((c = getchar()) != '\n') {
                if (isdigit(c)) {
                    ungetc(c, stdin);
                    scanf("%d", &num[index]);
                    index++;
                }
            }
            auto start = std::chrono::system_clock::now();
            Sort(num, 0, index - 1, stoi(flag));
            auto end = std::chrono::system_clock::now();
            for (int i = 0; i < index; i++)
                cout << num[i] << " ";
            auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
            cout << endl
                 << elapsed.count() << "ms" << endl;
        }
    } while (flag != "4");
    system("pause");
}