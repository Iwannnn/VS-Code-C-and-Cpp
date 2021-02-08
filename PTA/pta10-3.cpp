#include <iostream>
using namespace std;
template <class T>
class MyArray{
protected:
    int size;
    T *data;
public:
    MyArray(int s){
        size = s;
        data = new T[size];
    }
    void sort(){
    int i,j,min;
	    T t;
	for(i=0;i<size;i++)
	    cin>>data[i];
	    for(i=0;i<size-1;i++){
		    min=i;
		    for(j=i+1;j<size;j++)
		        if(data[j]<data[min])
			        min=j;
		    t=data[i];
		    data[i]=data[min];
		    data[min]=t; 
	    }   
    }
    void display(){
        for(int i=0; i<size-1; i++) cout<<data[i]<<' ';
        cout<<data[size-1]<<endl;
    }
    ~MyArray();
    bool check();
};
template<class T>
MyArray<T>::~MyArray(){ delete[] data;}
template<class T>
bool MyArray<T>::check(){
    int i;
    for(i=0;i<size-1;i++)
        if(data[i]>data[i+1]) { cout<<"ERROR!"<<endl;return false;}
    return true;
}
int main( )
{
    MyArray<int> *pI;
    MyArray<float> *pF;
    MyArray<char> *pC;
    int ty, size;
    cin>>ty;
    while(ty>0){
        cin>>size;
        switch(ty){
            case 1: pI = new MyArray<int>(size);   pI->sort(); pI->check(); pI->display(); delete pI; break;
            case 2: pF = new MyArray<float>(size); pF->sort(); pF->check(); pF->display(); delete pF; break;
            case 3: pC = new MyArray<char>(size);  pC->sort(); pC->check(); pC->display(); delete pC; break;
        }
        cin>>ty;
    }
    return 0;
}
