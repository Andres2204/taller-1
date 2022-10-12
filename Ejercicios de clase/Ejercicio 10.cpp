#include <iostream>

int num1, num2, num3, maxnum;

using namespace std;
int mayor(int num1, int num2, int num3){
    if (num1 > num2 && num1 > num3){ return num1; }
    else if (num2 > num1 && num2 > num3) { return num2; }
    else { return num3; }
}

int main(int argc, char** argv){
    cout<<"Numero 1: "; cin>>num1;
    cout<<"Numero 2: "; cin>>num2;
    cout<<"Numero 3: "; cin>>num3;

    maxnum = mayor(num1, num2, num3);

    cout<<maxnum;

    return 0;
}