#include <iostream>
int vec[10],n,i,val,pos;
int mat[10][10],f,c,j;
using namespace std;

void ordenado(int vect[],int n){
    int j,aux;
	for (i=0;i<n;i++){
		for (j=0;j<n-1;j++){
		    if (vect[j]>vect[j+1]){
                aux=vect[j];
                vect[j]=vect[j+1];
                vect[j+1]=aux;
	        }
	    }
	}
}
int buscar(int vec[10],int n, int val) { i=0;
  while (i<n && val!= vec[i]) {i++;}
  if (i<n) { return i;}
  else { return -1;}  
}

void insOrdenado(){
	int i = 0, j;
	
	while(i<n && val>vec[i]){ i++; }
	n++;
	for (j = n-1; j>i; j--) {
		vec[j] = vec[j-1];
	}
	vec[j]=val;
}

int main() {
    cout<<"tamanno vector:";  //llenado vector
    cin>>n;
    i=0; //inicia en cero
    while (i<n){ 
        cout<<"Valor posicion "<< i+1 <<":";
        cin>>vec[i];
        i++;         
    }
    for (i=0;i<n;i++){  //mostrar vector
        cout<<vec[i]<<"\t";        
    }
      
        cout<<"\nValor a insertar: ";
        cin>>val;
      
        insOrdenado();
      
    for (i=0;i<n;i++) {  //mostrar vector
        cout<<vec[i]<<"\t";        
    }
  //buscar en vector
/*cout<<"Valor a buscar:"; cin>>val;
pos=buscar(vec,n,val);
if (pos== -1)
{cout<<"Valor no encontrado";  
} else
{ cout<<"Valor en posicion "<<pos+1;}*/

  
  /*cout<<"\nFilas:"; //llenado matriz
  cin>>f;
  cout<<"Columnas:";
  cin>>c;
  for (i=0;i<f;i++)
    { for (j=0;j<c;j++)
      {//cout<<"Valor pos "<<i+1<<"-"<<j+1<<":";
       //cin>>mat[i][j]; 
        mat[i][j]=i*j; //aleatorios
      }
   }
  for (i=0;i<f;i++) //mostrar matriz
    { for (j=0;j<c;j++)
      {cout<<mat[i][j]<<"\t"; 
      }
    cout<<"\n";
   }*/
   
   
    return 0;
}
