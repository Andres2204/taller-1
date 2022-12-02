#include "iostream"

using namespace std;

// factorial (int i, factRes)
int fact(int i) {

    int j, factRes=1;
    for (j = i; j>0; j--) {
        factRes*=((2*i)+1);
    }

    cout<<factRes<<endl;
    return factRes;
}

int main () {
    int n=5, x=5, i, factRes;
    float sumatoriaRes=0;

    if (n<=0) { // Si se cumple se salta todo lo que hay despues.
        cout<<"Dato incorrecto.";
        return 0;
    }

    for ( i = 1; i<=n-1; i++) {
        factRes=fact(i);
        sumatoriaRes += (x*(i^(2*i+1)))/(factRes);
    }
    cout<<"El resultado de la sumatoria ha sido: "<<sumatoriaRes<<endl;


    return 0;
}


