#include "iostream"
using namespace std;

int main() {

    string palabra;
    cout<<"Ingrese una palabra: "; getline(cin, palabra);
    int i;
    for (i = 0; i < palabra.size(); i++) {
        for (int j=palabra.size()-i; j > 0; j--){
            cout<<" ";
        }
        for (int k = 0; k<=i; k++) {
            cout<<palabra[k]<<" ";
        }
        cout<<endl;
    }

    return 0;
}