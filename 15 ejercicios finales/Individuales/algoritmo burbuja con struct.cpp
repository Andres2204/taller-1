#include<iostream>
#include<conio.h>
#include<string.h>
#define MAX 50
struct ordenamiento {int elem ;};
using namespace std;

/*

Hacer un algoritmo burbuja para ordenar un vector

*/

void burbuja (int n,struct ordenamiento a[]) {
    int i,j;
    struct ordenamiento temp;
    for(i=1;i<n;i++) {
        for(j=n-1;j>=i;j--) {
            if (a[j-1].elem >a[j].elem) {
                temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
        }
    }
}


int main () {
    struct ordenamiento vector[6] = {12,36,67,32,353313,534};
    burbuja(6,vector);

    for (int i = 0; i<6; i++) {
        cout<<vector[i].elem<<endl;
    }


    return 0;
}