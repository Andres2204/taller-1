#include <iostream>

/*

Calcular el costo de una llamada, dependiendo si es
local, nacional o internacional.	

*/
using namespace std;
int main(){
	int minu, vpagar;
	string tipo, marc;
	cout<<"Tipo [ local, nacional, internacional ]: "; getline( cin, tipo );
	cout<<"Minutos: "; cin>>minu;
	if (tipo == "local"){
		if (minu <= 5 && minu>0){ vpagar = minu*100; }
		else if (minu > 5){ vpagar = minu*50; }
	}
    else if (tipo == "nacional"){
		if (minu <=5 && minu >0){ vpagar = minu *250; }
		else if (minu > 5){ vpagar = minu*200; }
	}
	else if (tipo == "internacional"){
		cout<<"marcacion <007> <009>: "; cin >> marc;
		
		if (marc == "007" && minu <= 5 && minu >5){
			vpagar = minu*500;
		}
		else if (marc == "007" && minu > 5){
			vpagar = minu *400;
		}
		else if (marc == "009" && minu <= 5 && minu > 0){
			vpagar = minu *530;
		}
		else if (marc == "009" && minu > 5){
			vpagar = minu *440;
		}
	}
	cout<<"Valor a pagar: "<<vpagar;
	
	return 0;
}