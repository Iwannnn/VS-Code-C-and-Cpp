#include <iostream>
#include <string>
class Parse {
   private:
    std::string s;

   public:
    Parse(std::string ss);
    int getFirst();
    int getLast();
    ~Parse();
};
Parse::Parse(std::string ss) { s = ss; }
Parse::~Parse() {}
int Parse::getFirst() {
    int a = s.find("-");
    std::string b = s.substr(0, a);
    int res = stoi(b);
    return res;
}
int Parse::getLast() {
    int a = s.find("-");
    std::string b = s.substr(a + 1);
    int res = std::stoi(b);
    return res;
}
int main() {
    std::string s{};
    std::cin >> s;
    Parse p(s);
    std::cout << p.getFirst() << ' ' << p.getLast();
    return 0;
}