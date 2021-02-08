#include <iostream>
#include <ostream>
#include <string>
using namespace std;
class Student{
private:
    string name;
    int score;
    static int n;
    string out;
    friend istream &operator >> (istream &in, Student &s){
        in >> s.name >> s.score;
        if(s.score<60)
            s.out = "FAIL";
        else
            s.out = "PASS";
        return in;
    }
    friend ostream &operator << (ostream &out,Student s){
        n += 1;
        out << n << ". " << s.name <<" "<< s.out;
        return out;
    }
public:
    Student(string name="no",int score=0){}
};
int Student::n = 0;
int main(){
    int i, repeat;
    Student st;
    cin>>repeat;
    for(i=0;i<repeat;i++){
        cin>>st;
        cout<<st<<endl;
    }
    return 0;
}