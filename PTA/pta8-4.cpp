#include <iostream>
using namespace std;
class CMyClassA {
private:
    int val;
public:
    CMyClassA(int);
    void virtual print();
};
CMyClassA::CMyClassA(int arg) {
    val = arg;
    printf("A:%d\n", val);
}
void CMyClassA::print() {
    printf("%d\n", val);
    return;
}
class CMyClassB:public CMyClassA{
private:
    int value;
public:
    CMyClassB(int arg):CMyClassA(3*arg){
        value = arg;
        printf("B:%d\n", value);
    }
    void print() {
        printf("%d\n", value);
    }
};
int main() {
    CMyClassA a(3), *ptr;
    CMyClassB b(5);
    ptr = &a;
    ptr->print();
    a = b;
    a.print();
    ptr = &b;
    ptr->print();
    system("pause");
    return 0;
}