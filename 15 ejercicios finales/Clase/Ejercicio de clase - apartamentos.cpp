#include <iostream>

using namespace std;

int npi, napt, nper, edad, i, j, k, chom, sedad,snper,mayor;
string genero;
float lt;

void piso(){
	chom = 0; sedad = 0; snper = 0;
		for(j=1; j <= napt; j++){
			cout<<"\nAPARTAMENTO PISO "<<i<<" NUMERO "<<j<<endl;
			cout<<"Consumo en litros agua: "; cin>>lt;
				if(lt > mayor){
					mayor=lt;
				}
			cout<<"Numero de personas en el apartamento: "; cin>>nper;
			snper = snper + nper;
				for(k=1; k<=nper; k++){
					cout<<"Persona numero "<<k<<endl;
					cout<<"edad: "; cin>>edad;
					cout<<"Genero <masculino><femenino>: ";cin>>genero;
					if(genero == "masculino"){
						chom = chom +1;
					}
					sedad = sedad + edad;
				}
}

int main(){
	cout<<"Numero de pisos: "; cin>>npi;
	cout<<"Numero de apartamentos: "; cin>>napt;
	mayor = 0;
	for(i=1; i<=npi; i++){
		piso();
	
		cout<<"\nHombres en el piso "<<i<<": "<<chom<<endl;
		cout<<"Promedio edad personas por piso: "<< sedad/snper<<endl;
	}
	cout<<"Mayor consumo litros agua en el edificio: "<<mayor;
	
	return 0;
}