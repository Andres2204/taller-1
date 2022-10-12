#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

/*NOMINA POR TIPO DE EMPLEADO*/
using std::string;
int main() {

	int empleado, salario;
    string type[3] = {"asalariado","por horas", "por comision"};
	float horas_minimas,horas_extra,ventas;


    cout<<"1. Asalariado"<<endl;
    cout<<"2. Por Horas"<<endl;
    cout<<"3. Por Comision"<<endl;
	cout<<"Tipo de empleado: ";
	cin >> empleado;


	cout<<"SMLV: 1000000"<<endl;
	switch (empleado) {
		case 1:  
			cout<<"Salario: ";
			cin>>salario;
			if (salario>0 and salario<=1400000) {
				salario += 72000; 
			}
            break;
		case 2:
            cout<<"Numero de horas trabajadas: ";
            cin>>horas_minimas;
            cout<<"Numero de horas extra: ";
            cin>>horas_extra;
            cout<<"Valor por hora: ";
            cin>>salario; 
            salario = (horas_minimas*salario)+(horas_extra*(salario*1.5));
			break;

		case 3:
			cout<<"ventas (en millones): ";
			cin >> ventas;
			if (ventas>0 and ventas<=10) {
				salario = 80000;
			} else if (ventas > 10) {
				salario = 80000 + (trunc(ventas/10)+100000);
			}
			break;
	} 

	cout<<"Salario de empleados "<<type[empleado-1]<<": "<<salario<<endl;
    if (salario <= 4000000) {
        cout<<"Los egresos son: "<<salario*0.045;
    } else {
        cout<<"Los egresos son: "<<salario*0.1;
    }

	getch();
	return 0;
}