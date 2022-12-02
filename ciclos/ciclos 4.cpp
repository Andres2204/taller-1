#include "iostream"
using namespace std;
int main () {
    int terminos, i=1;
    cout << "Terminos: "; cin >> terminos;
    do {
        cout<<i<<" * 5 : "<<i*5<<endl;
        i++;
    } while (i<=terminos);
    return 0;
}