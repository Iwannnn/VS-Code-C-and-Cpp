#include <iostream>
class C{
public:
    C(int x){
        std::cout << "C(" << x << ")" << std::endl;
    }
    C(double d){
        C((int)d);
        std::cout << "C(" << d << ")" << std::endl;
    }
    C(){
        C(3.8);
        std::cout << "C()" << std::endl;
    }
};
int main(){
    C();
    C(2.2);
    C(1);
}