#include<iostream>
using namespace std;

/*

Una empresa incrementa los salarios de los trabajadores de la 
siguiente manera:

Tipo de salario %
De 0 a $9 000 20%
De $9 000 a $15 000 10%
De $15 000 a $20 000 5%
Más de $20 000 3%

Escribir un programa que pregunte al usuario salario y muestre
*/

float Aumento(int contrato, float salario) {
        switch (contrato){
        case 1:  salario += (salario * 0.2); break;
        case 2:  salario += (salario * 0.1); break;
        case 3:  salario += (salario * 0.05); break;
        case 4:  salario += (salario * 0.03); break;
        default: cout<<"Opcion invalida"; break;
    }
    return salario;
}

int main() {

    float salario, aumento;
    int contrato;

    cout<<"indique su tipo de contrato"<<endl;
    cout<<"1. De 0 a $9000"<<endl;
    cout<<"2. De $9000 a $15000"<<endl;
    cout<<"3. De $15000 a $20000"<<endl;
    cout<<"4. Mas de $20000"<<endl;
    cin>>contrato;
    cout<<"Ingrese su salario actual"<<endl; cin >> salario;

    aumento = Aumento(contrato, salario);

    cout<<"Su nuevo salario sera: "<<aumento<<endl;
    system("pause");
    return 0;
}
