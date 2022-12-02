#include <iostream>

using namespace std;
int i, res, ter, n;

int main(){
	cout<<"Numero a multiplicar: "; 
	cin>>n;
	cout<<"Terminos: "; 
	cin>>ter;
	i=1;
	do {
		res = n * i;
		i++;
		cout<<n<<" x "<<i<<" es igual a: "<<res<<endl;
	} while(i<=ter);
	
	return 0;
}