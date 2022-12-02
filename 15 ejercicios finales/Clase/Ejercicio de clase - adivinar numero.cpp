#include <iostream>
#include <time.h>
#include <cstdlib>


using namespace std;

int pc, n, i = 1, vidas, r1,r2;

int main(){
	cout<<"Rango de numeros a adivinar(ingresar el menor primero y luego el mayor): "; cin>> r1>>r2;
	srand(time(NULL));
	pc = r1 + rand ()%(r1-r2);	
	cout<<"Cuantas vidas quieres?: "; cin>>vidas;
	cout<<"Ingrese un numero: "; cin>>n;
	
	while(n!=pc){
		if(i == vidas){
			cout<<"Has perdido, el numero era: "<<pc; 
			return 0;
		}
		i++;
		
		if (n<pc){
			cout<<"El numero ingresado es menor, ingrese otro numero: "; cin>>n;
		}
		else if (n > pc) {
			cout<<"El numero ingresado es mayor, ingrese otro: "; cin>>n;
		}
	}
	cout<<i<<endl;
	cout<<"Has GANADO!!!"<<endl;
	
    return 0;
}