#include <iostream>

/*

Pasar numero del 1 al 5, a numeros romano.

*/

using namespace std;
int main(){
	int num;
	cout<<"Numero[1, 5]: "; cin>>num;
	
	switch (num){
		case 1: cout<<"1 en romano es I"<<endl; break;
		case 2: cout<<"2 en romano es II"<<endl; break;
		case 3: cout<<"3 en romano es III"<<endl; break;
		case 4: cout<<"4 en romano es IV"<<endl; break;
		case 5: cout<<"5 en romano es V"<<endl; break;
		default:
			cout<<"Error numero fuera de rango, digite nuevamente";
			break;
	}
	return 0;
}