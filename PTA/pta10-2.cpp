#include <iostream>
using namespace std;
template <class T>
class Vector{
protected:
    int a[100000];
    int  size = 0;
public:
    int add(int i){
        a[size] = i;
        size++;
        return size-1;
    }
    int get_size(){
        return size;
    }
    T & operator[](int i){
        return a[i];
    }
    void remove(int m){
        for (int i = 0; i < size;i++){
            a[i] = a[i + 1];
        }
        size--;
    }
};
int main()
{
	Vector<int> vint;
	int n,m;
	cin >> n >> m;
	for ( int i=0; i<n; i++ ) {
		//	add() can inflate the vector automatically
		vint.add(i);	
	}
	//	get_size() returns the number of elements stored in the vector
	cout << vint.get_size() << endl;
	cout << vint[m] << endl;
	//	remove() removes the element at the index which begins from zero
	vint.remove(m);
	cout << vint.add(-1) << endl;
	cout << vint[m] << endl;
	Vector<int> vv = vint;
	cout << vv[vv.get_size()-1] << endl;
    vv.add(m);
	cout << vint.get_size() << endl;
    system("pause");
}