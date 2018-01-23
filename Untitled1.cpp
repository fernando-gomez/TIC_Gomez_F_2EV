/*Arrays*/
using namespace std;
#include<iostream>
int main(){
    int a[5];
    int cont,salir,h;
    int mayor=0;
    for (cont=0;cont<5;cont++){
        cout<<"Dime un numero: ";
        cin>>a[cont];
    }
    for (cont=0;cont<5;cont++){
    for (h=0;h<5;h++){
        if (a[cont]>a[h]){
        mayor=mayor+1;}
        }
    if (mayor=5):{
    cout<<"El mayor es: ";
    cout<<cont;}
    }
    cin>>salir;
    return 0;
}
