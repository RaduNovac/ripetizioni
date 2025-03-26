#include <iostream>
#include <cstdlib> // per rand() e srand()
#include <ctime>   // per time()
/*
La consegna è confusionaria a dir poco...
*/
using namespace std;

int quadrato(int n){
	return n * n;
}

void scambia(int &x, int &y){
	int z;
	
	z = x;
	x = y;
	y = z;
}

int main(){
	for(int i = 0;i < 10;i++){
		//cout << quadrato(i) <<endl;
	}

    int a = 5, b = 7;

    cout << "a: " << a << ";b: " << b << endl;

    scambia(a,b);

    cout << "a: " << a << ";b: " << b << endl;

	return 0;
}