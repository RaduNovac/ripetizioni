#include <iostream>
using namespace std;


void scambia(int &x, int &y){
	int z;
	
	z = x;
	x = y;
	y = z;
}

int main(){
	int a = 5, b = 7;
	
	scambia(a,b);

    cout << a << endl;
    cout << b << endl;

	return 0;
}