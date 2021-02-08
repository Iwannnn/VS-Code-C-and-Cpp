#include <bits/stdc++.h>
using namespace std;
int n, m;
struct node {
    int num;
    string name;
    node *next = NULL;
};
node *head;
node *creatlist() {
    if (n >= 0) {
        n--;
        node *p = new node;
        string temp;
        int i = 0;
        getline(cin, temp);
        int l = temp.size();
        while (temp[i] == ' ') {
            i++;
        }
        p->num = i;
        p->name = temp.substr(i, l - i);
        p->next = creatlist();
        return p;
    } else {
        return NULL;
    }
}
node *search(node *now, string name) {
    if (now->name == name)
        return now;
    else if (now->next != NULL)
        return search(now->next, name);
    else
        return NULL;
}
int judge_child(node *par, node *ch) {
    node *p = par->next;
    if (p == NULL) return 0;
    while (p->num != par->num) {
        if (p->name == ch->name && (ch->num) - 2 == par->num) {
            return 1;
        }
        if (p->next != NULL)
            p = p->next;
        else
            break;
    }
    return 0;
}
node *search_dad(node *ch) {
    node *p = head->next;
    while (p != NULL) {
        if (judge_child(p, ch) == 1) return p;
        p = p->next;
    }
    return NULL;
}
int main() {
    cin >> n >> m;
    head = creatlist();
    while (m--) {
        string temp, name1, name2, judge;
        node *pname1, *pname2;
        int flag = 0, indexnull = 0;
        getline(cin, temp);
        for (int i = 0; i < temp.size(); i++) {
            if (temp[i] == ' ') {
                flag++;
                if (flag == 1) {
                    name1 = temp.substr(indexnull, i);
                } else if (flag == 4) {
                    judge = temp.substr(indexnull + 1, i - indexnull - 1);
                } else if (flag == 5) {
                    name2 = temp.substr(i + 1, temp.size() - i - 1);
                }
                indexnull = i;
            }
        }
        pname1 = search(head->next, name1);
        pname2 = search(head->next, name2);
        if (judge == "child") {
            if (judge_child(pname2, pname1)) {
                cout << "True" << endl;
            } else {
                cout << "False" << endl;
            }
        } else if (judge == "parent") {
            if (judge_child(pname1, pname2)) {
                cout << "True" << endl;
            } else {
                cout << "False" << endl;
            }
        } else if (judge == "sibling") {
            if (search_dad(pname1) == search_dad(pname2) && pname1 != pname2) {
                cout << "True" << endl;
            } else {
                cout << "False" << endl;
            }
        } else if (judge == "descendant") {
            if (pname1->num > pname2->num) {
                flag = 0;
                node *p = search_dad(pname1);
                while (p != NULL) {
                    if (p == pname2) {
                        cout << "True" << endl;
                        flag = 1;
                        break;
                    }
                    p = search_dad(p);
                }
                if (flag == 0) {
                    cout << "False" << endl;
                }
            } else {
                cout << "False" << endl;
            }
        } else if (judge == "ancestor") {
            if (pname1->num < pname2->num) {
                flag = 0;
                node *p = search_dad(pname2);
                while (p != NULL) {
                    if (p == pname1) {
                        cout << "True" << endl;
                        flag = 1;
                        break;
                    }
                    p = search_dad(p);
                }
                if (flag == 0) {
                    cout << "False" << endl;
                }
            } else {
                cout << "False" << endl;
            }
        }
    }
    system("pause");
}