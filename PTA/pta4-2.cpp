#include <iostream>
using namespace std;

class Rectangle {
public:
    void setLength(int l) { length = l; }
    void setWidth(int w) { width = w; }
    int getArea() { return width * length; }
private:
    int length, width;    //矩形的长度和宽度	
};

int main()
{
    Rectangle r;
    int len, w;
    cin >> len >> w;
    r.setLength(len);
    r.setWidth(w);
    cout << r.getArea() << "\n";

    return 0;
}