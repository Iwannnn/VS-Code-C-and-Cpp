#include <iostream>
class C{
public:
    C(int x){
        std::cout << "C(" << x << ")" << std::endl;
    }
    C(){
        C(42);
        std::cout << "C()" << std::endl;
    }
};
int main(){
    C();
    C(18);
}