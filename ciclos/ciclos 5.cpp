#include "iostream"
using namespace std;

/*Hacer potenciacion con los tres ciclos*/

int main () {
    int base=2, exponente=3, res=1;

    for (int i = 0; i < exponente; i++) {
        res *= base;
    }
    cout<<"Potenciacion con for: "<<res<<endl;
    
    // Reiniciar variables
    int i=1; res=1;

    while (i<=exponente) {
        res*=base;
        i++;
    }
    cout<<"Potenciacion con while: "<<res<<endl;

    i=1; res=1;
    do {
        res*=base;
        i++;
    } while (i<=exponente);
    cout<<"Potenciacion con dowhile: "<<res<<endl;
    
    

    return 0;
}