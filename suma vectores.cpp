#include<iostream>
using namespace std;
int main(){
    int v1[5],v2[5],vt[5],salir,cont;
    for (cont=0;cont<5;cont++){
    cout<<"Dime el valor "<<cont+1<<" del primer vector: ";
    cin>>v1[cont];
       }
    for (cont=0;cont<5;cont++){
    cout<<"Dime el valor ";
    cout<<cont+1;
    cout<<" del segundo vector: ";
    cin>>v2[cont];
       }
    for (cont=0;cont<5;cont++){
        vt[cont]=v1[cont]+v2[cont];
       }
    for (cont=0;cont<5;cont++){
        cout<<"v1["<<cont+1<<"]+v2["<<cont+1<<"]="<<v1[cont]<<"+"<<v2[cont]<<"="<<vt[cont]<<endl;
    }
    cin>>salir;
    return 0;
    }
