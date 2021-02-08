#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
class Point{
    double x, y;
    public:
        void setX(double a){
            x = a;
        }
        void setY(double b){
            y = b;
        }
        double getX(){
            return x;
        }
        double getY(){
            return y;
        }
        private:
};
int main()
{
    Point p1, p2;
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    p1.setX(x1);
    p1.setY(y1);
    p2.setX(x2);
    p2.setY(y2);
    double x = p1.getX() - p2.getX();
    double y = p1.getY() - p2.getY();
    double len = sqrt(x * x + y * y);
    cout << fixed << setprecision(2) << len << endl;
    return 0;
}
