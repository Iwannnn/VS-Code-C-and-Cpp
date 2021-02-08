#include<iostream>
using namespace std;
class Student{
    int no,score;
public:
    static int count;
    Student(int a,int b){
        count++;
        no = a;
        score = b;
    }
    Student(Student &p){
        no = p.no + 1;
        score = p.score;
        count++;
    }
    void display(){
        cout << no << " ";
        if(score)
            cout << "Pass" << endl;
        else
            cout << "Fail" << endl;
    }
};
int Student::count = 0;
int main(){
    const int size=100;
    int i, N, no, score;
    Student *st[size];
    cin>>N;
    for(i=0; i<N; i++){
        cin>>no;
        if(no>0){
            cin>>score;
            st[i]=new Student(no, score);
        }
        else
            st[i]=new Student(*st[i-1]);
    }
    cout<<N<<" Students"<<endl;
    for(i=0;i<N;i++) st[i]->display();
    for(i=0;i<N;i++) delete st[i];
    return 0;
}
