#include <iostream>

using namespace std;
int i, res, ter, n;

int main(){
	cout<<"Numero a multiplicar: "; 
	cin>>n;
	cout<<"Terminos: "; 
	cin>>ter;
	
	for(i=1; i <=ter; i++) {
		res = n * i;
		cout<<n<<" x "<<i<<" es igual a: "<<res<<endl;
	}
	
	return 0;
}