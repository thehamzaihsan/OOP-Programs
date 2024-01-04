#include <iostream>
using namespace std;


template < class atype , class btype> 


void foo( atype x , btype y ){

	cout << x + y << endl;

}

int main(){

	int a = 9;
	float y = 2.5;

	foo(a , y);
	foo(y , a);
}
