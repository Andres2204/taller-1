#include <iostream>

using namespace std;
int num;

void par(int numero){
    int num2 = 45;

    if (numero % 2 == 0){
        cout<<"El numero es par";
        cout<<num2;
    }
    else {
        cout<<"El numero es impar";
    }
}
int main(int argc, char argv){
    cout<<"Digite un numero: ";
    cin>> num;
    par(num);
    return 0;
}