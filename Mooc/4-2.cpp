#include <iostream>
using namespace std;
class Screen {
private:
    int w, h;
public:
    int getWidth();
    int getHeight();
    void setWidth(int width);
    void setHeight(int height);
    Screen(int width, int height);
    Screen();
};
int Screen::getWidth() { return w; }
int Screen::getHeight() { return h; }
void Screen::setHeight(int height) { h = height; }
void Screen::setWidth(int width) { w = width; }
Screen::Screen(int width, int height) {
    std::cout << "screen" << std::endl;
    w = width;
    h = height;
}
Screen::Screen() {
    std::cout << "screen" << std::endl;
    w = 640;
    h = 480;
}
int main() {
    int width, height;
    std::cin >> width >> height;
    Screen screen1(width, height);
    Screen screen2;
    screen2.setWidth(800);
    screen2.setHeight(600);
    std::cout << screen1.getWidth() << ' ' << screen1.getHeight() << std::endl;
    std::cout << screen2.getWidth() << ' ' << screen2.getHeight();
    return 0;
}