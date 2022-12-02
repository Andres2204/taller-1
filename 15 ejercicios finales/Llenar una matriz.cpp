#include "iostream"
using namespace std;
/*
En una tienda de electronicos, quieren darle un precio a 5 distintos perifericos,
cree un programa que guarde en una matriz, el nombre de los perifericos y el precio

*/

int main () {
    string productos[5][2];

    for (int i = 0; i < 5; i++) {
        cout<<"ingrese el nombre del producto: "; cin>>productos[i][0];
        cout<<"ingrese el precio: "; cin >> productos[i][1];
    }

    for (int i = 0; i < 5; i++){
        cout<<productos[i][0]<<" : "<<productos[i][1]<<endl;

    }



    return 0;
}