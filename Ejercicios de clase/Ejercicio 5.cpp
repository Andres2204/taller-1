#include <iostream>
#include <conio.h>

/*

    Comvertir numeros a dias de la semana.

*/

using namespace std;
int main(){
	int num;
	cout<<"Dia de la semana[1-7]: "; cin>>num;
	
	switch (num){
		case 1: cout<<"Es lunes"<<endl; break;
		case 2: cout<<"Es martes"<<endl; break;
		case 3: cout<<"Es miercoles"<<endl; break;
		case 4: cout<<"Es jueves"<<endl; break;
		case 5: cout<<"Es viernes"<<endl; break;
		case 6: cout<<"Es sabado"<<endl; break;
		case 7: cout<<"Es domingo!!!"<<endl; break;
		default:
			cout<<"Error dia fuera de rango, digite nuevamente"<<endl;
			break;
	}
	
    getch();
	return 0;
}