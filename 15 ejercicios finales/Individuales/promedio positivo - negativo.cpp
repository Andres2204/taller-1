#include "iostream"
using namespace std;

/*
llenar un array numerico con n catidad de numero y mostrar como resultado los siguientes datos:
- numero de positivos y su porcentaje
- numero de negativos y su porcentaje
- numero de neutrales y su porcentaje
- numero maximo y minimo

*/

int main() {
    // inicializacion
    int longitud, positivos=0,promedio_pos=0, 
    negativos=0,promedio_neg=0,neutrales=0, promedio_neu=0,max=0,min=1000000000;
    cout<<"longitud del array: "; cin>>longitud;
    int array[longitud];

    // llenar array
    for (int i = 0; i<longitud; i++) {
        cout<<"elemento "<<i+1<<" del array: "; cin >> array[i];
    }

        for (int i = 0; i<longitud; i++) {
            //tipo de numero
            if (array[i] > 0) {
                positivos++;
            } else if (array[i] < 0) {
                negativos++;
            } else {
                neutrales++;
            }

            //max-min
            if(array[i]>max) {
                max=array[i];
            }
            if(array[i]<min) {
                min=array[i];
            }

        }

    //resultados
    //inv1*=100/sumat
    cout<<"Hay "<<positivos<<" con un porcetaje del "<<positivos*(100/longitud)<<"%"<<endl;
    cout<<"Hay "<<negativos<<" con un porcetaje del "<<negativos*(100/longitud)<<"%"<<endl;
    cout<<"Hay "<<neutrales<<" con un porcetaje del "<<neutrales*(100/longitud)<<"%"<<endl;
    cout<<"El maximo fue "<<max<<endl;
    cout<<"El minimo fue "<<min<<endl;

    return 0;
}