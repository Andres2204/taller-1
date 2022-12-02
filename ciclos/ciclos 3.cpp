#include "iostream"
using namespace std;
int main () {
    int temps, temp, menores=0;
    float promedio=0;
    cout<<"Temperaturas: "; cin >> temps;
    for (int i = 1; i<=temps; i++) {
        cout<<"-Temp: "; cin >> temp;
        if (temp > 20) {
            promedio += temp;
        } else {
            menores ++;
        }
    }
    
    cout<<"El promedio de las temperaturas mayores a 20 es: "<<promedio/(temps-menores)<<endl;

    return 0;
}