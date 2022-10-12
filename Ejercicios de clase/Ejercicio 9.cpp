#include<iostream>

using namespace std;

float inv1,inv2,inv3,pc1,pc2,pc3,sumat;

int main(){
    cout<<"Capital del Inversor 1: "<<endl;
    cin >>inv1;
    cout<<"Capital del Inversor 2: "<<endl;
    cin >>inv2;
    cout<<"Capital del Inversor 3: "<<endl;
    cin >>inv3;
    sumat=inv1+inv2+inv3;

    inv1*=100/sumat;
    inv2*=100/sumat;
    inv3*=100/sumat;

    cout<<"Inversor 1, su porcentaje es:"<<inv1<<endl;
    cout<<"Inversor 2, su porcentaje es:"<<inv2<<endl;
    cout<<"Inversor 3, su porcentaje es:"<<inv3<<endl;
    return 0;
}