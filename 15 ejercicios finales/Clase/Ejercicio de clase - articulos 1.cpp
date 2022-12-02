#include "iostream"

using namespace std;

int n, cod, i = 0;
float valor, sumv = 0;

int main(){
	cout<<"Numero de articulos: "; cin>>n;
	
	for (i=0; i<n; i++){
		cout<<"Codigo: "; cin>>cod;
		cout<<"Valor del articulo: "<<i+1<<": "; cin>> valor;
		sumv = sumv + valor;
	}
	cout<<"Promedio del valor de los articulos es: "<<sumv/n;
	
	return 0;
}
