#include<iostream>
using namespace std;

/*

*/
int main() {
    int term, res, num;
    cout<<"Numero: "; cin >> num;
    cout<<"Terminos: "; cin >> term;
    int i = 1;
    while (i <= term) {
        res = i * num;
        cout<<i<<" * "<<num<<" : "<<res<<endl;
        i++;
    }
    return 0;
}


