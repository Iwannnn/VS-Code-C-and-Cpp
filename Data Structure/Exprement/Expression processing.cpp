#include <iostream>
#include <sstream>
#include <stack>
#include <string>
using namespace std;
struct BtreeNode {
    string data;
    BtreeNode *lchild;
    BtreeNode *rchild;
};
BtreeNode *error = new BtreeNode;
float stf(const string &str) { //string转double
    istringstream iss(str);
    double num;
    iss >> num;
    return num;
}
BtreeNode *CreatBtree(string exp, int head, int tail) { //建立二叉树
    int first_index = head, last_index = tail, digital_flag = 1, minus_flag = 0, brackets_flag = 0, brackets_index, brackets_num = 0;
    stack<string> brackets_left, brackets_right, brackets; //判断括号
    BtreeNode *p = new BtreeNode;
    brackets.push("end");
    brackets_left.push("end");
    brackets_right.push("end");
    if (exp[first_index] == '(' && exp[last_index] == ')') { //如果有括号在当前exp的最左最右边消除他的影响
        do {
            brackets_flag = 0;
            brackets_index = -1;
            for (int i = first_index; i <= last_index; i++) {
                if (exp[i] == '(') {
                    brackets.push("(");
                    brackets_flag++;
                }
                if (exp[i] == ')' && brackets.top() == "(") {
                    brackets.pop();
                    brackets_flag--;
                    if (brackets_flag == 0 && brackets_index == -1) {
                        brackets_index = i;
                    }
                }
            }
            if (brackets_index == last_index) {
                first_index++;
                last_index--;
            }
        } while (brackets_index == last_index + 1); //消除重复的括号的影响
    }
    for (int i = first_index; i <= last_index; i++) {
        if (exp[i] == '(') {
            brackets.push("(");
            brackets_num++;
        } else if (exp[i] == ')' && brackets.top() == "(") {
            brackets.pop();
            brackets_num++;
        } else if (exp[i] == ')' && brackets.top() == "end") {
            brackets.push(")");
            brackets_num++;
        }
    }
    if (brackets.top() == "(" || brackets.top() == ")" || first_index > last_index || brackets_num == last_index - first_index + 1) {
        error->data = "ERROR";
        return p;
    }
    for (int i = first_index; i <= last_index; i++) { //判断当前exp中有无括号与符号
        if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/' || exp[i] == '(' || exp[i] == ')') {
            digital_flag = 0;
            break;
        }
        if (exp[i] != '0' && exp[i] != '1' && exp[i] != '2' && exp[i] != '3' && exp[i] != '4' && exp[i] != '5' && exp[i] != '6' && exp[i] != '7' && exp[i] != '8' && exp[i] != '9'
            && exp[i] != '+' && exp[i] != '-' && exp[i] != '*' && exp[i] != '/' && exp[i] != '(' && exp[i] != ')' && exp[i] != '.') error->data = "ERROR"; //判断非法符号
    }
    if (exp[first_index] == '-') { //对负数的判断
        minus_flag = 1;
        for (int i = first_index + 1; i <= last_index; i++) { //判断当前exp中有无括号与符号
            if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/' || exp[i] == '(' || exp[i] == ')') {
                minus_flag = 0;
                break;
            }
        }
    }
    if (digital_flag == 1 || minus_flag == 1) { //若没有符号获取当前数值
        p->data = exp.substr(first_index, last_index - first_index + 1);
        p->lchild = NULL;
        p->rchild = NULL;
        return p;
    }
    for (int i = last_index; i >= first_index; i--) { //从后往前找，找到最后一个操作的符号
        if (exp[i] == ')') brackets_right.push(")");
        if (exp[i] == '(' && brackets_right.top() == ")") brackets_right.pop();
        if ((exp[i] == '+' || exp[i] == '-') && brackets_right.top() == "end") {
            p->data = exp[i];
            p->lchild = CreatBtree(exp, first_index, i - 1);
            p->rchild = CreatBtree(exp, i + 1, last_index);
            return p;
        }
    }
    for (int i = first_index; i <= last_index; i++) { //从前往后找，在只有“*”“/”时找到先被操作的符号
        if (exp[i] == '(') brackets_left.push("(");
        if (exp[i] == ')' && brackets_left.top() == "(") brackets_left.pop();
        if ((exp[i] == '*' || exp[i] == '/') && brackets_left.top() == "end") {
            p->data = exp[i];
            p->lchild = CreatBtree(exp, first_index, i - 1);
            p->rchild = CreatBtree(exp, i + 1, last_index);
            return p;
        }
    }
    return p;
}
void DLR(BtreeNode *root) { //前序遍历
    cout << root->data;
    if (root->lchild != NULL) {
        DLR(root->lchild);
    }
    if (root->rchild != NULL) {
        DLR(root->rchild);
    }
}
void LDR(BtreeNode *root) { //中序遍历
    if (root->lchild != NULL) {
        LDR(root->lchild);
    }
    cout << root->data;
    if (root->rchild != NULL) {
        LDR(root->rchild);
    }
}
void LRD(BtreeNode *root) { //后序遍历
    if (root->lchild != NULL) {
        LRD(root->lchild);
    }
    if (root->rchild != NULL) {
        LRD(root->rchild);
    }
    cout << root->data;
}
float calculate(BtreeNode *root) { //计算表达式
    float ldata = 0, rdata = 0, ans = 0;
    if (root->lchild != NULL) {
        ldata = calculate(root->lchild);
    }
    if (root->rchild != NULL) {
        rdata = calculate(root->rchild);
    }
    if (root->lchild == NULL && root->rchild == NULL) {
        ans = stf(root->data);
    }
    if (root->data == "+")
        ans = ldata + rdata;
    else if (root->data == "-")
        ans = ldata - rdata;
    else if (root->data == "*")
        ans = ldata * rdata;
    else if (root->data == "/")
        ans = ldata / rdata;
    return ans;
}
int main() {
    string exp;
    int head = 0, tail;
    cout << "如果要输入负数请带括号" << endl;
    cout << "请输入表达式若要停止运行则输入end" << endl;
    cin >> exp;
    do {
        error->data = "OK";
        tail = exp.size() - 1;
        BtreeNode *root = new BtreeNode;
        root = CreatBtree(exp, head, tail);
        if (error->data == "OK") {
            cout << "先序遍历结果:";
            DLR(root);
            cout << endl;
            cout << "中序遍历结果:";
            LDR(root);
            cout << endl;
            cout << "后序遍历结果:";
            LRD(root);
            cout << endl;
            cout << calculate(root) << endl;
            cout << endl;
        } else {
            cout << "输入不合法！！！" << endl;
        }
        cout << "请输入表达式若要停止运行则输入end" << endl;
        cin >> exp;
    } while (exp != "end");
    cout << "程序结束" << endl;
    system("pause");
}