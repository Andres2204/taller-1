#include "iostream"

using namespace std;
int main() {
    int n = 12;
    float ventas[n];
    float mayor=0, promedio=0;
    string mes;

    // LLenar vector
    for(int i = 0; i<12; i++) {
        cout<<"Venta "<<i+1<<": "<<endl;
        cin >> ventas[i];

        if (ventas[i]>mayor) {
            mayor = ventas[i];
            cout<<"Mes: "; cin >> mes;
        }
        promedio += ventas[i];
    }

    // Ordenar
    float aux=0;
    for(int i=1;i<n;i++) {
        for(int j=n-1;j>=i;j--) {
            if (ventas[j-1] >ventas[j]) {
                aux=ventas[j-1];
                ventas[j-1]=ventas[j];
                ventas[j]=aux;
            }
        }
    }

    // mostrar vector
    for (int i = 0 ; i < 12; i++) {
        cout<<"o: "<<ventas[i]<<endl;
    }

    // Resultados
    cout<<"La mayor venta fue de: "<<mayor<<" en el mes de "<<mes<<endl;
    cout<<"El promedio es: "<<promedio/12<<endl;


    return 0;
}