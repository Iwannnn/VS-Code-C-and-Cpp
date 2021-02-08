#include <iostream>
#include <string>
using namespace std;
class Student{
    int rank;
    string name;
    public:
        int getRank(){return rank;	}
        Student(string name, int rank):name(name), rank(rank){	}
        ~Student(){ cout<<name<<endl;}
};
int main(){
    int rank, count=0;
    const int SIZE=100;
    Student *pS[SIZE];
    string name;
    cin>>rank;
    while(count<SIZE && rank>0){
        cin>>name;
        pS[count++]= new Student(name, rank);
        cin>>rank;
    }
    Student *temp;
    for(int i=0;i<count;i++)
		for(int j=i+1;j<count;j++)
			if(pS[i]->getRank()>pS[j]->getRank()){
				temp=pS[i];
				pS[i]=pS[j];
				pS[j]=temp;
			}
	for(int i=0;i<count;i++)
		delete pS[i];
    return 0;
}